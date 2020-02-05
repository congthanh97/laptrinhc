// Lop so phuc 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc - tham khao Scott Robert Ladd
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __COMPLEX_HPP
#define __COMPLEX_HPP

#include "iostream.h"

class Complex{
private :
	float Real, Imag;
	static void (* ErrorHandler)();
public :
	Complex ();
	Complex (const float &);
	Complex (const float &, const float &);
	Complex (const Complex &);
	void operator = (const Complex  &);

	static void SetErrorHandler(void (* UserHandler)());

	friend float real(const Complex &c);
	friend float imag(const Complex &c);
	friend float abs(const Complex &c);
	friend float norm(const Complex &c);
	friend float arg(const Complex &c);

	Complex operator -();
	Complex operator +=(const Complex &c);
	Complex operator -=(const Complex &c);
	Complex operator *=(const Complex &c);
	Complex operator /=(const Complex &c);
	friend Complex operator +(const Complex &c1, const Complex &c2);
	friend Complex operator -(const Complex &c1, const Complex &c2);
	friend Complex operator *(const Complex &c1, const Complex &c2);
	friend Complex operator /(const Complex &c1, const Complex &c2);
	friend int operator ==(const Complex &c1, const Complex &c2);
	friend int operator !=(const Complex &c1, const Complex &c2);

	friend ostream &operator<<(ostream &, const Complex &);
};

#endif
