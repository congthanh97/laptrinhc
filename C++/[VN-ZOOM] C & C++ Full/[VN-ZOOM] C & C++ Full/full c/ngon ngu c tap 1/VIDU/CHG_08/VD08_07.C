#include<alloc.h>
main()
	{
		int *p[10];
		char k;
		clrscr();
		printf("Bo nho truoc khi chay chuong trinh= %u bytes ",coreleft());
		for (k=0;k<10;k++)
			{
				p[k]=malloc(24);
				printf("\nBo nho con lai sau khi cap cho con tro :%2d la = %u bytes ",k+1,coreleft());
			}
		for (k=0;k<10;free(p[k++]));
		printf("\nBo nho sau khi da giai phong 10 bien con tro= %u bytes ",coreleft());
		getch();
	}