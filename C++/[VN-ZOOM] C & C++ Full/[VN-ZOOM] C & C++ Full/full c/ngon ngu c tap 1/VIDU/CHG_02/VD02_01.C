/* Mo ta su khac nhau ve vi tri ca1c bien */
#include<stdio.h>
main()
	{
		int i=3,j=5;
			{
				int i=2,j=4; /* Cac bien nay chi ton tai trong khoi */
				printf("KET QUA IN RA\n");
				printf("-Gia tri i trong khoi =%d\n",i);
				printf("-Gia tri j trong khoi =%d\n",j);
			}
		printf("-Gia tri i ngoai khoi =%d\n",i);
		printf("-Gia tri j ngoai khoi =%d\n",j);
		getch();
	}