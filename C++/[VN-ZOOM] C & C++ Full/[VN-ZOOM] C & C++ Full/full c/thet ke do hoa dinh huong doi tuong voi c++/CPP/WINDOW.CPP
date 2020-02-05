// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "window.hpp"

void Window::Map()
{
	MapNDC();
}

Window::Window(): ViewSys(0)
{
	W = new Viewport(-1,1,1,-1);
	cd = 0;
	Map();
}

Window::Window(const Viewport &w):ViewSys(0)
{
	W = new Viewport(w);
	cd = 0;
	Map();
}

void Window::SetWnd(float l, float t, float r, float b)
{
	*W = Viewport(l,t,r,b);
	MapNDC();
}

void Window::Line(float x1, float y1, float x2, float y2)
{
	Line(Point(x1,y1),Point(x2,y2));
}

void Window::Line(const Point & p1, const Point & p2)
{
	ViewSys::LineW(p1,p2);
}

void Window::LineForward(float d)
{
	float t = cd*RAD_PER_DEG;
	LineRel(Vector(d*cos(t),d*sin(t)));
}

void Window::MoveForward(float d)
{
	float t = cd*RAD_PER_DEG;
	MoveRel(Vector(d*cos(t),d*sin(t)));
}

void Window::Right(float t)
{
	cd -= t;
}

void Window::Turnto(float a)
{
	cd = a;
}
