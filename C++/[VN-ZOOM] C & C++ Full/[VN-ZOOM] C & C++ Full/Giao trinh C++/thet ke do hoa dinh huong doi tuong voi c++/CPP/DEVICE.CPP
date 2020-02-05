// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "device.hpp"

int Device::up = 0;
int Device::s[6] = {0,1,4,0,1,4};
int Device::w[6] = {1,1,1,2,2,2};

void Device::PenUp()
{
	up = 0;
}

void Device::PenDown()
{
	up = 1;
}

void Device::GoRel(int dx, int dy)
{
	GoTo(getx() + dx, gety() + dy);
}

void Device::GoTo(int x, int y)
{
	if (up) lineto(x,y); else moveto(x,y);
}

void Device::GetPen(int i)
{
	setlinestyle(s[i], w[i], -1);
}
