// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "objects.hpp"

Objects::Objects()
{
	pnum = 20;
}

void Objects::SetNum(int n)
{
	pnum = n;
}

Vector Objects::Norm(const Point&)
{
	return Vector(1.0,0.0);
}

float Objects::Hit(const Ray &)
{
	return -1;
}

void Objects::Draw(ViewSys *vs)
{
	Model *m = Modelize();
	if (m==0) return;
	m->Draw(vs);
	delete m;
}
