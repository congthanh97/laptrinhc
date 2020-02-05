// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "tools.hpp"

void N_gon(Window &w, int n)
{
	float da = 360.0/n;
	for(int i=0; i<n; i++)
	{
		w.LineForward(1);
		w.Right(-da);
	}
}

void N_gon(Window &w, int n, float r, float x, float y,  float a)
{
	float da = TWOPI/n;
	a*=RAD_PER_DEG;
	w.Moveto(Point(x+r*cos(a), y+r*sin(a)));
	for(int i=0; i<n; i++)
	{
		a += da;
		w.Lineto(Point(x+r*cos(a), y+r*sin(a)));
	}
}

void Arc(Window &w, const Point &p, float r, float a, float b, int n)
{
	a*=RAD_PER_DEG;
	b*=RAD_PER_DEG;
	float da = (b-a)/n;
	w.Moveto(Point(p.x + r*cos(a), p.y + r*sin(a)));
	for (int i=0; i<n; i++)
	{
		a+=da;
		w.Lineto(Point(p.x + r*cos(a), p.y + r*sin(a)));
	}
}

void Arcto(Window &w, const Point &p, const Point &q, float R, int n)
{
	//tham khao trang 97
}

void Sector(Window &w, const Point &p, float r, float a, float b, int n)
{
	a*=RAD_PER_DEG;
	b*=RAD_PER_DEG;
	float da = (b-a)/n;
	w.Moveto(Point(p.x, p.y));
	for (int i=0; i<=n; i++, a+=da)
		w.Lineto(Point(p.x + r*cos(a), p.y + r*sin(a)));
	w.Lineto(Point(p.x, p.y));
}

void Plot(Window &w, Point (*p)(float), float a, float b, int n)
{
	if (n<2) n = 2;
	float t = a, dt = (b-a)/(n-1);
	w.Moveto(p(a));
	for (int i = 1; i<n; i++)
	{
		t+=dt;
		w.Lineto(p(t));
	}
}

void PlotPolar(Window &w, float (*r)(float), float a, float b, int n)
{
	if (n<2) n = 2;
	float t = a, dt = (b-a)/(n-1);
	w.Moveto(Point(r(t)*cos(t), r(t)*sin(t)));
	for (int i = 1; i<n; i++)
	{
		t+=dt;
		w.Lineto(Point(r(t)*cos(t), r(t)*sin(t)));
	}
}

float Arg(Vector &v)
{
	Vector ux(1.0,0.0);
	return acos(ux*v.Norm());
}

Vector Project(const Vector &v, const Vector &w)
{
	Vector v1 = w.Norm();
	return ((v*v1)*v1);
}

Vector Perpend(const Vector &v, const Vector &w)
{
	return (v - Project(v,w));
}

Vector Reflect(const Vector &v, const Vector &n)
{
	return (v - 2*Project(v,n));
}

Vector Bisector(const Vector &v, const Vector &w)
{
	return 0.5*(v.Norm()+w.Norm());
}

int Chop(float denom, float numer, float &t_in, float &t_out)
{
	//tham khao trang 100
}

float Power(float a, float x)
{
	if (a>0) return exp(x*log(a));
	if (a<0) return -exp(x*log(-a));
	return 0;
}


