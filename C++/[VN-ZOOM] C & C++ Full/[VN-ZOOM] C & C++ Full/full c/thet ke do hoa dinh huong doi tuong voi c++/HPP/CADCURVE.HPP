// Lop duong cong duoc thiet ke boi cac diem kiem soat 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __CADCURVE_HPP
#define __CADCURVE_HPP

#include "curves.hpp"
#include "bezier.hpp"
#include "bspline.hpp"
#include "interact.hpp"

class CADCurve : public Curve, public Polyline{
	int Closest(const Point &);
	void ReDraw(ViewSys *, int);
public:
	CADCurve(int);
	void Edit(Interact &);
};

class BezCurve : public CADCurve{
int L;
public:
	BezCurve(int);
	virtual Point operator()(float);
};

class BspCurve : public CADCurve, public Bspline{
public:
	BspCurve(int, int m = 3);
	virtual Point operator()(float);
};


#endif
