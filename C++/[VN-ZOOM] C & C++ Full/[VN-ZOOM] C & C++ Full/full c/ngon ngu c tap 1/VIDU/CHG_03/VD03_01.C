#include<stdio.h>
main()
	{
		int i,j;
		clrscr();
		printf("\nCho biet so thu nhat = ");
		scanf("%d",&i);
		printf("\nCho biet so thu hai = ");
		scanf("%d",&j);
		if (i == j)
			printf("\nHai so nay bang nhau");
		if (i != j)
			printf("\nHai so nay khac nhau");
		if (i > j)
			printf("\nSo thu nhat lon hon so thu hai");
		if (i >= j)
			printf("\nSo thu nhat lon hon hoac bang so thu hai");
		if (i >= 2 && i<= 20)
			printf("\nSo thu nhat nam trong khoang tu 2 den 20");
		if (i >= 2 || i<= 20)
			printf("\nKhong sai ! Luon luon dung");
		getch();
	}