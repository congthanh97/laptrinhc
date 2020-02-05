#include"stdio.h"
main()
	{
		FILE *f;  /* Khai bao bien tap tin */
		char c[80];
		clrscr();
		printf("\n\tDOC NOI DUNG TAP TIN CHUOI.TXT");
		printf("\n\t    Minh hoa ham fgetc();");
		printf("\n\t    -------------------\n");
		f=fopen("chuoi.txt","rt");  /* Mo tap tin CHUOI.TXT */
		while (fgets(c,80,f) !=NULL)
				printf("%s",c); /* Xuat ky tu ra man hinh */
		close(f); /* Dong tap tin CHUOI.TXT */
		printf("\n\t    ----------------------\n");
		printf("\n\tDa doc xong tap tin CHUOI.TXT");
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}