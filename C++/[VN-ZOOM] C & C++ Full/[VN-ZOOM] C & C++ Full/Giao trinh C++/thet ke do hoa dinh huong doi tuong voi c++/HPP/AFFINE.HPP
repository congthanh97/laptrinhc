// Lop cac phep bien doi affine 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __AFFINE_HPP
#define __AFFINE_HPP

#include "base.hpp"

#define TRANSLATION 1
#define SCALING 2
#define SHEARING 3
#define PERSPECTIVE 4

class  Affine : public Matrix{
public:
	Affine();
	Affine(float);
	Affine(float, int);
	Affine(const Vector &, int Tr = TRANSLATION);
	Affine(float, float, float, float, float, float);
	Affine(const Vector &, const Vector &);
	Affine(const Matrix&);
	friend Point operator *(const Point &, const Affine &);
};

#endif