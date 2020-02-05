#include<stdio.h>
main()
	{
		int a[10],s,i,*px;
		for (i=0;i<10;++i)
			{
				printf("\nPhan tu thu : %d a[%d]= ",i+1,i);
				scanf("%d",&a[i]);
			}
		s=0;
		for (i=0;i<10;++i)
			{
				s+=a[i];
				printf("\n  a[%d]= %d ",i,a[i]);
			}
		printf("\nTong = %d ",s);
		getch();
	}