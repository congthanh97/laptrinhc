// Lop khoi lang tru 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __PRISM_HPP
#define __PRISM_HPP

#include "objects.hpp"
#include "polygon.hpp"

class Prism: public Objects, public Polygon{
public:
	Prism(int);
	virtual Model *Modelize();
};

#endif
