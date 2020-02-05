// Lop khung day WRFRAME
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa huong doi tuong voi C++" trang 221-222

#if !defined __WRFRAME_HPP
#define __WRFRAME_HPP

#include "model.hpp"
#include "poly.hpp"
#include "camera.hpp"
#include "fstream.h"

class Edge{
protected:
	int idx[2];

public:
	Edge();
	Edge(int, int);
	int operator[](int) const;
	int operator==(const Edge &) const;
	Edge &operator=(const Edge &);
	friend istream &operator >> (istream &, Edge &);
};

class Wireframe: public Model{
protected:
	Poly<Edge> e;

public:
	Wireframe();
	Wireframe(char *);
	Wireframe(const Poly<Point> &, const Poly<Edge> &);
	virtual void Draw(ViewSys *);
};

#endif
