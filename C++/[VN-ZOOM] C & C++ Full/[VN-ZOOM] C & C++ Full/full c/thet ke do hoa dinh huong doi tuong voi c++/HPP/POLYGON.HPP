// Lop mo hinh da giac 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __POLYGON_HPP
#define __POLYGON_HPP

#include "model.hpp"

class Polygon : public Model{
public:
	Polygon(const Poly<Point> &);
	Polygon(int, float r = 1.0);
	virtual void Draw(ViewSys *);
	int Clip(Point&, Point&);
	float Area();
	int Planar();
	Vector Newell();
};

#endif