#include<stdio.h>
main()
	{
		int a[10],i,tong();
		clrscr();
		for (i=0;i<10;++i)
			{
				printf("\nPhan tu thu : %d a[%d]= ",i+1,i);
				scanf("%d",&a[i]);
			}
		printf("\nTong cua mang a = %d ",tong(a,10));
		getch();
	}

int tong(a,n)
int n,*a;
	{
		int i,s=0;
		for (i=0;i<n;++i)
			s+= a[i];
		return(s);
	}