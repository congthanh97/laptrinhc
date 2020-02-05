// Lop day truu tuong  
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __POLY_HPP
#define __POLY_HPP

#include "iostream.h"
#include "strstrea.h"

template <class T>
class Poly{
protected:
	int n;
	void Copy(const Poly &);
	void Empty()
	{
		if (p!=0) delete p;
		n = 0;
	}
public:
	T *p;
	Poly()
	{
		n = 0;
		p = 0;
	}
	Poly(int k)
	{
		n = k;
		p = new T[n];
	}
	Poly(int, T *);
	Poly(const Poly &pl)
	{
		Copy(pl);
	}
	~Poly()
	{
		Empty();
	}
	void operator = (const Poly &pl)
	{
		Empty();
		Copy(pl);
	}
	int operator == (const Poly &);
	int Count() const
	{
		return n;
	}
	void Set(int i, const T &q)
	{
		if ((i>=0)&&(i<n)) p[i] = q;
	}
	int Find(const T &);
	T &operator[](int i) const
	{
		if (i>=0&&i<n) return p[i];
		return p[0];
	}
	friend istream &operator >>(istream &, Poly &);
};

template <class T> void Poly<T>::Copy(const Poly<T> &pl)
{
	n = pl.n;
	p = new T[n];
	for (int i=0; i<n; i++) p[i] = pl.p[i];
}

template <class T> Poly<T>::Poly(int k, T *pt)
{
	n = k;
	p = new T[n];
	for (int i = 0; i<n ; i++) p[i] = pt[i];
}

template <class T> int Poly<T>::Find(const T &q)
{
	for (int i=0; i<n; i++)
		if (q==(p[i])) return (i+1);
	return 0;
}

template <class T> int Poly<T>::operator == (const Poly<T> &pl)
{
	if (n!=pl.n) return 0;
	for (int i=0; i<n; i++) if (!(p[i]==pl.p[i])) return 0;
	return 1;
}

template <class T> istream &operator >>(istream &in, Poly<T> &p)
{
	for (int i=0; i<p.n; i++) in>>p.p[i];
	return in;
}

#endif