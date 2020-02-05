#include"stdio.h"
typedef struct
	{
		unsigned a: 1;
		unsigned b: 1;
		unsigned c: 1;
		unsigned d: 1;
		unsigned e: 1;
		unsigned f: 1;
		unsigned g: 1;
		unsigned h: 1;
	}kytu;
typedef union
	{
		char ch;
		kytu b;
	}ma;
void hien_thi(char c)
	{
		ma u;
		u.ch = c;
		printf("\n      %c              %3d             %u %u %u %u %u %u %u %u ",
		u.ch,u.ch,u.b.h,u.b.g,u.b.f,u.b.e,u.b.d,u.b.c,u.b.b,u.b.a);
	}
main()
	{
		char c;
		clrscr();
		printf("\n             B A N G   M A   A S C I I");
		printf("\n    Ky tu        He thap phan          He nhi phan");
		printf("\n  ---------     ---------------       -------------");
		for (c=1; c<7; hien_thi(c++));
			for (c='A'; c<'K'; hien_thi(c++));
		printf("\n   ****************************************************");
		printf("\n            Bam phim bat ky de ket thuc");
		getch();
	}