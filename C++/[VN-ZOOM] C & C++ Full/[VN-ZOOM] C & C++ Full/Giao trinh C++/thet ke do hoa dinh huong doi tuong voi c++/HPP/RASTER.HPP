// Lop thiet bi do hoa diem 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __RASTER_HPP
#define __RASTER_HPP

#include "base.hpp"
#include "bitmap.hpp"
#include "list.hpp"

struct Pixel {int x, y;};

class Raster{
	static int Tile[4][4];
	struct EdgeInfo
	{
		int		y_upper;
		float 	x_int,
				recip_slope;
	};
	static int Row;
	static int MoreThan(void *, void *);
	static int SetTile();
	int num;
	EdgeInfo *Edge;
	SortList *Table;
	void MakeEdgeInfo(Pixel, Pixel, Pixel, EdgeInfo &);
	void InitTable(int, Pixel *);
	void DeleteTable();

public:
	Raster();
	~Raster();
	void SetTile(int*);
	void SetTile(int);
	void Putpixel(int, int);
	void Line(int, int, int, int);
	void Circle(int, int, int);
	void Ellipse(int, int, int, int);
	void Fill(int, int, int);
	void RFill(int, Pixel *, int);
	void Fill(int, Pixel *);
	void Show(int, int, Bitmap &);
	Bitmap Store(int, int, int, int);
};

#endif
