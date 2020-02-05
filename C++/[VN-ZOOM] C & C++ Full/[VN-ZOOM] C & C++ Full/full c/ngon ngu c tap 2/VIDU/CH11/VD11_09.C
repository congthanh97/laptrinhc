#include"stdio.h"
main()
	{
		FILE *f;  /* Khai bao bien tap tin */
		char c;
		clrscr();
		printf("\n\tNHAP DU LIEU VA GHI VAO TAP TIN KYTU.TXT");
		printf("\n\t        Minh hoa ham putc();");
		printf("\n\t    Khi khong nhap, bam <F6+Enter>\n");
		f=fopen("kytu.txt","wt");  /* Mo tap tin KYTU.TXT */
		while ((c=getchar()) !=EOF)
			{
				putc(c,f); /* Ghi ky tu vao tap tin */
			}
		close(f); /* Dong tap tin KYTU.TXT */
		printf("\n\tDa ghi du lieu vao tap tin KYTU.TXT");
		printf("\n\t    Bam phim bat ky de ket thuc");
		getch();
	}