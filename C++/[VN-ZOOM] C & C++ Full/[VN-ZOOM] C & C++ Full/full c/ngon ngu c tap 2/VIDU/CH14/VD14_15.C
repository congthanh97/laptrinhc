#include"math.h"
main()
	{
		double tri= -1.0;
		clrscr();
		printf("\          MINH HOA HAM ATAN()\n");
		do
			{
				printf("  -arc tangent cua %10.7f la %10.7f\n",tri,atan(tri));
				tri+=0.1;
			}
		while (tri <=1.0);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
