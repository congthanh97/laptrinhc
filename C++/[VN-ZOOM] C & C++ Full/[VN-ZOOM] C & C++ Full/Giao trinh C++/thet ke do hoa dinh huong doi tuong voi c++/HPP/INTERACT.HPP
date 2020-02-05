// Lop tuong tac  
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __INTERACT_HPP
#define __INTERACT_HPP

#include "window.hpp"
#include "model.hpp"

class Interact : public Window{
public:
	void Locate(int &, Point &);
	void Stroke(int, Polyline &);
};


#endif
