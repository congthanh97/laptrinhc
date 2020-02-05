// Lop he toa do thiet bi chuan 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __NDC_HPP
#define __NDC_HPP

#include "base.hpp"

class NDC{
private:
	static int MaxX, MaxY;

public:
	NDC();
	~NDC();
	void Map(float, float, int&, int&);
	void InvMap(int, int, float&, float&);
	void Line(float, float, float, float);
	void Line(const Point &, const Point &);
};

#endif