// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "bitmap.hpp"

extern "C"{
#include "alloc.h"
}

Bitmap::Bitmap(void far* p)
{
	buf = p;
}

Bitmap::~Bitmap()
{
	if (buf!=0) farfree(buf);
}

