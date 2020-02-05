// Lop vec to 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __VECTOR_HPP
#define __VECTOR_HPP

#include "matrix.hpp"

class Vector : public Matrix {
public:
	Vector();
	Vector(int);
	Vector(int, float *);
	Vector(int, char*);
	Vector(float, float);
	Vector(float, float, float);
	Vector(const Vector &);

	Vector Norm() const;
	float Modul() const;
	void Set(int, float);
	float operator[](int) const;

	float Cosin(const Vector &) const;

	Vector operator -() const;
	Vector operator +(const Vector &) const;
	Vector operator -(const Vector &) const;
	friend Vector operator *(float, const Vector &);

	float operator*(const Vector &) const;
	Vector operator *(const Matrix &) const;
	Vector operator &(const Vector &) const;
};

#endif