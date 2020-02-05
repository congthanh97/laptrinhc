// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "bezier.hpp"

Point Casteljau(Point *p, float t, int n)
{
	if (n==0) return p[0];
	return Comb(Casteljau(p,t,n-1),Casteljau(&p[1],t,n-1),t);
}

