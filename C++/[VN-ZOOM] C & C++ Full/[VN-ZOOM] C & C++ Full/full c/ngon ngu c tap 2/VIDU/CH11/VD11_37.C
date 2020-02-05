#include"stdio.h"
main()
	{
		FILE *f;
		char dong[80];
		char ten_tap_tin[11];
		clrscr();
		printf("\n      MINH HOA HAM Rewind();");
		printf("\n-Go vao mot ten tap tin tren dia: ");
		scanf("%s",ten_tap_tin);
		clrscr();
		f=fopen(ten_tap_tin,"r");
		while (!feof(f))
			{
				fgets(dong,80,f);
				puts(dong);
			}
		rewind(f);
		printf("\n-----------------------------------");
		printf("\nBam phim bat ky de quay lai dong dau");
		getch();
		printf("\n");
		printf("\n     Noi dung dong dau la\n\n");
		fgets(dong,80,f);
		puts(dong);
		fclose(f);
		printf("\nBam phim bat ky de ket thuc");
		getch();
	}