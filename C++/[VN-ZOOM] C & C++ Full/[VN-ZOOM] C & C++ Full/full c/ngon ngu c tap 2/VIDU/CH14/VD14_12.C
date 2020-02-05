#include"stdio.h"
main()
	{
		char so[80];
		clrscr();
		printf("\n\t-MINH HOA HAM ABS()");
		printf("\n-Nhap vao mot so nguyen bat ky: ");
		gets(so);
		printf("\n\t+Tri tuyet doi cua: %s la= %d",so,abs(atoi(so)));
		printf("\n\n-Bam phim bat ky de ket thuc");
		getch();
	}
