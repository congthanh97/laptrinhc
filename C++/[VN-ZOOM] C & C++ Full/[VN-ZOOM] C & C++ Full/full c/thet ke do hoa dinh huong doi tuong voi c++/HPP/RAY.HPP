// Lop tia dang tham so 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __RAY_HPP
#define __RAY_HPP

#include "paraline.hpp"

class Ray : public ParaLine{
public:
	Ray();
	Ray(const Vector &);
	Ray(const Point &, const Vector &);
	Ray(const Point &, const Point &);
    float Hit(const ParaLine &);
};

#endif