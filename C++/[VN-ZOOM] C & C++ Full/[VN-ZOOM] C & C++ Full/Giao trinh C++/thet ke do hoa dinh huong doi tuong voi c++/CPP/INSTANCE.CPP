// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "instance.hpp"

Instance::Instance()
{
	obj = 0;
}

Instance::Instance(Objects*o):M()
{
	obj = o;
}

Instance::Instance(Objects*o, const Affine &p):M(p)
{
	obj = o;
}

void Instance::Draw(Camera&c)
{
	Model *m = obj->Modelize();
	if (m==0) return;
	m->Transform(M);
	m->Draw(&c);
	delete m;
}

float Instance::Shiny(const Point&)
{
	return 0.0;
}

float Instance::RefCoeff(const Point&)
{
	return 1.0;
}

Vector Instance::Norm(const Point&p)
{
	Point q = p*M.Inv();
	Vector v = obj->Norm(q);
	return (Point(v[0],v[1],v[2])*M - Point()*M);
}

float Instance::Hit(const Ray &ray)
{
	Affine A = M.Inv();
	return obj->Hit(Ray(ray(0)*A,ray(1)*A));
}

Square::Square()
{
	obj = new GenSquare;
}

Square::~Square()
{
	delete obj;
}

float Square::RefCoeff(const Point&q)
{
	float x = q.x + 2,
		y = q.y + 2;
	return int(floor(x/0.5)+floor(y/0.5))%2;
}

Mirror::Mirror(const Affine &A): Instance(0,A)
{
	obj = new GenSquare;
}

Mirror::~Mirror()
{
	delete obj;
}

float Mirror::Shiny(const Point&)
{
	return 1.0;
}

