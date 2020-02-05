// Lop mat phang dang tong quat 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __PLANE_HPP
#define __PLANE_HPP

#include "line.hpp"

class Plane: public Line{
public:
	Plane();
	Plane(const Vector &, float);
	Plane(const Point &, const Vector &);
	Plane(const Point &, const Vector &, const Vector &);
	Plane(const Point &, const Point &, const Point &);
};

#endif