#include"stdio.h"
main()
	{
		FILE *f;  /* Khai bao bien tap tin */
		char c;
		clrscr();
		printf("\n\tGHI DU LIEU VAO TAP TIN CHUOI.TXT");
		printf("\n\t     Minh hoa ham fputs();\n");
		f=fopen("chuoi.txt","wt");  /* Mo tap tin CHUOI.TXT */
		fputs("\n\tNam quoc son ha Nam De cu.",f);
		fputs("\n\tTu nhien din phan tai Thien thu.",f);
		fputs("\n\tNhu ha nghich lo lai xam pham.",f);
		fputs("\n\tNhu dang hanh khang thu bai hu.",f);
		close(f); /* Dong tap tin CHUOI.TXT */
		printf("\n\tDa ghi tap tin CHUOI.TXT vao dia");
		printf("\n\t   Bam phim bat ky de ket thuc");
		getch();
	}