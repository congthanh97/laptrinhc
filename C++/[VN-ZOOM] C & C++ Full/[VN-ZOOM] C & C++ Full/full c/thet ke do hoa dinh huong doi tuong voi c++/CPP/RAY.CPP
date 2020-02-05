// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "ray.hpp"

Ray::Ray() : ParaLine()
{
}

Ray::Ray(const Point &p, const Vector &v) : ParaLine(p,v)
{
}

Ray::Ray(const Point &p1, const Point &p2) : ParaLine(p1,p2)
{
}

float Ray::Hit(const ParaLine &l)
{
	Point q;
	float t = -1;
	if (Intersec(l,q)) t = Project(q);
	if (t>0) return t;
	return -1;
}
