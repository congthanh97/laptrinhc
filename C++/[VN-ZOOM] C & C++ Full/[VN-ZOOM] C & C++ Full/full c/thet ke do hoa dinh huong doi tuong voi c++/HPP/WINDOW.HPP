// Lop cua so WINDOW thay cho he toa do quan sat 2D
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa huong doi tuong voi C++" trang 63-65

#if !defined __WINDOW_HPP
#define __WINDOW_HPP

#include "viewsys.hpp"

class Window: public ViewSys{
protected:
	float cd;
	virtual void Map();
public:
	Window();
	Window(const Viewport&);

	void SetWnd(float,float,float,float);

	void Line(float, float, float, float);
	virtual void Line(const Point &, const Point &);

	void LineForward(float);
	void MoveForward(float);
	void Right(float);
	void Turnto(float);
};

#endif