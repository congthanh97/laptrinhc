#include"alloc.h"
#include"string.h"
main()
	{
		char *chuoi;
		int n;
		chuoi=calloc(100,sizeof(char));
		clrscr();
		printf("\n Nhap vao mot chuoi bat ky : ");
		gets(chuoi);
		n=strlen(chuoi);
		printf("\n Chuoi nay gom : %d ky tu ke ca ky tu trong",n);
		getch();
	}
