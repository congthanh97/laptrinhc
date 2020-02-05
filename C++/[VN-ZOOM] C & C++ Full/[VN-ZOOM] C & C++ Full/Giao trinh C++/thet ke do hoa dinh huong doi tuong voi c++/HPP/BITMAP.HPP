// Lop bitmap 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __BITMAP_HPP
#define __BITMAP_HPP

class Bitmap{
friend class Raster;
static int MaxSize;
	int h, w;
	void far *buf;
public:
	Bitmap(void far*);
	~Bitmap();
};

#endif