// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "mdelbrot.hpp"
#include "complex.hpp"
#include "ndc.hpp"
#include "affine.hpp"

int Count(const Complex &, int);

void Mandelbrot(float L, float T, float R, float B)
{
	float dx = R-L, dy=T-B;
	if (dx==0) dx=1;
	if (dy==0) dy=1;
	Affine A1(Vector(dx,dy),SCALING), A2(Vector(L,B));
	Affine N = A1*A2;
	NDC ndc;
	int l, t, r, b;
	ndc.Map(0.1,0.9,l,t);
	ndc.Map(0.9,0.1,r,b);
	int num = 50, c, mc = getmaxcolor();
	Point p;
	for (int i=l; i<= r; i++)
		for (int j=t; j<= b; j++)
		{
			ndc.InvMap(i,j,p.x,p.y);
			p = p*N;
			c = Count(Complex(p.x,p.y),num);
			if (c==num) c=0; else c = ceil(mc*(1.0-1.0*c/num));
			putpixel(i,j,c);
		}
}

int Count(const Complex &c, int n)
{
	Complex d = c;
	int i = 1;
	while ((i<=n) && (norm(d)<=4.0))
	{
		d = d*d + c;
		i++;
	}
	return i;
}