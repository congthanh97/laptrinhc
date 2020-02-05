// Lop bo tao so ngau nhien 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __GAUSS_HPP
#define __GAUSS_HPP

#include "base.hpp"

class Gauss{
	static int init;
	static int InitRand();
	static int ranlist[17], i_ran, j_ran;
	float GetRand();

public:
	float Random();
};

#endif