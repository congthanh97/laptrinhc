// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "wrframe.hpp"

Edge::Edge()
{
	idx[0] = idx[1] = 0;
}

Edge::Edge(int i1, int i2)
{
	idx[0] = i1;
	idx[1] = i2;
}

int Edge::operator[](int i) const
{
	if ((i>=0)&&(i<3)) return idx[i];
	return -1;
}

Edge &Edge::operator=(const Edge &e)
{
	idx[0] = e.idx[0];
	idx[1] = e.idx[1];
	return *this;
}

int Edge::operator==(const Edge &e) const
{
	return (idx[0]==e.idx[0]&&idx[1]==e.idx[1]);
}

istream &operator >> (istream &in, Edge &e)
{
	in>>e.idx[0]>>e.idx[1];
	return in;
}

Wireframe::Wireframe():Model(0){}

Wireframe::Wireframe(char *filename):Model(0)
{
	ifstream f(filename);
	int vn, en;
	f>>vn>>en;
	p = Poly<Point>(vn);
	e = Poly<Edge>(en);
	f>>p>>e;
}

Wireframe::Wireframe(const Poly<Point> &pl, const Poly<Edge> &el):Model(pl)
{
	e = el;
}

void Wireframe::Draw(ViewSys *c)
{
	for (int i=0; i<e.Count(); i++)
		c->Line(p[e[i][0]],p[e[i][1]]);
}
