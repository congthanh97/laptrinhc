#include"stdio.h"
main()
	{
		FILE *f;  /* Khai bao bien tap tin */
		char c;
		clrscr();
		printf("\n\tGHI THEM DU LIEU VAO TAP TIN CHUOI.TXT");
		printf("\n\t     Minh hoa tuy chon append (a)");
		printf("\n\t   Ghi them chuoi vao cuoi tap tin");
		printf("\n\t      ------------------------\n");
		f=fopen("chuoi.txt","a");  /* Mo tap tin CHUOI.TXT */
		fputs("\n\tKy niem 300 nam Sai Gon - Thanh pho Ho Chi Minh",f);
		close(f); /* Dong tap tin CHUOI.TXT */
		printf("\n\tDa ghi them vao tap tin CHUOI.TXT");
		printf("\n\t  Bam phim bat ky de ket thuc");
		getch();
	}