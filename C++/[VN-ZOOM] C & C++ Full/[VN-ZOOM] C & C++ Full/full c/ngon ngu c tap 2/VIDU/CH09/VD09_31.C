#include"stdio.h"
#include"conio.h"
main()
	{
		char chuoi[80];
		clrscr();
		printf("\n Nhap 1 chuoi toi da 80 ky tu :\n ");
		gets(chuoi);
		clrscr();
		printf(chuoi);
		printf("\n\n Bam phim bat ky de xoa tu vi tri");
		printf("\n con nhay (cot 5, dong 1) den cuoi dong");
		gotoxy(5,1);
		getch();
		clreol();
		gotoxy(1,3);
		delline();
		gotoxy(1,3);
		delline();
		printf("\n Bam phim bat ky de tiep tuc");
		getch();
		clrscr();
		printf("\n Nhap 1 chuoi toi da 80 ky tu :\n ");
		gets(chuoi);
		clrscr();
		printf(chuoi);
		printf("\n\n Bam phim bat ky de xoa ca dong");
		gotoxy(5,1);
		getch();
		delline();
		clrscr();
		printf("\n\n Bam phim bat ky de ket thuc ");
		getch();
	}
