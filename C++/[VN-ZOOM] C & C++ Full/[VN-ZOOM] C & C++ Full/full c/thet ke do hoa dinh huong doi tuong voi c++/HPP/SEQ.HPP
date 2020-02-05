// Lop day cac so thuc 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __SEQ_HPP
#define __SEQ_HPP

#include "iomanip.h"
#include "iostream.h"
#include "strstrea.h"

extern "C"{
#include "math.h"
}

class Seq{
protected:
	int Size;
	float *Val;
	void Copy(const Seq &);
	void Empty();
	static void (*ErrorHandler)();

public:
	Seq();
	Seq(unsigned int, float v = 0);
	Seq(unsigned int, float *);
	Seq(unsigned int, char *);
	Seq(const Seq &);
	~Seq();

	Seq &operator =(const Seq &);
	int operator ==(const Seq &);
	unsigned Len() const;
	float operator [](int) const;
	void Set(int, float);

	Seq operator - ();
	Seq operator + (const Seq &);
	Seq operator - (const Seq &);
	friend Seq operator * (float, const Seq &);

	Seq &operator += (const Seq &);
	Seq &operator -= (const Seq &);
	Seq &operator *= (float);

	friend ostream &operator <<(ostream &, const Seq  &);
	friend istream &operator >>(istream &, Seq  &);
};

#endif