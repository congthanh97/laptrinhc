#include"math.h"
main()
	{
		double x=10.0,y=0.0;
		clrscr();
		printf("\          MINH HOA HAM POW()\n");
		do
			{
				printf("-Luy thua 10 cua: %9.6f la %f\n",y,pow(x,y));
				y++;
			}
		while (y < 11);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
