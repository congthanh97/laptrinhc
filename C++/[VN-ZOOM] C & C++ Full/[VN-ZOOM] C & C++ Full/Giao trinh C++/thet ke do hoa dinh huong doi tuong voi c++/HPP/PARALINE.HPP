// Lop duong thang dang tham so 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __PARALINE_HPP
#define __PARALINE_HPP

#include "base.hpp"

class ParaLine{
protected:
	Point p; Vector v;
public:
	ParaLine();
	ParaLine(const Point &, const Vector &);
	ParaLine(const Point &, const Point &);
	Point operator ()(float) const;
	Vector Dir() const;

	float Project(const Point &p);
	float Dist(const Point &);

	int Coplanar(const ParaLine &);
	int Parallel(const ParaLine &);
	int Overlap(const ParaLine &);
	int Intersec(const ParaLine &, Point &);
};

#endif