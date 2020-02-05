// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "bspline.hpp"

Bspline::Bspline(int l, int mm): kn(l+mm+1)
{
	L = l;
	m = mm;
	BKnot();
}

void Bspline::BKnot()
{
	int i;
	for (i=m;i<L+1;i++) kn.Set(i,i-m+1);
	for (i=L+1;i<L+m+1;i++) kn.Set(i,L-m+2);
}

float Bspline::NN(int k, int m, float t)
{
	if (m==1)
	{
		if ((t<kn[k]) || (t>=kn[k+1])) return 0.0;
		return 1.0;
	}
	else
	{
		float d1, d2, s;
		d1 = kn[k+m-1]-kn[k];
		if (d1!=0.0) s = (t-kn[k])*NN(k,m-1,t)/d1; else s=0.0;
		d2 = kn[k+m]-kn[k+1];
		if (d2!=0) s += (kn[k+m]-t)*NN(k+1,m-1,t)/d2;
		return s;
	}
}