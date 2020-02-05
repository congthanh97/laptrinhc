// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "fract.hpp"

Gauss Fract::Randomer;

Fract::Fract(float h)
{
	H = h;
	f = exp((0.5-H)*log(2.0));
}

void Fract::Line(Window &w, Point a, Point b, float s, float min)
{
	w.Moveto(a);
	m = min;
	Line(w,a,b,s);
}

void Fract::Line(Window &w, Point a, Point b, float s)
{
	Vector v = a - b;
	if (v*v<m) w.Lineto(b);
	else
	{
		s *= f;
		float r = Randomer.Random()*s;
		Point n;
		n.x = 0.5*(a.x+b.x) - r*(b.y-a.y);
		n.y = 0.5*(a.y+b.y) + r*(b.x-a.x);
		Line(w,a,n,s,m);
		Line(w,n,b,s,m);
	}
}

