// Lop mat cong duoc thiet ke boi cac diem kiem soat 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __CADSURFA_HPP
#define __CADSURFA_HPP

#include "surfaces.hpp"
#include "bezier.hpp"
#include "bspline.hpp"
#include "cadcurve.hpp"

class BspSurface : public Surface, public Bspline, public Polyline{
protected:
	int Lu, Lv;
public:
	BspSurface(int, int);
	virtual Point operator()(float, float);
};

class RevolBspCurve: public Revolution, public BspCurve{
	virtual Point p(float);
public:
	RevolBspCurve(int);
};

#endif