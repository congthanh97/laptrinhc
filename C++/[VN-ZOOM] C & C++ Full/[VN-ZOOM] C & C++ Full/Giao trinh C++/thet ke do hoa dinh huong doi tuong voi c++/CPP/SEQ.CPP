// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "seq.hpp"

static void DefaultHandler();

void (*Seq::ErrorHandler)() = DefaultHandler;

static void DefaultHandler()
{
	cerr<<"Error on Seq!";
}

void Seq::Copy(const Seq &v)
{
	 Size = v.Size;
	 Val = new float[Size];
	 for ( int i=0; i<Size; i++) Val[i] = v.Val[i];
}

void Seq::Empty()
{
	Size = 0;
	delete Val;
	Val = 0;
}

Seq::Seq()
{
	Size = 0;
	Val = 0;
}

Seq::Seq(unsigned int n, float v)
{
	Size = 0; Val = 0;
	if (n>0)
	{
		Size = n;
		Val = new float[Size];
		for (unsigned int i=0; i<Size ; i++) Val[i]=v;
	}
}

Seq::Seq(unsigned int n, float *a)
{
	Size = 0; Val = 0;
	if (n>0)
	{
		Size = n;
		Val = new float[Size];
		for (unsigned int i=0; i<n; i++) Val[i] = a[i];
	}
}

Seq::Seq(unsigned int n, char *s)
{
	istrstream in(s);
	Size = n;
	Val = new float[n];
	for (int i = 0; i<n ; i++) in>>Val[i];
}

Seq::Seq(const Seq &s)
{
	Copy(s);
}

Seq::~Seq()
{
	Empty();
}

Seq &Seq::operator = (const Seq &v)
{
	Empty();
	Copy(v);
	return *this;
}

int Seq::operator ==(const Seq &s)
{
	if (s.Size != Size) return 0;
	for (int i=0; i< Size; i++) if(s.Val[i] != Val[i]) return 0;
	return 1;
}

unsigned Seq::Len() const
{
	return Size;
}

float Seq::operator [](int i) const
{
	if (i<Size) return Val[i];
	return 0;
}

void Seq::Set(int i, float v)
{
	if ((i<Size)&&(i>=0)) Val[i] = v;
}

Seq Seq::operator - ()
{
	Seq s = *this;
	for (int i=0; i<Size; i++) s.Val[i] *= -1;
	return s;
}

Seq Seq::operator + (const Seq &s)
{
	Seq tmp = *this;
	for (int i=0; i<Size; i++) tmp.Val[i] += s[i];
	return tmp;
}

Seq Seq::operator - (const Seq &s)
{
	Seq tmp = *this;
	for (int i=0; i<Size; i++) tmp.Val[i] -= s[i];
	return tmp;
}

Seq operator * (float d, const Seq &s)
{
	Seq tmp(s);
	for (int i=0; i<s.Size; i++) tmp.Val[i] *= d;
	return tmp;
}

Seq &Seq::operator += (const Seq &s)
{
	for (int i=0; i<Size; i++) Val[i] += s[i];
	return *this;
}

Seq &Seq::operator -= (const Seq &s)
{
	for (int i=0; i<Size; i++) Val[i] -= s[i];
	return *this;
}

Seq &Seq::operator *= (float d)
{
	for (int i=0; i<Size; i++) Val[i] *= d;
	return *this;
}

ostream &operator <<(ostream &o, const Seq &s)
{
	for (int i=0; i<s.Size; i++)
		o<<setw(5)<<setprecision(2)<<s.Val[i]<<" ";
	return o;
}

istream &operator >>(istream &in, Seq  &s)
{
	//tham khao trang 33
}

