#include<stdio.h>
main()
	{
		register int i=1,s=0;
		int n;
		printf("\nTINH TONG LAP PHUONG CUA n SO NGUYEN DAU TIEN");
		printf("\nSo N = ");
		scanf("%d",&n);
		for (;i<=n;i++)
			s=s+(i*i*i);
		printf("\nTong lap phuong = %d ",s);
		getch();
	}