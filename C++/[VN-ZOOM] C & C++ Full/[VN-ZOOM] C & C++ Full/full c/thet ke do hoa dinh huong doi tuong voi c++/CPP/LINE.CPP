// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "line.hpp"
#include "model.hpp"
#include "tools.hpp"
#include "base.hpp"

Line::Line(): n(0.0,1.0)
{
	D = 0;
}

Line::Line(const Vector &N, float d) : n(N)
{
	D = d;
}

Line::Line(const Point &p, const Vector &N):n(N)
{
	D = N*p;
}

Line::Line(const Point &p1, const Point &p2) : n(p2.y-p1.y, p1.x-p2.x)
{
	D = n*p1;
}

Line::Line(const Line &l) : n(l.n)
{
	D = l.D;
}

Line &Line::operator=(const Line &l)
{
	D = l.D;
	n = l.n;
	return *this;
}

float Line::Dist(const Point &q)
{
	float x = (n*q-D)/n.Modul();
	return x;
}

int Line::IOTest(const Point &q)
{
	float x = n*q;
	if (x>D) return  1;
	if (x<D) return -1;
	return 0;
}

int Line::Clip(Point &p1, Point &p2)
{
	float t_in=0.0, t_out=1.0;
	if (Chop(n*(p2-p1), D-n*p1, t_in, t_out)) return 1;
	Point p = p1;
	if (t_in>0)  p1 = p + t_in*(p2 - p);
	if (t_out<1) p2 = p + t_out*(p2 - p);
	return 0;
}

Vector Line::Norm()
{
	return n;
}

Vector Line::Norm(const Point &)
{
	return n;
}

float Line::Hit(const Ray&r)
{
	float denom = n*r.Dir();
	if (denom==0) return -1;
	return (D-n*r(0))/denom;
}

Model *Line::Modelize()
{
	return 0;
}
