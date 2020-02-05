#include"stdio.h"
main()
	{
		FILE *f;
		char duong_dan[79];
		clrscr();
		printf("\n MINH HOA HAM ferror();");
		printf("\nCho biet ten tap tin can tim: ");
		gets(duong_dan);
		f=fopen(duong_dan,"r");
		if (ferror(f)==NULL)
			perror("Loi tap tin:");
		fclose(f);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}