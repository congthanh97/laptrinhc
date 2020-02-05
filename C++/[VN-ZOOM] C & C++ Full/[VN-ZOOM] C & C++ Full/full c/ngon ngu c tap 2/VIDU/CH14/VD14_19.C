#include"math.h"
main()
	{
		double tri= -1.0;
		clrscr();
		printf("\          MINH HOA HAM COSH()\n");
		do
			{
				printf("-hyperbolic cosine cua %10.7f radian la %10.7f\n",tri,cosh(tri));
				tri+=0.1;
			}
		while (tri <=1.0);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
