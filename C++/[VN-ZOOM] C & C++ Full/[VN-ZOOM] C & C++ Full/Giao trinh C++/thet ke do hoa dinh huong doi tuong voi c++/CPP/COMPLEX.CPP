// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "complex.hpp"

extern "C"{
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
}

static void DefaultHandler();

void (* Complex::ErrorHandler)() = DefaultHandler;

static void DefaultHandler()
{
	cerr<<"\aERROR Complex Object : Divide to zero\n";
	exit(1);
}

Complex::Complex ()
{
	Real = Imag = 0.0;
}

Complex::Complex (const float &r)
{
	Real = r;
	Imag = 0.0;
}

Complex::Complex (const float &r, const float &i)
{
	Real = r;
	Imag = i;
}

Complex::Complex (const Complex &c)
{
	Real = c.Real;
	Imag = c.Imag;
}

void Complex::operator = (const Complex  &c)
{
	Real = c.Real;
	Imag = c.Imag;
}

void Complex::SetErrorHandler(void (* UserHandler)())
{
	ErrorHandler = UserHandler;
}

float real(const Complex &c)
{
	return c.Real;
}

float imag(const Complex &c)
{
	return c.Imag;
}

float abs(const Complex &c)
{
	float result= sqrt(c.Real*c.Real+c.Imag*c.Imag);
	return result;
}

float norm(const Complex &c)
{
	float result= c.Real*c.Real+c.Imag*c.Imag;
	return result;
}

float arg(const Complex &c)
{
	float result= atan2(c.Imag,c.Real);
	return result;
}

Complex Complex::operator -()
{
	return Complex(Real,-Imag);
}

Complex Complex::operator +=(const Complex &c)
{
	Real += c.Real;
	Imag += c.Imag;
	return *this;
}

Complex Complex::operator -=(const Complex &c)
{
	Real -= c.Real;
	Imag -= c.Imag;
	return *this;
}

Complex Complex::operator *=(const Complex &c)
{
	float r = Real, i = Imag;
	Real = r*c.Real - i*c.Imag;
	Imag = r*c.Imag + i*c.Real ;
	return *this;
}

Complex Complex::operator /=(const Complex &c)
{
	float x = norm(c);
	if (x==0) ErrorHandler();
	float r = Real, i = Imag;
	Real = ( r*c.Real + i*c.Imag)/x;
	Imag = (-r*c.Imag + i*c.Real)/x ;
	return *this;
}

Complex operator +(const Complex &c1, const Complex &c2)
{
	Complex result;
	result.Real=c1.Real+c2.Real;
	result.Imag=c1.Imag+c2.Imag;
	return result;
}

Complex operator -(const Complex &c1, const Complex &c2)
{
	Complex result;
	result.Real=c1.Real-c2.Real;
	result.Imag=c1.Imag-c2.Imag;
	return result;
}

Complex operator *(const Complex &c1, const Complex &c2)
{
	float r = c1.Real*c2.Real - c1.Imag*c2.Imag,
		  i = c1.Real*c2.Imag + c1.Imag*c2.Real;
	return Complex(r,i);
}

Complex operator /(const Complex &c1, const Complex &c2)
{
	float x = norm(c2);
	if (x==0) Complex::ErrorHandler();
	float r = ( c1.Real*c2.Real + c1.Imag*c2.Imag)/x,
		  i = (-c1.Real*c2.Imag + c1.Imag*c2.Real)/x;
	return Complex(r,i);
}


int operator ==(const Complex &c1, const Complex &c2)
{
	return ((c1.Real == c2.Real) && (c1.Imag == c2.Imag))
;
}

int operator !=(const Complex &c1, const Complex &c2)
{
	return ((c1.Real != c2.Real) || (c1.Imag != c2.Imag));
}

ostream &operator<<(ostream &o, const Complex &c)
{
	o<<'('<<c.Real;
	if (c.Imag !=0.0) o<<','<<c.Imag;
	o<<')';
    return o;
}