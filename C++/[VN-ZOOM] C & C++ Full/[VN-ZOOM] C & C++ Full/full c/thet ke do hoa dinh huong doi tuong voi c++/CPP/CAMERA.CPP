// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "camera.hpp"

void Camera::Map()
{
	MapTotal();
	MapNDC();
}

void Camera::MapTotal()
{
	Affine M(e,4);
	T = A*M;
}

Camera::Camera(): ViewSys(1), e(0,0,-5)
{
	Vector r(-20,-10,-14);
	W = new Viewport(-1,1,1,-1);
	Affine A0(r), A1(r,Vector(0,0,1));
	A = A0*A1;
	Map();
}

Camera::Camera(const Vector &r, const Vector &n, const Vector &up): ViewSys(1),e(0,0,-5)
{
	W = new Viewport(-1,1,1,-1);
	Affine A0(-r), A1(n,up);
	A = A0*A1;
	Map();
}

Camera::Camera(const Vector &r, const Vector &n, const Vector &up, const Vector &eye): ViewSys(1),e(eye)
{
	W = new Viewport(-1,1,1,-1);
	Affine A0(-r), A1(n,up);
	A = A0*A1;
	Map();
}

Camera::Camera(const Vector &r, const Vector &n, const Vector &up, const Vector &eye, const Viewport&V)
: ViewSys(1), e(eye)
{
	W = new Viewport(V);
	Affine A0(-r), A1(n,up);
	A = A0*A1;
	Map();
}

Camera::Camera(const Vector &r, const Vector &n, const Vector &up, const Vector &eye, const Volume&V)
: ViewSys(1), e(eye)
{
	float f = V.F/(1.0-V.F/e[2]), b = V.K/(1.0-V.K/e[2]);
	W = new Volume(V.L,V.T,V.R,V.B,f,b);
	Affine A0(-r), A1(n,up);
	A = A0*A1;
	Map();
}

void Camera::Axis()
{
	float l = 5.0;
	Point p[4] = {Point(), Point(l,0), Point(0,l), Point(0,0,l)};
	for (int i=1; i<=3; i++) Line(p[0],p[i]);
}

void Camera::Line(const Point & p1, const Point & p2)
{
	LineW(p1*T,p2*T);
}

Point Camera::Eye()
{
	Affine InvA = A.Inv();
	Point eye = Point() + e;
	return eye*InvA;
}

void Camera::Device2View(int i, int j, Point &p)
{
	ViewSys::Device2View(i,j,p);
	Affine M(e,4);
	p = p*M.Inv();
	p.z = 0;
}

void Camera::View2Device(const Point &p, int &i, int &j)
{
	Affine M(e,4);
	ViewSys::View2Device(p*M,i,j);
}
