#include"stdio.h"
#include"alloc.h"
main()
	{
		char *ten;
		char *chuc_vu;
		ten=calloc(26,sizeof(char));
		chuc_vu=calloc(30,sizeof(char));
		clrscr();
		printf("\n Nhap vao ten nhan vien : ");
		gets(ten);
		printf("\n Chuc vu :");
		gets(chuc_vu);
		printf("\n Ong (ba) : %s. Chuc vu la :%s ",ten,chuc_vu);
		getch();
	}