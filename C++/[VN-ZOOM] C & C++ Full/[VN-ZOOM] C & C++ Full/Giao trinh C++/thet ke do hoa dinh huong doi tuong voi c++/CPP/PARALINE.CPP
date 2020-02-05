// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "paraline.hpp"

ParaLine::ParaLine(): p(), v(1.0,0.0,0.0)
{
}

ParaLine::ParaLine(const Point &q, const Vector &w):p(q), v(w)
{
}

ParaLine::ParaLine(const Point &p1, const Point &p2) : p(p1), v(p2-p1)
{
}

Point ParaLine::operator ()(float t) const
{
	return p + t*v;
}

Vector ParaLine::Dir() const
{
	return v;
}

float ParaLine::Project(const Point &q)
{
	float d = v*v;
	if (d==0) return 0;
	return ((q-p)*v)/d;
}

float ParaLine::Dist(const Point &q)
{
	Vector a = (p + Project(q)*v) - q;
	return a.Modul();
}

int ParaLine::Coplanar(const ParaLine &l)
{
	return ((p-l.p)*(v&l.v)==0);
}

int ParaLine::Parallel(const ParaLine &l)
{
	return (v&l.v)==Vector(0,0,0);
}

int ParaLine::Overlap(const ParaLine &l)
{
	if (!Parallel(l)) return 0;
	float d = Dist(l(0));
	return (d==0.0);
}

int ParaLine::Intersec(const ParaLine &l, Point &q)
{
	//tham khao trang 139
}