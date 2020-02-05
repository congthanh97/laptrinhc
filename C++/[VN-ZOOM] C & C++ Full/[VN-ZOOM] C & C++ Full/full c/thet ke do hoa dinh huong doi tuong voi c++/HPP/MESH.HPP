// Lop mo hinh be mat 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __MESH_HPP
#define __MESH_HPP

#include "wrframe.hpp"
#include "viewsys.hpp"
#include "plane.hpp"

class Face{
friend class Mesh;
protected:
	Poly<int> idx;
	Plane plane;

public:
	Face();
	Face(int);
	Face(int, int*);
	Face(int, int*, const Plane &);
	void Setplane(const Plane&);
	void Setidx(int, int);
	int operator[](int);
	Face &operator=(const Face &);
	int operator==(const Face &);
	int VertNum();
	friend istream &operator >> (istream &, Face &);
};

#define wire_md 0
#define line_md 1
#define flat_md 2

class Mesh : public Model{
static int draw_md;
protected:
	Poly<Face> f;
	void WireDraw(ViewSys *);
	void LineDraw(ViewSys *);
	void FlatDraw(ViewSys *);

public:
	Mesh(const Poly<Point> &, const Poly<Face> &);
	Mesh(char *);
	void preProcess1();
	void preProcess2();
	virtual void Draw(ViewSys *);
	void SetDrawMode(int);
};

#endif
