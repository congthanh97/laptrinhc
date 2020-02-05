#include"math.h"
main()
	{
		double tri= 1.0;
		clrscr();
		printf("\          MINH HOA HAM Log()\n");
		do
			{
				printf("-Logarit tu nhien cua %9.6f la %9.6f\n",tri,log(tri));
				tri++;
			}
		while (tri <=10.0);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
