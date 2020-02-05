// Lop bang tra mau 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __LUT_HPP
#define __LUT_HPP

#include "base.hpp"

class LUT{
public:
	LUT();
};

class LUT256{
	struct Color { char	R, G, B;};
	static int nr, ng, nb;
	void Load();

public:
	LUT256(int, int, int);
	~LUT256();
	void SetRGB(float, float, float);
	void SetHLS(float, float, float);
};

#endif