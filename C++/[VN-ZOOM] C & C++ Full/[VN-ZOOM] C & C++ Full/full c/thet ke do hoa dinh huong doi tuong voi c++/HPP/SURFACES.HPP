// Lop mat cong 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __SURFACES_HPP
#define __SURFACES_HPP

#include "objects.hpp"

class Surface: public Objects{
public:
	virtual Model *Modelize();
	virtual Point operator()(float, float) = 0;
};

class Ruled: public Surface{
protected:
	Point (*ptrp0)(float);
	Point (*ptrp1)(float);
	virtual Point p0(float);
	virtual Point p1(float);
public:
	virtual Point operator()(float, float);
};

class Revolution: public Surface{
protected:
	Point (*ptrp)(float);
	virtual Point p(float);
public:
	virtual Point operator()(float, float);
};

class MathFace: public Surface{
protected:
	Point (*p)(float, float);
public:
	MathFace(Point (*)(float, float));
	virtual Point operator()(float, float);
};

class Sphere: public Revolution{
Point I;
float R;
protected:
	virtual Point p(float);
public:
	Sphere(Point, float);
	virtual Vector Norm(const Point&);
	virtual float Hit(const Ray &);
};

class Cylinder: public Ruled{
protected:
	Vector d;
	virtual Point p1(float);
public:
	Cylinder(Point (*)(float), const Vector &);
	virtual Point operator()(float, float);
	virtual Vector Norm(const Point&);
	virtual float Hit(const Ray &);
};

class Patch: public Ruled{
protected:
	Point p[4];
public:
	Patch(const Point &, const Point &, const Point &, const Point&);
	virtual Point operator()(float, float);
	virtual Vector Norm(const Point&);
	virtual float Hit(const Ray &);
};

class Superellipsoid: public Surface{
float a, b, c, n1, n2;
public:
	Superellipsoid(float, float, float, float, float);
	virtual Point operator()(float, float);
//	virtual Vector Norm(const Point&);
//	virtual float Hit(const Ray &);
};

#endif
