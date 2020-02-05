// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "raster.hpp"

void swap(int &, int &);

int Raster::Tile[4][4] = {0};
int Raster::Row = 500;

Raster::Raster()
{
	EnterGraphics();
	SetTile();
}

Raster::~Raster()
{
	ExitGraphics();
}

void Raster::Putpixel(int x, int y)
{
	putpixel(x,y,Tile[x%4][y%4]);
}

void Raster::Line(int x1, int y1, int x2, int y2)
{
	int dx = abs(x2-x1),
		dy = abs(y2-y1),
		n = (dy<dx);
	if (!n)
	{
		swap(x1,y1);
		swap(x2,y2);
		swap(dx,dy);
	}
	if (x1>x2)
	{
		swap(x1,x2);
		swap(y1,y2);
	}
	int p = 2*dy-dx,
		c1 = 2*dy,
		c2 = 2*(dy-dx),
		e = 1;
	if (y1>y2) e=-1;
	int y = y1;
	for (int x=x1; x<= x2; x++)
	{
		if (n) Putpixel(x,y); else Putpixel(y,x);
		if (p<0) p+=c1; else { p+=c2; y+=e;}
	}
}

void Raster::Circle(int x0, int y0, int r)
{
	int p = 3-2*r, x = 0, y = r;
	do{
		Putpixel(x0+x, y0+y);
		Putpixel(x0-x, y0+y);
		Putpixel(x0-x, y0-y);
		Putpixel(x0+x, y0-y);
		Putpixel(x0+y, y0+x);
		Putpixel(x0-y, y0+x);
		Putpixel(x0+y, y0-x);
		Putpixel(x0-y, y0-x);
		if (p<0) p+=4*x+6; else { p+=4*(x-y)+10; y--;}
		x ++;
	} while (x<=y);
}

void Raster::Ellipse(int x0, int y0, int a, int b)
{
	float p = 2.0*b*b + a*a*(1-2*b);
	int x = 0, y = b;
	do{
		Putpixel(x0+x, y0+y);
		Putpixel(x0-x, y0+y);
		Putpixel(x0-x, y0-y);
		Putpixel(x0+x, y0-y);
		p+=1.0*b*b*(4*x+6);
		if (p>=0) { p+= 4.0*a*a*(1-y); y--;}
		x ++;
	} while (1.0*x*b*b<=1.0*y*a*a);

	swap(a,b);
	p = 2.0*b*b + a*a*(1-2*b);
	x = b, y = 0;
	do{
		Putpixel(x0+x, y0+y);
		Putpixel(x0-x, y0+y);
		Putpixel(x0-x, y0-y);
		Putpixel(x0+x, y0-y);
		p+=1.0*b*b*(4*y+6);
		if (p>=0) { p+= 4.0*a*a*(1-x); x--;}
		y ++;
	} while (1.0*x*a*a>=1.0*y*b*b);
}

void Raster::Fill(int x, int y, int c)
{
	int intc = getpixel(x,y),
		maxx = getmaxx()-1,
		maxy = getmaxy()-1,
		top = 0,
		n = 20000;
	int far *s = new int[n];
	s[top++] = x;
	s[top++] = y;
	while (top>0 && top<n-10)
	{
		y = s[--top];
		x = s[--top];
		if (getpixel(x,y)==intc)
		{
			putpixel(x,y,c);
			if (x>0 && getpixel(x-1,y)==intc)
			{
				s[top++] = x - 1;
				s[top++] = y;
			}
			if (x<maxx && getpixel(x+1,y)==intc)
			{
				s[top++] = x + 1;
				s[top++] = y;
			}
			if (y>0 && getpixel(x,y-1)==intc)
			{
				s[top++] = x;
				s[top++] = y - 1;
			}
			if (y<maxy && getpixel(x,y+1)==intc)
			{
				s[top++] = x;
				s[top++] = y + 1;
			}
		}
	}
	delete far s;
}

void Raster::RFill(int n, Pixel *p, int c)
{
	int x = p[0].x, y = p[0].y;
	moveto(x,y);
	for (int i=1; i<n; i++)
	{
		x += p[i].x;
		y += p[i].y;
		lineto(p[i].x,p[i].y);
	}
	lineto(p[0].x,p[0].y);
	Fill(x/n,y/n,c);
}

void Raster::MakeEdgeInfo(Pixel p1, Pixel p2, Pixel p3, EdgeInfo &e)
{
	e.x_int = p1.x;
	e.y_upper = p2.y;
	if (p3.y>p2.y) e.y_upper -= 1;
	e.recip_slope = 1.0*(p2.x-p1.x)/(p2.y-p1.y);
}

int Raster::MoreThan(void *a1, void *a2)
{
	EdgeInfo *e1 = (EdgeInfo*)(a1), *e2 = (EdgeInfo*)(a2);
	return ((e1->x_int>e2->x_int) ||
			((e1->x_int==e2->x_int)&&(e1->recip_slope>e2->recip_slope)));
}

void Raster::InitTable(int n, Pixel *p)
{
	//tham khao trang 293
}

void Raster::DeleteTable()
{
	delete Edge;
	delete Table;
}

void Raster::Fill(int n, Pixel *p)
{
	//tham khao trang 294
}

int Raster::SetTile()
{
	for (int i=0; i<4; i++)
		for (int j=0; j<4; j++)
			Raster::Tile[i][j] = RED;
	Row = getmaxy();
	return 1;
}

void Raster::SetTile(int *t)
{
	for (int i=0; i<4; i++)
		for (int j=0; j<4; j++)
			Raster::Tile[i][j] = t[i*4+j];
}

void Raster::SetTile(int c)
{
	for (int i=0; i<4; i++)
		for (int j=0; j<4; j++)
			Raster::Tile[i][j] = c;
}

void Raster::Show(int x, int y, Bitmap &b)
{
	putimage(x, y, b.buf, COPY_PUT);
}

Bitmap Raster::Store(int l, int t, int r, int b)
{
	void far* buf = farmalloc(imagesize(l, b, r, t));
	if (buf == NULL) return Bitmap(0);
	getimage(l, b, r, t, buf);
	return Bitmap(buf);
}



void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

