// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "curves.hpp"

Model *Curve::Modelize()
{
	int n = pnum + 1;
	Poly<Point> p(n);
	float t = 0, dt = 1.0/(n-1);
	int i, k = 0;
	for (i=0; i<n; i++)
	{
		p.Set(k++,operator()(t));
		t+=dt;
	}
	return new Polyline(p);
}

MathCurve::MathCurve(Point (*q)(float))
{
	p = q;
}

Point MathCurve::operator()(float t)
{
	return p(t);
}

PolarCurve::PolarCurve(float (*r)(float), int l)
{
	p = r;
	loop = l;
}

Point PolarCurve::operator()(float t)
{
	t *= TWOPI*loop;
	float r = p(t);
	return Point(r*cos(t),r*sin(t));
}

Circle::Circle() : h()
{
	R = 1.0;
}

Circle::Circle(const Point &p, float r) : h(p)
{
	R = r;
}

Point Circle::operator()(float t)
{
	t *= TWOPI;
	return Point(h.x + R*cos(t), h.y + R*sin(t));
}

Vector Circle::Norm(const Point &p)
{
	return (p-h);
}

float Circle::Hit(const Ray &r)
{
	//tham khao trang 144
}

Ellipse::Ellipse()
{
	a = b =1.0;
}

Ellipse::Ellipse(float A, float B)
{
	a = A;
	b = B;
}

Vector Ellipse::Norm(const Point &p)
{
	return Vector(b*b*p.x,a*a*p.y);
}

Point Ellipse::operator()(float t)
{
	t *= TWOPI;
	return Point(a*cos(t), b*sin(t));
}

float Ellipse::Hit(const Ray &r)
{
	//tham khao trang 145
}

Superellipse::Superellipse(float A, float B, float N)
{
	a = A;
	b = B;
	n = N;
}

Point Superellipse::operator()(float t)
{
	t *= TWOPI;
	return Point(Power(cos(t)/a,2.0/n),Power(sin(t)/b,2.0/n));
}

