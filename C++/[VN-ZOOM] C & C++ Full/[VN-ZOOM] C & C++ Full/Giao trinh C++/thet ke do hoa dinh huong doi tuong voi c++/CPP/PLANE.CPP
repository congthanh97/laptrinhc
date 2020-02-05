// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "plane.hpp"

Plane::Plane() : Line()
{
	n = Vector(0,0,1);
}

Plane::Plane(const Vector &n, float d):Line(n,d)
{
}

Plane::Plane(const Point &p, const Vector &v):Line(p,v)
{
}

Plane::Plane(const Point &p, const Vector &a, const Vector &b):Line(p,(a&b))
{
}

Plane::Plane(const Point &a, const Point &b, const Point &c):Line(a,(b-a)&(c-a))
{
}


