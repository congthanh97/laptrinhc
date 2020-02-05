#include<stdio.h>
main()
	{
		int a,b;
		printf("\nNhap so thu nhat : ");
		scanf("%d",&a);
		printf("\nNhap so thu hai : ");
		scanf("%d",&b);
		truyenbien(&a,&b);
		printf("\n\nSau khi thuc hien ham thi");
		printf("\nSo thu nhat = %d ",a);
		printf("\nSo thu hai  = %d ",b);
		getch();
	}
truyenbien(int *x,int *y)
	{
		int tam;
		tam=*x;
		*x=*y;
		*y=tam;
		printf("\nTrong khi thuc hien ham thi");
		printf("\nSo thu nhat = %d ",*x);
		printf("\nSo thu hai  = %d ",*y);
	}