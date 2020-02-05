#include"stdio.h"
main()
	{
		char ten[15];
		char chuc_vu[30];
		clrscr();
		printf("\n Nhap vao ten nhan vien : ");
		scanf("%s",&ten);
		printf("\n Chuc vu :");
		scanf("%s",&chuc_vu);
		printf("\nOng (ba) : %s. Chuc vu la :%s",ten,chuc_vu);
		getch();
	}