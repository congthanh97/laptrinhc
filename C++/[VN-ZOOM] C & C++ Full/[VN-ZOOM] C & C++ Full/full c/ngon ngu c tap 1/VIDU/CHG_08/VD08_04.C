#include<stdio.h>
main()
	{
		int *px;
		*px=123;
		printf("Vi tri cua con tro px la :%p\n ",px);
		printf("Gia tri cua px tro toi la :%d\n ",*px);
		getch();
	}