// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "viewsys.hpp"

NDC ViewSys::ndc;

void ViewSys::MapNDC()
{
	//tham khao trang 90
}

ViewSys::ViewSys(int is3D):A(0.0), V()
{
	W = 0;
	if (is3D) A = Affine(0.0,1);
}

ViewSys::~ViewSys()
{
	if (W!=0) delete W;
}

ViewSys::ViewSys(const Affine &A1, const Viewport &V1) :A(A1), V(V1)
{
	W = 0;
}

void ViewSys::SetView(Viewport v)
{
	V = v;
	MapNDC();
}

void ViewSys::Border()
{
	ndc.Line(V.L,V.B,V.L,V.T);
	ndc.Line(V.L,V.T,V.R,V.T);
	ndc.Line(V.R,V.T,V.R,V.B);
	ndc.Line(V.R,V.B,V.L,V.B);
}

Point ViewSys::World2View(const Point &p)
{
	return p*A;
}

Point ViewSys::View2World(const Point &p)
{
	Affine InvA = A.Inv();
	return p*InvA;
}

void ViewSys::Device2View(int i, int j, Point &p)
{
	ndc.InvMap(i,j,p.x,p.y);
	Affine InvN = N.Inv();
	p = p*InvN;
	p.z = 0;
}

void ViewSys::View2Device(const Point &p, int &x, int &y)
{
	Point q = p*N;
	ndc.Map(q.x,q.y,x,y);
}

void ViewSys::Device2World(int i, int j, Point &p)
{
	Device2View(i,j,p);
	p = View2World(p);
}

void ViewSys::World2Device(const Point &p, int &x, int &y)
{
	Point q = World2View(p);
	View2Device(q,x,y);
}

inline void ViewSys::LineW(Point p1, Point p2)
{
	if (W->Clip(p1,p2)) return;
	p1 = p1*N; p2 = p2*N;
	ndc.Line(p1,p2);
}

void ViewSys::Line(const Point & p1, const Point & p2)
{
	LineW(p1*A,p2*A);
}

void ViewSys::Moveto(const Point & p)
{
	cp = p;
}

void ViewSys::Lineto(const Point & p)
{
	Line(cp, p);
	cp = p;
}

void ViewSys::MoveRel(const Vector &v)
{
	cp = cp + v;
}

void ViewSys::LineRel(const Vector &v)
{
	Point p = cp + v;
	Lineto(p);
}

Point ViewSys::Where()
{
	return cp;
}

