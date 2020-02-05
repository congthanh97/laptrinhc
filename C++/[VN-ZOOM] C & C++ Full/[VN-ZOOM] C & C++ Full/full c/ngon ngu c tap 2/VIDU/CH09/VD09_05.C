#include"conio.h"
main()
	{
		char ten[26];
		char chuc_vu[30];
		ten[0]=26;
		chuc_vu[0]=30;
		clrscr();
		printf("\n Nhap vao ten nhan vien : ");
		cgets(ten);
		printf("\n Chuc vu :");
		cgets(chuc_vu);
		printf("\n Ong (ba) : %s. Chuc vu la :%s ",ten,chuc_vu);
		getch();
	}