// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "segment.hpp"

Segment::Segment(const Point &p, const Point &q): ParaLine(p,q)
{
}

Point Segment::operator[](int i)
{
	if (i==1) return (p + v);
	return p;
}

ParaLine Segment::Bisector()
{
	return ParaLine(p+0.5*v, Vector(-v[1],v[0],0));
}

int Segment::Inside(const Point &q)
{
	float d = Dist(q), t = Project(q);
	return ((d==0)&&(t>0)&&(t<1.0));
}

int Segment::Intersec(const Segment &l, float &t1, float &t2)
{
	Point q;
	if (ParaLine::Intersec(l,q))
	{
		if (Inside(q) && l.Inside(q))
		{
			t1 = t2 = Project(q);
			return 1;
		}
		return 0;
	}
	if (Overlap(l))
	{
		t1 = Project(l.p), t2 = Project(l.p+l.v);
		if ((t1>1.0)||(t2<0.0)) return 0;
		if (t1<0.0) t1 = 0.0;
		if (t2>1.0) t2 = 1.0;
		return 1;
	}
	return 0;
}
