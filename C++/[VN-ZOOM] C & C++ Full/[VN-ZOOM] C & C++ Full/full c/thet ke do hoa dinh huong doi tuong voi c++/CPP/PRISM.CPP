// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "prism.hpp"
#include "mesh.hpp"

Prism::Prism(int n):Polygon(n)
{
}

Model *Prism::Modelize()
{
	float h = 1.0;
	int n = p.Count(), i;
	Poly<Point> P(2*n);
	for (i=0; i<n; i++)
	{
		P.Set(i,Point(p[i].x,p[i].y,h));
		P.Set(i+n,p[i]);
	}
	Face *F = new Face[n+2];
	F[0] = Face(n);
	F[n+1] = Face(n);
	for (i=0; i<n; i++)
	{
		F[0].Setidx(i,i);
		F[n+1].Setidx(i,2*n-1-i);
	}
	for (i=0; i<n; i++)
	{
		F[i+1] = Face(4);
		F[i+1].Setidx(0,i);
		F[i+1].Setidx(1,i+n);
		if (i!=n-1) {
			F[i+1].Setidx(2,i+n+1);
			F[i+1].Setidx(3,i+1);
		}else{
			F[i+1].Setidx(2,n);
			F[i+1].Setidx(3,0);
		}
	}
	for (i=0; i<n+2; i++) F[i].Setplane(Plane(P[F[i][0]],P[F[i][1]],P[F[i][2]]));
	Poly<Face> pf(n+2,F);
	delete F;
	return new Mesh(P,pf);
}
