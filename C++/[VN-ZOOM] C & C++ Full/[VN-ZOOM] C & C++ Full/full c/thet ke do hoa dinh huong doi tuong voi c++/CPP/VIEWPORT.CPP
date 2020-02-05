// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "viewport.hpp"

Viewport::Viewport()
{
	L = B = 0;
	T = R = 1;
}

Viewport::Viewport(float l, float t, float r, float b)
{
	L=l;
	T=t;
	R=r; if (r<=l) R = l + 1;
	B=b; if (t<=b) B = t - 1;
}

Viewport::Code Viewport::Encode(const Point & p)
{
	Code c = {p.x<L,p.y>T,p.x>R,p.y<B};
	return c;
}

inline int In(Viewport::Code c)
{
	return ((!c.l)&&(!c.t)&&(!c.r)&&(!c.b));
}

int Viewport::Clip(Point &p1, Point &p2)
{
	//tham khao cac trang 86-87
}

