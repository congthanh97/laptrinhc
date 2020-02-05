#include"stdio.h"
main()
	{
		int a;
		long b;
		float x;
		double y;
		clrscr();
		printf("\nSU DUNG SAI DAC TA NEN SAI KET QUA\n");
		printf("\n\t-Nhap vao a b x y: ");
		scanf("%ld%d%lf%f",&a,&b,&x,&y);
		printf("\n\t  a=%10d",a);
		printf("\n\t  b=%10ld",b);
		printf("\n\t  x=%8.2f",x);
		printf("\n\t  y=%8.2f",y);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
