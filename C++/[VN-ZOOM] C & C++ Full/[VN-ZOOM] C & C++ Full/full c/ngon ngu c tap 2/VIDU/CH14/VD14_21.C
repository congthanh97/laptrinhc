#include"math.h"
main()
	{
		double tri= -1.0;
		clrscr();
		printf("\          MINH HOA HAM TANH()\n");
		do
			{
				printf("-hyperbolic tangent cua %10.7f radian la %10.7f\n",tri,tanh(tri));
				tri+=0.1;
			}
		while (tri <=1.0);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
