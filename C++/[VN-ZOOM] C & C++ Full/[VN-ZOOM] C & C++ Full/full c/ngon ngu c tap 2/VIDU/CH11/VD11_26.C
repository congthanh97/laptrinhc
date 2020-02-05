#include"stdio.h"
main()
	{
		int a,b;
		float x,y;
		clrscr();
		printf("\nSU DUNG DAC TA %*\n");
		printf("\n\t-Nhap 6 so (3 so nguyen, 3 so le): ");
		scanf("%d%*d%d%f%*f%f",&a,&b,&x,&y);
		printf("\n\t   a=%d",a);
		printf("\n\t   b=%d",b);
		printf("\n\t   x=%10.3e",x);
		printf("\n\t   y=%10.6e",y);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
