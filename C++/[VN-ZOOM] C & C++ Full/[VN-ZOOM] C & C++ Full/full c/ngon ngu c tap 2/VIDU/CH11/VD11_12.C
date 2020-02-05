#include"stdio.h"
main()
	{
		FILE *f;  /* Khai bao bien tap tin */
		char c;
		clrscr();
		printf("\n\tDOC NOI DUNG TAP TIN KYTU.TXT");
		printf("\n\t    Minh hoa ham getc();");
		printf("\n\t    -------------------\n");
		f=fopen("kytu.txt","rt");  /* Mo tap tin KYTU.TXT */
		while (!feof(f))
			{
				c=getc(f); /* Doc cac ky tu tu tap tin KYTU.TXT*/
				putchar(c); /* Xuat ky tu ra man hinh */
			}
		close(f); /* Dong tap tin KYTU.TXT */
		printf("\n\t    ----------------------\n");
		printf("\n\tDa doc xong tap tin KYTU.TXT");
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}