#include"stdio.h"
#include"alloc.h"
#include"string.h"
main()
	{
		char *chuoi;
		chuoi=calloc(140,sizeof(char));
		clrscr();
		printf("\n Nhap vao 1 chuoi bat ky : ");
		gets(chuoi);
		printf("\ Dao nguoc chuoi vua nhap la : %s",strrev(chuoi));
		getch();
	}
