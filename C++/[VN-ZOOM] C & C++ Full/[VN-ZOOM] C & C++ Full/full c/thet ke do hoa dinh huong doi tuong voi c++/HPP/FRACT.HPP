// Lop fractal 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __FRACT_HPP
#define __FRACT_HPP

#include "gauss.hpp"
#include "window.hpp"

class Fract{
	float H, f;
	float m;
	static Gauss Randomer;
	void Line(Window &, Point, Point, float);

public:
	Fract(float h = 0.5);
	void Line(Window &, Point, Point, float, float);
};

#endif