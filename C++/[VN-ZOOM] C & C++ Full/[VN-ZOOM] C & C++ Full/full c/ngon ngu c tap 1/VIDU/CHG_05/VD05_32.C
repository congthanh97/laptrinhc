/* Tim so lon nhat trong 3 so */
float max3s(a,b,c)   /* Khai bao ham kieu so thuc */
float a,b,c;
	{
		float max;
		max =a>b ? a:b;
		return (max >c ? max : c);
	}
#include<stdio.h>
main()
	{
		float x,y,z,max3s();
		int s;
		tt:printf("\nNhap 3 so  ");
		printf("\nSo thu nhat : ");
		scanf("%f",&x);
		printf("\nSo thu hai : ");
		scanf("%f",&y);
		printf("\nSo thu ba : ");
		scanf("%f",&z);
		printf("\nTrong 3 so \nX=%8.2f\nY=%8.2f\nZ=%8.2f",x,y,z);
		printf("\nSo lon nhat la = %8.2f ",max3s(x,y,z));
		getch();
	}