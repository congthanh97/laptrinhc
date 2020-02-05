#include<stdio.h>
main()
{
	float a,b,c,d,e,f;
	clrscr();
	printf("\n-Nhap so thu nhat = ");
	scanf("%f",&a);
	printf("\n-Nhap so thu hai  = ");
	scanf("%f",&b);
	printf("\n-Nhap so thu ba   = ");
	scanf("%f",&c);
	printf("\n-Nhap so thu tu   = ");
	scanf("%f",&d);
	e=a+b+c+d;
	printf("\n\a * Tong cua 4 so vua nhap vao = %f",e);
	f=(a+b+c+d)/4;
	printf("\n\ * Trung \a binh \a cong \a cua \a 4 \a so \a la = %f",f);
	getch();
}

