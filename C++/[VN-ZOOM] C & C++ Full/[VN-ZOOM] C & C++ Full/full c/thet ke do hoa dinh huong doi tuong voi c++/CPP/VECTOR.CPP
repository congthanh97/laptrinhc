// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "vector.hpp"

Vector::Vector() : Matrix()
{
}

Vector::Vector(int n) : Matrix(1,n)
{
}

Vector::Vector(int n, float *a) : Matrix(1,n,a)
{
}

Vector::Vector(int n, char *s) : Matrix(1,n,s)
{
}

Vector::Vector(float x, float y) :Matrix(1,2)
{
	Val[0] = x;
	Val[1] = y;
}

Vector::Vector(float x, float y, float z) :Matrix(1,3)
{
	Val[0] = x;
	Val[1] = y;
	Val[2] = z;
}

Vector::Vector(const Vector &v) : Matrix(v)
{
}

Vector Vector::Norm() const
{
	float d = Modul();
	Vector tmp = *this;
	if (d != 0) for ( int i = 0; i< Size; i++) tmp.Val[i] /= d;
	return tmp;
}

float Vector::Modul() const
{
	float d = 0;
	for ( int i = 0; i<Size; i++) d += Val[i]*Val[i];
	return sqrt(d);
}

float Vector::Cosin(const Vector &v) const
{
	return (Norm()*v.Norm());
}

float Vector::operator[](int i) const
{
	return Seq::operator[](i);
}

void Vector::Set(int i, float x)
{
	Seq::Set(i,x);
}

Vector Vector::operator -() const
{
	Vector tmp = *this;
	tmp *= -1;
	return tmp;
}

Vector Vector::operator +(const Vector &v) const
{
	Vector tmp = *this;
	tmp += v;
	return tmp;
}

Vector Vector::operator -(const Vector &v) const
{
	Vector tmp = *this;
	tmp -= v;
	return tmp;
}

Vector operator *(float t, const Vector &v)
{
	Vector tmp = v;
	tmp.Seq::operator*=(t);
	return tmp;
}

float Vector::operator*(const Vector &v1) const
{
	float d = 0;
	for ( int i = 0; i<Size; i++) d += Val[i]*v1.Val[i];
	return d;
}

Vector Vector::operator*(const Matrix &m) const
{
	Vector tmp = m[0], v = *this;
	Matrix tp = m.T();
	for (int i=0; i<Size; i++)	tmp.Set(i, v*tp[i]);
	return tmp;
}

Vector Vector::operator &(const Vector &v) const
{
	Vector tmp(3);
	tmp.Set(0, Val[1]*v[2] - Val[2]*v[1]);
	tmp.Set(1, Val[2]*v[0] - Val[0]*v[2]);
	tmp.Set(2, Val[0]*v[1] - Val[1]*v[0]);
	return tmp;
}
