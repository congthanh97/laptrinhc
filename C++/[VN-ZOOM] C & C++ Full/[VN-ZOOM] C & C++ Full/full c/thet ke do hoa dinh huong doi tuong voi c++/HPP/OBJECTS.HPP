// Lop doi tuong  
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __OBJECTS_HPP
#define __OBJECTS_HPP

#include "ray.hpp"
#include "model.hpp"
#include "viewsys.hpp"
#include "tools.hpp"

class Objects{
protected:
int pnum;
public:
	Objects();
	virtual Vector Norm(const Point&);
	virtual float Hit(const Ray &);
	virtual Model *Modelize() = 0;
	void SetNum(int);
	virtual void Draw(ViewSys *);
};

#endif

