// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "polygon.hpp"
#include "tools.hpp"

Polygon::Polygon(const Poly<Point> &pl):Model(pl)
{
}

Polygon::Polygon(int n, float r):Model(n)
{
	float a = 0.0, da = TWOPI/n;
	for(int i=0; i<n; i++)
	{
		p.Set(i,Point(r*cos(a),r*sin(a)));
		a += da;
	}
}

void Polygon::Draw(ViewSys *w)
{
	int n = p.Count();
	w->Moveto(p[n-1]);
	for (int i=0; i<n; i++) w->Lineto(p[i]);
}

int Polygon::Clip(Point &p1, Point &p2)
{
	//tham khao trang 136
}

float Polygon::Area()
{
	float s = 0;
	int i, n = p.Count();
	Vector k(0,0,1);
	for (i=0;i<n-2;i++) s += k*((p[i+1]-p[0])&(p[i+2]-p[0]));
	return 0.5*s;
}

int Polygon::Planar()
{
	int n = p.Count();
	if (n<4) return 1;
	Vector v1 = p[1] - p[0], v2 = p[2] - p[0];
	for (int i=3; i<n; i++) if ((p[i]-p[0])*(v2&v1)!=0) return 0;
	return 1;
}

Vector Polygon::Newell()
{
	int i, j, n = p.Count();
	float x = 0.0, y = 0.0, z = 0.0;
	for (i=0; i<n; i++)
	{
		if (i==n-1) j=0; else j = i+1;
		x += (p[i].y-p[j].y)*(p[i].z+p[j].z);
		y += (p[i].z-p[j].z)*(p[i].x+p[j].x);
		z += (p[i].x-p[j].x)*(p[i].y+p[j].y);
	}
    return Vector(x,y,z);
}
