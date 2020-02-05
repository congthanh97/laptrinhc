#include"stdio.h"
#include"alloc.h"
main()
	{
		char *chuoi;
		clrscr();
		chuoi=malloc(sizeof(char));
		printf("\n- Nhap vao 1 chuoi: ");
		gets(chuoi);
		printf("\n\n   + Chuoi vua nhap la : ");
		printf("\n%s",chuoi);
		printf("\n\n Bam phim bat ky de ket thuc");
		getch();
	}
