// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "genprimi.hpp"
#include "polygon.hpp"
#include "wrframe.hpp"


Point GenCircle::operator()(float t)
{
	float a = TWOPI*t;
	return Point(cos(a), sin(a));
}

float GenCircle::Hit(const Ray &r)
{
	Vector c = r.Dir(),
		s(r(0));
	float A = c*c,
		B = c*s,
		C = s*s -1,
		D = B*B-A*C;
	if (D<0)
		return -1.0;
	D = sqrt(D);
	float t1 = (-B-D)/A,
		t2 = (-B+D)/A;
	if (t1>0.0) return t1;
	if (t2>0.0) return t2;
	return -1.0;
}

Vector GenCircle::Norm(const Point &p)
{
	return (p - Point());
}

Point GenSphere::operator()(float u, float v)
{
	float phi = TWOPI*u,
		theta = PI*(v-0.5);
	return Point(cos(theta)*cos(phi),cos(theta)*sin(phi),sin(theta));
}

float GenSphere::Hit(const Ray &r)
{
	Vector c = r.Dir(),
		s(r(0));
	float A = c*c,
		B = c*s,
		C = s*s -1,
		D = B*B-A*C;
	if (D<0)
		return -1.0;
	D = sqrt(D);
	float t1 = (-B-D)/A,
		t2 = (-B+D)/A;
	if (t1>0.0) return t1;
	if (t2>0.0) return t2;
	return -1.0;
}

Vector GenSphere::Norm(const Point &p)
{
	return (p - Point());
}

Model* GenBox::Modelize()
{
	Poly<Point> p(8);
	istrstream ps("0 0, 1 0, 1 1, 0 1, 0 0 1, 1 0 1, 1 1 1, 0 1 1,");
	ps>>p;
	Poly<Edge> e(12);
	istrstream es("0 1 1 2 2 3 3 0 4 5 5 6 6 7 7 4 0 4 1 5 2 6 3 7");
	es>>e;
	return new Wireframe(p,e);
}

float GenBox::Hit(const Ray &r)
{
	float t=-1;
	Vector v = r.Dir();
	Point p = r(0);
	if (v[2]!=0)
	{
		BestTime(-p.z/v[2],t);
		BestTime((1-p.z)/v[2],t);
	}
	if (v[1]!=0)
	{
		BestTime(-p.y/v[1],t);
		BestTime((1-p.y)/v[1],t);
	}
	if (v[0]!=0)
	{
		BestTime(-p.x/v[0],t);
		BestTime((1-p.x)/v[0],t);
	}
	return t;
}

Vector GenBox::Norm(const Point &p)
{
	if (p.x==0) return Vector(-1,0,0);
	if (p.x==1) return Vector( 1,0,0);
	if (p.y==0) return Vector(0,-1,0);
	if (p.y==1) return Vector(0, 1,0);
	if (p.z==0) return Vector(0,0,-1);
	if (p.z==1) return Vector(0,0, 1);
	return Vector(3);
}

GenPlane::GenPlane()
{
	pnum = 1;
}

Point GenPlane::operator()(float u, float v)
{
	return Point(u, v);
}

float GenPlane::Hit(const Ray &r)
{
	float z = r.Dir()[2];
	if (z==0.0)
		return -1;
	return -r(0).z/z;
}

Vector GenPlane::Norm(const Point &)
{
	return Vector(0,0,1);
}

float GenSquare::Hit(const Ray &r)
{
	float t = GenPlane::Hit(r);
	if (t>0)
	{
		Point p = r(t);
		if ((abs(p.x)<=1)&&(abs(p.y)<=1)) return t;
	}
	return -1;
}


Point GenCylinder::p(float t)
{
	return Point(1,t);
}

float GenCylinder::Hit(const Ray &r)
{
	Vector a(r(0)), b = r.Dir();
	float A = b[0]*b[0] + b[1]*b[1],
		  B = a[0]*b[0] + a[1]*b[1],
		  C = a[0]*a[0] + a[1]*a[1] - 1,
		  D = B*B - A*C;
	if (D<0) return -1.0;
	float th = -1.0, t = (-B-sqrt(D))/A, z = a[2] + t*b[2];
	if (abs(z)<=1) BestTime(t,th);
	t = (-B+sqrt(D))/A;
	z = a[2] + t*b[2];
	if (abs(z)<=1) BestTime(t,th);
	if (b[2]!=0)
	{
		t = (1-a[2])/b[2];
		z = (a[0] + b[0]*t)*(a[0] + b[0]*t) + (a[1] + b[1]*t)*(a[1] + b[1]*t);
		if (z<1) BestTime(t,th);
		t = (-1-a[2])/b[2];
		z = (a[0] + b[0]*t)*(a[0] + b[0]*t) + (a[1] + b[1]*t)*(a[1] + b[1]*t);
		if (z<1) BestTime(t,th);
	}
	return th;
}

Vector GenCylinder::Norm(const Point &)
{
	return Vector(0,0,1);
}


Point GenCone::p(float t)
{
	return Point(t,1-t);
}

float GenCone::Hit(const Ray &r)
{
	Vector a(r(0)), b = r.Dir();
	float A = b[0]*b[0] + b[1]*b[1] - 0.25*b[2]*b[2],
		  B = a[0]*b[0] + a[1]*b[1] + b[2]*(1-a[2])*0.25,
		  C = a[0]*a[0] + a[1]*a[1] - 0.25*(1-a[2])*(1-a[2]),
		  D = B*B - A*C;
	if (D<0) return -1.0;
	float th = -1.0, t = (-B-sqrt(D))/A, z = a[2] + t*b[2];
	if (abs(z)<=1) BestTime(t,th);
	t = (-B+sqrt(D))/A;
	z = a[2] + t*b[2];
	if (abs(z)<=1) BestTime(t,th);
	if (b[2]!=0)
	{
		t = (-1-a[2])/b[2];
		z = (a[0] + b[0]*t)*(a[0] + b[0]*t) + (a[1] + b[1]*t)*(a[1] + b[1]*t);
		if (z<1) BestTime(t,th);
	}
	return th;
}

Vector GenCone::Norm(const Point &)
{
	return Vector(0,0,1);
}


float GenPolyhedron::Hit(const Ray &r)
{
	float th = -1.0;
	for (int i=0; i<fnum; i++) BestTime(f[i].Hit(r),th);
	return th;
}

int BestTime(float t1, float &t)
{
	if (t1<=0.00005) return 0;
	if ((t==-1)||(t1<t))
	{
		t=t1;
		return 1;
	}
	return 0;
}



