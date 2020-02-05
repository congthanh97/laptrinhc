#include<stdlib.h>
int a[1000];
void tao()
	{
		int k;
		randomize();
		for (k=0;k<1000;a[k++]=random(100));
	}

void tim()
	{
		int x,k;
		printf("\nNhap vao gia tri cua X= ");
		scanf("%d",&x);
		for (k=0;k<999;k++)
			if ( a[k]+a[k+1]==x)
			printf("a[%d] + [%d]=%d\n",k,k+1,x);
		puts("Ket thuc");
	}

main()
	{
		tao();
		tim();
		getch();
	}