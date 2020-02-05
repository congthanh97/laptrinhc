#include"stdio.h"
main()
	{
		char ten[26];
		char chuc_vu[30];
		clrscr();
		printf("\n Nhap vao ten nhan vien : ");
		gets(ten);
		printf("\n Chuc vu :");
		gets(chuc_vu);
		printf("\nOng (ba) : %s. Chuc vu la :%s",ten,chuc_vu);
		getch();
	}