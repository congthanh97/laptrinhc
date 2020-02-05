// Lop ma tran 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __MATRIX_HPP
#define __MATRIX_HPP

#include "seq.hpp"

class Vector;
class Matrix : public Seq{
protected:
	int Col;

public:
	Matrix();
	Matrix(int);
	Matrix(int, int);
	Matrix(int, int, float *);
	Matrix(int, int, char *);
	Matrix(const Matrix &);

	void SetId();
	void Set(int, int, float);
	void Set(int, const Vector &);
	Vector operator [](int) const;
	float Get(int, int);

	Matrix& operator = (const Matrix &);
	int operator == (const Matrix &);

	Matrix operator - ();
	Matrix operator + (const Matrix &);
	Matrix operator - (const Matrix &);
	friend Matrix operator * (float, const Matrix &);

	Matrix operator * (const Matrix &);
	Vector operator * (const Vector &);

	void Scale(int, float);
	void Change(int, int);
	void Replace(int, int, float);
	void Reduce();

	Matrix T() const;
	float Det() const;
	Matrix Inv() const;

	friend ostream &operator <<(ostream &, const Matrix &);
};

#endif
