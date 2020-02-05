// Lop co so mo hinh 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __MODEL_HPP
#define __MODEL_HPP

#include "poly.hpp"
#include "viewsys.hpp"

class Model{
protected:
	Poly<Point> p;
	Model(int);

public:
	Model(const Poly<Point> &);
	virtual void Draw(ViewSys *) = 0;
	Point operator[](int);
	void Set(int, Point);
	void Transform(const Affine &);
	friend istream &operator>>(istream &, Model &);
};

class Polyline: public Model{
public:
	Polyline(const Poly<Point> &);
	virtual void Draw(ViewSys *);
};

#endif