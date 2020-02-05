#include"alloc.h"
#include"string.h"
main()
	{
		char *chuoi;
		chuoi=calloc(100,sizeof(char));
		clrscr();
		printf("\n Nhap vao 1 chuoi bat ky ( chu thuong ): ");
		gets(chuoi);
		printf("\ Doi chuoi nay ra chu HOA la :");
		puts(strupr(chuoi));
		printf("\n Chuyen tro lai chu thuong la :");
		puts(strlwr(chuoi));
		printf("\n");
		printf("\n--------------------------------------\n");
		printf("\n Nhap vao 1 chuoi bat ky ( chu HOA ): ");
		gets(chuoi);
		printf("\ Doi chuoi nay ra chu thuong la :");
		puts(strlwr(chuoi));
		printf("\n Chuyen chuoi nay tro lai chu HOA la :");
		puts(strupr(chuoi));
		getch();
	}
