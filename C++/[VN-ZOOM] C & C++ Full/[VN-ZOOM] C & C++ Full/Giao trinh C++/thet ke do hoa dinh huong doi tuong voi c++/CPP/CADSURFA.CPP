// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "cadsurfa.hpp"
#include "bezier.hpp"

BspSurface::BspSurface(int m, int n)
: Surface(), Polyline((n+1)*(m+1)), Bspline(n)
{
	Lu = m;
	Lv = n;
}

Point BspSurface::operator()(float u, float v)
{
	u *= 0.99*(Lu-m+2);
	v *= 0.99*(Lv-m+2);
	Point q;
	float t1, t2;
	int k;
	for (int i=0; i<=Lu; i++)
	{
		t1 = NN(i,m,u);
		k = i*(Lv+1);
		for (int j=0; j<=Lv; j++)
		{
			t2 = t1*NN(j,m,v);
			q = q + t2*p[k +j];
		}
	}
	return q;
}

RevolBspCurve::RevolBspCurve(int n) : BspCurve(n) {}

Point RevolBspCurve::p(float a)
{
	return BspCurve::operator()(a);
}


