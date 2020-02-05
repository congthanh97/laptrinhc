// Lop co so phuc vu do hoa 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __BASE_HPP
#define __BASE_HPP

#include "vector.hpp"
#include "poly.hpp"

extern "C"{
#include "graphics.h"
#include "alloc.h"
#include "stdlib.h"
#include "conio.h"
#include "math.h"
#include "string.h"
}

#define PI          3.141592654
#define TWOPI       6.283185308
#define PHI         1.618033989
#define DEG_PER_RAD 57.2957795
#define RAD_PER_DEG 0.01745329
#define MODULUS     32767

void EnterGraphics();
void ExitGraphics();

class Point{
public:
	float x, y, z;
	Point();
	Point(float, float, float c = 0);
	int operator ==(const Point &) const;
	friend Point Comb(const Point &, const Point &, float);
	operator Vector() const;
	Vector operator -(const Point &) const;
	Point operator +(const Vector &) const;
	friend istream &operator >>(istream &, Point &);
};

#endif