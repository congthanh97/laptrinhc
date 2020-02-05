// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "model.hpp"

Model::Model(int n) : p(n) {}

Model::Model(const Poly<Point> &pl) : p(pl) {}

Point Model::operator[](int i)
{
	return p[i];
}

void Model::Set(int i, Point q)
{
	p.Set(i,q);
}

istream &operator>>(istream &in, Model &m)
{
	in>>m.p;
	return in;
}

void Model::Transform(const Affine &T)
{
	for (int i=0; i<p.Count(); i++)
		Set(i,p[i]*T);
}


