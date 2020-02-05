// Lop duong cong 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __CURVES_HPP
#define __CURVES_HPP

#include "objects.hpp"

class Curve: public Objects{
public:
	virtual Model *Modelize();
	virtual Point operator()(float) = 0;
};

class MathCurve: public Curve{
protected:
	Point (*p)(float);
public:
	MathCurve(Point (*)(float));
	virtual Point operator()(float);
};

class PolarCurve: public Curve{
protected:
	float (*p)(float);
	int loop;
public:
	PolarCurve(float (*)(float), int l = 1);
	virtual Point operator()(float);
};

class Circle : public Curve {
protected:
	Point h;
	float R;

public:
	Circle();
	Circle(const Point&, float);

	virtual Vector Norm(const Point &);
	virtual float Hit(const Ray &);
	virtual Point operator()(float);
};

class Ellipse : public Curve {
protected:
	float a, b;

public:
	Ellipse();
	Ellipse(float, float);

	virtual Vector Norm(const Point &);
	virtual float Hit(const Ray &);
	virtual Point operator()(float);
};

class Superellipse: public Curve{
protected:
	float a, b, n;

public:
	Superellipse(float, float, float);
	virtual Point operator()(float);
};

#endif