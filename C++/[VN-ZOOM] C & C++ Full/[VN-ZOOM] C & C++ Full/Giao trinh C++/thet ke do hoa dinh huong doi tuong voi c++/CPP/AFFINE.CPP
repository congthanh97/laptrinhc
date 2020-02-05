// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "affine.hpp"

Affine::Affine(): Matrix(4)
{
	SetId();
}

Affine::Affine(float a): Matrix(3)
{
	SetId();
	float t = RAD_PER_DEG*a, c = cos(t), s = sin(t);
	Set(0, 0, c);
	Set(1, 1, c);
	Set(0, 1, s);
	Set(1, 0,-s);
}

Affine::Affine(float a, int k): Matrix(4)
{
	SetId();
	float t = RAD_PER_DEG*a, c = cos(t), s = sin(t);
	int i = (k + 1) % 3, j = (k + 2) % 3;
	Set(i, i, c);
	Set(j, j, c);
	Set(j, i,-s);
	Set(i, j, s);
}

Affine::Affine(const Vector &v, int id) : Matrix(v.Len()+1)
{
	//tham khao trang 89
}

Affine::Affine(float h10, float h01, float h20, float h02, float h21, float h12):Matrix(4)
{
	SetId();
	Set(1,0,h10);
	Set(0,1,h01);
	Set(2,0,h20);
	Set(0,2,h02);
	Set(2,1,h21);
	Set(1,2,h12);
}

Affine::Affine(const Vector &norm, const Vector &up):Matrix(4)
{
	Vector n = norm.Norm(),	v = up;
	v = v - (v*n)*n; v = v.Norm();
	Vector u = n&v;
	for (int i=0; i<3; i++)
	{
		Set(i,0,u[i]);
		Set(i,1,v[i]);
		Set(i,2,n[i]);
	}
	Set(3,3,1);
}

Affine::Affine(const Matrix& T):Matrix(T) {};

Point operator *(const Point  &p, const Affine &T)
{
	int n = T.Col;
	Vector tmp = Vector(n)+p; tmp.Set(n-1,1);
	tmp = tmp*T;
	float t = 1/tmp[n-1];	tmp = t*tmp;
	if (n==3) tmp.Set(n-1,0);
	return (Point() + tmp);
}

