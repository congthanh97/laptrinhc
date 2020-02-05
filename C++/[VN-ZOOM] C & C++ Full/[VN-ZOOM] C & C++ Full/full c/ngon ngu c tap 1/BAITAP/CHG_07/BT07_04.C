

#include "stdio.h"
#define SIZE 10
main()
	{
		int a[SIZE];
		nhap(a,'a');
		printf("\nTruoc khi chua duoc sap xep\n");
		hienthi(a,'a');
		sapxep(a);
		printf("\nSau khi sap xep ta co mang giam nhu sau :\n");
		hienthi(a,'a');
		getch();
	}

nhap(int x[],char chu)
	{
		int k;
		printf("\n");
		for(k=0;k<SIZE;k++)
			{
				printf("\%c[%d]=",chu,k+1);
				scanf("%d",&x[k]);
			}
		printf("\n");
	}

hienthi(int x[],char chu)
	{
		int k;
		printf("%c=(",chu);
		for(k=0;k<SIZE-1;k++)
			printf("%d\,",x[k]);
		printf("%d)\n",x[k]);
	}
sapxep(int x[])
	{
		int i,j;
		for(i=0;i<SIZE;i++)
			for(j=i;j<SIZE;j++)
				{
					int tam;
					if(x[j]>x[i])
						{
							tam=x[j];
							x[j]=x[i];
							x[i]=tam;
						}
				}
	}