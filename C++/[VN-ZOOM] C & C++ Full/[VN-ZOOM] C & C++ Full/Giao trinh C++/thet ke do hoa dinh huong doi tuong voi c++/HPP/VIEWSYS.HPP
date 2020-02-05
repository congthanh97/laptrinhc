// Lop he thong quan sat truu tuong 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __VIEWSYS_HPP
#define __VIEWSYS_HPP

#include "ndc.hpp"
#include "affine.hpp"
#include "viewport.hpp"

class ViewSys{
protected:
	static NDC ndc;
	Point cp;
	Affine A, N;
	Viewport *W, V;
	virtual void Map() = 0;
	void MapNDC();
	ViewSys(int is3D = 1);
	void LineW(Point, Point);

public:
	ViewSys(const Affine&, const Viewport&);
	~ViewSys();

	void SetView(Viewport);
	void Border();

	Point World2View(const Point &);
	Point View2World(const Point &);
	virtual void Device2View(int, int, Point &);
	virtual	void View2Device(const Point &, int &, int &);
	void Device2World(int, int, Point &);
	void World2Device(const Point &, int &, int &);

	virtual void Line(const Point &, const Point &);

	void Moveto(const Point &);
	void Lineto(const Point &);
	void MoveRel(const Vector &);
	void LineRel(const Vector &);
	Point Where();
};

#endif
