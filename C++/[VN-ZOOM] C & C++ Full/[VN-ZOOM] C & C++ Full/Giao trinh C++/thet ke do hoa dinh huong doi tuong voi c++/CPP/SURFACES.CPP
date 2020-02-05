// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "surfaces.hpp"
#include "wrframe.hpp"

Model *Surface::Modelize()
{
	//tham khao trang 239, 240
}

Point Ruled::p0(float t)
{
	return ptrp0(t);
}

Point Ruled::p1(float t)
{
	return ptrp1(t);
}

Point Ruled::operator()(float u, float v)
{
	return Comb(p0(u),p1(u),v);
}


Point Revolution::p(float t)
{
	return ptrp(t);
}

Point Revolution::operator()(float u, float v)
{
	return Point(p(v).x*cos(TWOPI*u),p(v).x*sin(TWOPI*u),p(v).y);
}


MathFace::MathFace(Point (*q)(float, float))
{
	p = q;
}

Point MathFace::operator()(float u, float v)
{
	return p(u,v);
}


Point Sphere::p(float a)
{
	float t = PI*(a-0.5);
	return Point(R*cos(t),R*sin(t));
}

Sphere::Sphere(Point O, float r)
{
	I = O;
	R = r;
}

float Sphere::Hit(const Ray &r)
{
	Vector c = r.Dir(), s(r(0));
	float A = c*c, B = c*s, C = s*s -1, D = B*B-A*C;
	if (D<0) return -1.0;
	D = sqrt(D);
	float t1 = (-B-D)/A, t2 = (-B+D)/A;
	if (t1>0.0) return t1;
	if (t2>0.0) return t2;
	return -1.0;
}

Vector Sphere::Norm(const Point &p)
{
	return (Point()-p);
}



Point Cylinder::p1(float)
{
	return Point() + d;
}

Cylinder::Cylinder(Point (*p)(float), const Vector &v):d(v)
{
	ptrp0 = p;
}

Point Cylinder::operator()(float u, float v)
{
	return (p0(u) + v*d);
}

Vector Cylinder::Norm(const Point&)
{
	return 0;
}

float Cylinder::Hit(const Ray &)
{
	return 0;
}


Patch::Patch(const Point &p0, const Point &p1, const Point &p2, const Point &p3)
{
	p[0] = p0;
	p[1] = p1;
	p[2] = p2;
	p[3] = p3;
}

Point Patch::operator()(float u, float v)
{
	Point q1 = Comb(p[0],p[1],u), q2 = Comb(p[2],p[3],u);
	return Comb(q1,q2,v);
}

Vector Patch::Norm(const Point&)
{
	return 0;
}

float Patch::Hit(const Ray &)
{
	return 0;
}


Superellipsoid::Superellipsoid(float A, float B, float C, float N1, float N2)
{
	a = A;
	b = B;
	c = C;
	n1 = N1;
	n2 = N2;
}

Point Superellipsoid::operator()(float u, float v)
{
	u = TWOPI*(u - 0.5);
	v = PI*(v - 0.5);
	float x = a*Power(cos(v),2.0/n1)*Power(cos(u),2.0/n2);
	float y = b*Power(cos(v),2.0/n1)*Power(sin(u),2.0/n2);
	float z = c*Power(sin(v),2.0/n1);
	return Point(x,y,z);
}

