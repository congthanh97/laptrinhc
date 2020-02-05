// Lop thiet bi do hoa dua tren line 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __DEVICE_HPP
#define __DEVICE_HPP

#include "base.hpp"

class Device {
	static int up;
	static int s[6];
	static int w[6];
public:
	static void PenUp();
	static void PenDown();
	static void GetPen(int);
	static void GoTo(int, int);
	static void GoRel(int, int);
};

#endif