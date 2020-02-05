#include"stdio.h"
typedef struct
	{
		char ten[8];
		int tuoi;
	}nguoi;
	nguoi a;
main()
	{
		FILE *f;
		clrscr();
		printf("\nDOC DU LIEU TU TAP TIN TEN_TUOI.DTA");
		printf("\n===================================");
		f=fopen("TEN_TUOI.DAT","rb");
		while (!feof(f))
			{
				fread(&a,10,1,f);
				printf("\n:Ten :%-8s  :Tuoi :%3d",a.ten,a.tuoi);
			}
		fclose(f);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}