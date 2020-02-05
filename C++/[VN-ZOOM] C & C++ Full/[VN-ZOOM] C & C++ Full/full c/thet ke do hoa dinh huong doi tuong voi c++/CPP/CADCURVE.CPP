// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "cadcurve.hpp"
#include "bezier.hpp"

int CADCurve::Closest(const Point &q)
{
	float d = (p[0] - q).Modul(), t;
	int k = 0;
	for (int i=1; i<p.Count(); i++)
	{
		t = (p[i] - q).Modul();
		if (d>t)
		{
			d=t;
			k = i;
		}
	}
	if (d<0.1) return k;
	return -1;
}

void CADCurve::ReDraw(ViewSys *w, int k)
{
	Objects::Draw(w);
	int n = p.Count() - 1;
	if (k==0)
	{
		w->Line(p[0],p[1]);
		return;
	}
	if (k==n)
	{
		w->Line(p[n-1],p[n]);
		return;
	}
	w->Line(p[k-1],p[k]);
	w->Line(p[k+1],p[k]);
}

CADCurve::CADCurve(int n) : Curve(), Polyline(n+1)
{
	float a = TWOPI/(n+1);
	for (int i=0; i<n+1; i++)
		p.Set(i,Point(cos(a*i),sin(a*i)));
}

void CADCurve::Edit(Interact &w)
{
	setwritemode(1);
	Polyline::Draw(&w);
	int b = 0, k = -1;
	Point q;
	while (1)
	{
		w.Locate(b,q);
		if (b==2) break;
		switch (b)
		{
			case 0: k = Closest(q);
					break;
			case 1:	if (k>=0)
					{
						ReDraw(&w,k);
						p.Set(k,q);
						ReDraw(&w,k);
					}
					break;
		}
	}
	setwritemode(0);
}

BezCurve::BezCurve(int n):CADCurve(n)
{
	L = n;
}

Point BezCurve::operator()(float t)
{
	return Casteljau(p.p,t,L);
}

BspCurve::BspCurve(int n, int m):CADCurve(n), Bspline(n,m) {}

Point BspCurve::operator()(float t)
{
	t *= 0.99*(L-m+2);
	Point q;
	float tmp;
	for (int i=0; i<=L; i++)
	{
		tmp = NN(i,m,t);
		q = q + tmp*p[i];
	}
	return q;
}

