#include<alloc.h>
#define max 10
typedef char ten[24];
main()
	{
		ten *p[max];
		char k;
		clrscr();
		printf("\nBat dau chuong trinh,bo nho la = %u bytes",coreleft());
		for (k=0;k<max;k++)
			{
				p[k]=malloc(sizeof(ten));
				printf("\nTen nguoi thu : %2d la : ",k+1);
				gets(p[k]);
				printf("\nBo nho bay gio con lai la = %u ",coreleft());
			}
		printf("\n");																	\
		printf("\n%10cHIEN THI DANH SACH VUA NHAP",'');
		printf("\n%13cVA GIAI PHONG BO NHO",'');
		for (k=0;k<max;printf("\n%15c %s",'',(p[k++])));
		for (k=0;k<max;free(p[k++]));
		printf("\nKet thuc chuong trinh,bo nho la = %u bytes",coreleft());
		getch();
	}