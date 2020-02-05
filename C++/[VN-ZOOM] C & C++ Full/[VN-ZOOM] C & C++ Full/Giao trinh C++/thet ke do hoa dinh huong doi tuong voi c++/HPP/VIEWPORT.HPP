// Lop vung quan sat 2D 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __VIEWPORT_HPP
#define __VIEWPORT_HPP

#include "base.hpp"

class Viewport{
private:
	struct Code {int l, t, r, b;};
	Code Encode(const Point &);

public:
	float L, T, R, B;
	Viewport();
	Viewport(float, float, float, float);
	virtual int Clip(Point &, Point &);
};

#endif
