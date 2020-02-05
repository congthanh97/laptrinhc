// Lop duong thang dang tong quat 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __LINE_HPP
#define __LINE_HPP

#include "objects.hpp"
#include "base.hpp"

class Line: public Objects{
protected:
	Vector n;
	float D;

public:
	Line();
	Line(const Vector &, float);
	Line(const Point &, const Vector &);
	Line(const Point &, const Point &);
	Line(const Line &);
	Line &operator=(const Line &);

	float Dist(const Point &);
	int IOTest(const Point &);
	int Clip(Point &, Point &);

	Vector Norm();
	virtual Vector Norm(const Point&);
	virtual float Hit(const Ray &);
	virtual Model *Modelize();
};

#endif