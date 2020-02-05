#include"math.h"
main()
	{
		double tri= -1.0;
		clrscr();
		printf("\          MINH HOA HAM ASIN()\n");
		do
			{
				printf("  -arc sine cua %10.7f la %10.7f\n",tri,asin(tri));
				tri+=0.1;
			}
		while (tri <=1.0);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
