// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "matrix.hpp"
#include "vector.hpp"
#include "conio.h"

Matrix::Matrix():Seq()
{
	Col = 1;
}

Matrix::Matrix(int n) :Seq(n*n)
{
	Col = n;
}

Matrix::Matrix(int r, int c) :Seq(r*c)
{
	Col = c;
}

Matrix::Matrix(int r, int c, float *a) : Seq(r*c,a)
{
	Col = c;
}

Matrix::Matrix(int r, int c, char *s) : Seq(r*c,s)
{
	Col = c;
}

Matrix::Matrix(const Matrix &a) : Seq(a)
{
	Col = a.Col;
}

Matrix &Matrix::operator = (const Matrix &a)
{
	Seq::operator=(a);
	Col = a.Col;
	return *this;
}

int Matrix::operator == (const Matrix &a)
{
	if (a.Col != Col) return 0;
	return Seq::operator==(a);
}

void Matrix::SetId()
{
	for (int i=0; i<Size/Col; i++)
		for (int j=0; j<Col; j++)
			if (i==j) Set(i,j,1.0); else Set(i,j,0.0);
}

void Matrix::Set(int i, int j, float x)
{
	Seq::Set(i*Col + j, x);
}

void Matrix::Set(int i, const Vector &v)
{
	float *p = &Val[i*Col];
	for (int j=0; j<Col; j++) {*p = v[j]; p++;}
}

Vector Matrix::operator [](int i) const
{
	float *v = &Val[i*Col];
	return Vector(Col,v);
}

float Matrix::Get(int i, int j)
{
	int k = i*Col + j;
	if (k>=Size) return 0;
	return Val[k];
}

Matrix Matrix::operator - ()
{
	Matrix tmp = *this;
	tmp.Seq::operator*=(-1);
	return tmp;
}

Matrix Matrix::operator + (const Matrix& a)
{
	Matrix tmp = *this;
	tmp +=a;
	return tmp;
}

Matrix Matrix::operator - (const Matrix& a)
{
	Matrix tmp = *this;
	tmp -=a;
	return tmp;
}

Matrix operator*(float d, const Matrix &a)
{
	Matrix tmp(a);
	tmp.Seq::operator*=(d);
	return tmp;
}

Matrix Matrix::operator*(const Matrix &a)
{
	int r = Size/Col, c = a.Col;
	Matrix  tmp(r,c), tp = a.T(), m = *this;
	for (int i=0; i<r; i++)
		for (int j=0; j<c; j++) tmp.Val[i*c+j] = m[i]*tp[j];
	return tmp;
}

Vector Matrix::operator*(const Vector &v)
{
	int n = Size/Col;
	Vector tmp = Vector(n);
	for (int i=0; i<n; i++)	tmp.Seq::Set(i, (*this)[i]*v);
	return tmp;
}

void Matrix::Scale(int i, float a)
{
	if (a==0) return;
	if ((i+1)*Col>Size) return;
	float *p = &Val[i*Col];
	for (int j=0; j<Col; j++)
	{
		(*p) *= a;
		p++;
	}
}
void Matrix::Change(int i, int j)
{
	if ((i+1)*Col>Size) return;
	if ((j+1)*Col>Size) return;
	float *pi = &Val[i*Col], *pj = &Val[j*Col], t;
	for (int k=0; k<Col; k++)
	{
		t = *pi;
		*pi = *pj;
		*pj = t;
		pi++;
		pj++;
	}
}

void Matrix::Replace(int i, int j, float a)
{
	if ((i+1)*Col>Size) return;
	if ((j+1)*Col>Size) return;
	float *pi = &Val[i*Col], *pj = &Val[j*Col];
	for (int k=0; k<Col; k++)
	{
		*pi += (*pj)*a;
		pi++;
		pj++;
	}
}

void Matrix::Reduce()
{
	int Row = Size/Col, i, j, i0 = 0;
	for (j = 0; j< Col; j++)
	{
		i = i0;
		while (Val[i*Col+j]==0&&i<Row) i++;
		if (i<Row)
		{
			if (i!=i0) Change(i,j);
			for (i=i0+1; i<Row; i++)
				if (Val[i*Col+j]!=0)
					Replace(i,i0,-Val[i*Col+j]/Val[i0*Col+j]);
			i0++;
		}
	}
}

Matrix Matrix::T() const
{
	int Row = Size/Col;
	Matrix tmp(Col,Row);
	for (int i = 0; i< Row; i++)
		for (int j = 0; j< Col; j++)
			tmp.Val[j*Row+i] = Val[i*Col+j];
	return tmp;
}

float Matrix::Det() const
{
	if (Col*Col!=Size) { cerr<<"Error!"; return 0;}
	if (Col==2) return (Val[0]*Val[3] - Val[1]*Val[2]);
	if (Col==3)
	{
		float d = Val[0]*Val[4]*Val[8] + Val[1]*Val[5]*Val[6]
				+ Val[2]*Val[3]*Val[7] - Val[2]*Val[4]*Val[6]
				- Val[1]*Val[3]*Val[8] - Val[0]*Val[5]*Val[7];
		return d;
	}
	Matrix tmp = *this;
	float d = 1.0, ajj, aij;
	int i, j, Row = Size/Col;
	for (j = 0; j< Col; j++)
	{
		i = j;
		while (tmp.Get(i,j)==0&&i<Row) i++;
		if (i==Row) return 0;
		if (i!=j)
		{
			tmp.Change(i,j);
			d *= -1.0;
		}
		d *= ajj = tmp.Get(j,j);
		if (d==0) return d;
		for (i=j+1; i<Col; i++)
			if (0!=(aij = tmp.Get(i,j)))
				tmp.Replace(i,j,-aij/ajj);
	}
	return d;
}

Matrix Matrix::Inv() const
{
	//tham khao cac trang 40, 41, 42
}

ostream &operator <<(ostream &o, const Matrix &a)
{
	int Row = a.Size/a.Col;
	for (int i=0; i<Row; i++)
	{
		for (int j=0; j<a.Col; j++) o<<setw(5)<<setprecision(2)<<a.Val[i*a.Col+j]<<" ";
		o<<endl;
	}
	return o;
}