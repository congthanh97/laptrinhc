// Lop doan thang dang tham so 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __SEGMENT_HPP
#define __SEGMENT_HPP

#include "paraline.hpp"

class Segment : public ParaLine {
public:
	Segment(const Point &, const Point &);
	Point operator[](int);
	ParaLine Bisector();
	int Inside(const Point &);
	int Intersec(const Segment &, float &, float &);
};

#endif