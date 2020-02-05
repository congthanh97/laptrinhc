// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "lut.hpp"

extern "C"{
#include "dos.h"
}

LUT::LUT()
{
	palettetype pal;
	getpalette(&pal);
	for (int i=0; i<pal.size; i++)
		setrgbpalette(pal.colors[i], i*4,i*4,i*4);
	setbkcolor(15);
}


int huge detectEGA();
float max(float, float, float);
float min(float, float, float);
float Value(float, float, float);
void Init256();
void RGB2HLS(float, float, float, float &, float &, float &);
void HLS2RGB(float, float, float, float &, float &, float &);

int LUT256::nr = 3;
int LUT256::ng = 3;
int LUT256::nb = 2;

LUT256::LUT256(int r, int g, int b)
{
	Init256();
	nr = 1<<r;
	ng = 1<<g;
	nb = 1<<b;
	Load();
}

LUT256::~LUT256()
{
	closegraph();
}

void LUT256::Load()
{
	Color Buff[256], *tmp;
	for (int i=0; i<nr; i++)
		for (int j=0; j<ng; j++)
			for (int k=0; k<nb; k++)
			{
				tmp = &Buff[nb*ng*i+ nb*j + k];
				tmp->R = i*4;
				tmp->G = j*4;
				tmp->B = k*4;
			}
	struct REGPACK	  Reg;
	Reg.r_ax = 0x1012;
	Reg.r_bx = 0x0000;
	Reg.r_cx = 256;
	Reg.r_es = FP_SEG(Buff);
	Reg.r_dx = FP_OFF(Buff);
	intr(0x10, &Reg);
}

void LUT256::SetRGB(float r, float g, float b)
{
	setcolor(nb*ng*nr*r+ nb*ng*g + nb*b);
}

void LUT256::SetHLS(float h, float l, float s)
{
	float r, g, b;
	HLS2RGB(h,l,s,r,g,b);
	SetRGB(r,g,b);
}

void RGB2HLS(float r, float g, float b, float &h, float &l, float &s)
{
	float mx = max(r,g,b), mn = min(r,g,b), rc, gc, bc;
	l = (mn + mx)/2.0;
	if (mn==mx) s=0.0;
	else
	{
		if (l<=0.5) s = (mx-mn)/(mx+mn); else s = (mx-mn)/(2-mx+mn);
		rc = (mx-r)/(mx-mn);
		gc = (mx-g)/(mx-mn);
		bc = (mx-b)/(mx-mn);
		if (r==mx) h = bc - gc;
		else if (g==mx) h = 2 + rc - bc;
		else if (b==mx) h = 4 + gc - rc;
		h *= 60;
		if (h<.0) h+=360;
	}
}

void HLS2RGB(float h, float l, float s, float &r, float &g, float &b)
{
	if (s==0) {r=g=b=l; return;}
	float mx, mn, rc, gc, bc;
	if (l<=0.5) mx = l*(1+s); else mx = s/(1+s) + l;
	mn = 2*l - mx;
	r = Value(mn,mx,h+120);
	g = Value(mn,mx,h);
	b = Value(mn,mx,h-120);
}

int huge detectEGA()
{
	int driver, mode, sugmode = 0;
	detectgraph(&driver, &mode);
	if ((driver == EGA) || (driver == VGA)) return sugmode;
	else return grError;
}

void Init256()
{
	int gdriver, gmode, errorcode;
	gdriver = installuserdriver("VGA256", detectEGA);
	gdriver = DETECT;
	errorcode = graphresult();	if (errorcode != grOk) exit(1);
	initgraph(&gdriver, &gmode, "\\private\\oop\\graph\\bgi");
	errorcode = graphresult();	if (errorcode != grOk) exit(1);
}

float Value(float A, float B, float Hue)
{
	if (Hue>360) Hue-=360; else if (Hue<0) Hue+=360;
	if (Hue<60)  return A+(B-A)*Hue/60;
	if (Hue<180) return B;
	if (Hue<240) return A+(B-A)*(240-Hue)/60;
	return A;
}

float max(float a,float b,float c)
{
	if (a<b) a = b;
	if (a<c) a = c;
	return a;
}

float min(float a,float b,float c)
{
	if (a>b) a = b;
	if (a>c) a = c;
	return a;
}



