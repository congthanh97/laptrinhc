// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "volume.hpp"

Volume::Volume()
{
	F = 0;
	K = 10;
}

Volume::Volume(float l, float t, float r, float b, float f, float bk):Viewport(l,t,r,b)
{
	F = f;
	K = bk;
}

int Volume::Clip(Point &p1, Point &p2)
{
	float t_in=0.0, t_out=1.0;
	float x1 = p1.x, y1 = p1.y, z1 = p1.z;
	float x2 = p2.x, y2 = p2.y, z2 = p2.z;
	if (!Chop(x1 - x2, -L + x1, t_in, t_out))
	if (!Chop(x2 - x1,  R - x1, t_in, t_out))
	if (!Chop(y1 - y2, -B + y1, t_in, t_out))
	if (!Chop(y2 - y1,  T - y1, t_in, t_out))
	if (!Chop(z1 - z2, -F + z1, t_in, t_out))
	if (!Chop(z2 - z1,  K - z1, t_in, t_out))
	{
		Point p = p1;
		if (t_in>0.0) p1 = Comb(p,p2,t_in);
		if (t_out<1.0) p2 = Comb(p,p2,t_out);
		return 0;
	}
	return 1;
}
