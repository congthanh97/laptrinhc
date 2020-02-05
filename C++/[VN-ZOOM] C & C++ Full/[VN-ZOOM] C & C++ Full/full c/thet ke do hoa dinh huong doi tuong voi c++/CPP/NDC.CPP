// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "ndc.hpp"

int NDC::MaxX = 0;
int NDC::MaxY = 0;

NDC::NDC()
{
	EnterGraphics();
	if (MaxX==0) MaxX = getmaxx();
	if (MaxY==0) MaxY = getmaxy();
}

NDC::~NDC()
{
	ExitGraphics();
}

inline void NDC::Map(float x, float y, int &a, int &b)
{
	a = int (x*MaxY + (MaxX-MaxY)/2.0);
	b = int ((1-y)*MaxY);
}

void NDC::InvMap(int a, int b, float &x, float &y)
{
	x = (a - (MaxX-MaxY)/2.0)/MaxY;
	y = 1.0 - 1.0*b/MaxY;
}

void NDC::Line(float x1, float y1, float x2, float y2)
{
	int a1, b1, a2, b2;
	Map(x1, y1, a1, b1); Map(x2, y2, a2, b2);
	line(a1, b1, a2, b2);
}

void NDC::Line(const Point &p1, const Point &p2)
{
	Line (p1.x,p1.y,p2.x,p2.y);
}