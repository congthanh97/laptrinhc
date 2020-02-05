// Lop cac ham tron Bspline 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __BSPLINE_HPP
#define __BSPLINE_HPP

#include "base.hpp"

class Bspline{
protected:
	Vector kn;
	int L, m;
	void BKnot();
	float NN(int, int, float);
public:
	Bspline(int, int mm = 3);
};

#endif

