// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "base.hpp"

static int EnterCount = 0;

void EnterGraphics()
{
	if (1<++EnterCount) return;
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "");
	errorcode = graphresult();	if (errorcode != grOk) exit(1);
}

void ExitGraphics()
{
	if (0==--EnterCount) closegraph();
}

Point::Point()
{
	x = y = z = 0;
}

Point::Point(float a, float b, float c)
{
	x = a;
	y = b;
	z = c;
}

int Point::operator ==(const Point &p) const
{
	return ((x==p.x)&&(y==p.y)&&(z==p.z));
}

Point Comb(const Point &p, const Point &q, float t)
{
	float a = p.x+t*(q.x-p.x), b=p.y+t*(q.y-p.y), c = p.z+t*(q.z-p.z);
	return Point(a,b,c);
}

Point::operator Vector() const
{
	return Vector(x, y, z);
}

Vector Point::operator - (const Point &p) const
{
	return Vector(x - p.x, y - p.y, z - p.z);
}

Point Point::operator +(const Vector &v) const
{
	return Point(x+v[0], y+v[1], z+v[2]);
}

istream &operator >>(istream &in, Point &p)
{
	Seq a(3);
	in>>a;
	p.x = a[0];
	p.y = a[1];
	p.z = a[2];
	return in;
}

