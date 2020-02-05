#include"stdio.h"
main()
	{
		FILE *f;
		char duong_dan[79];
		printf("\n TIM TAP TIN TRONG THU MUC CHI DINH");
		printf("\nGo ten tap tin hoac ten duong dan");
		printf("\nCho biet ten tap tin can tim: ");
		gets(duong_dan);
		f=fopen(duong_dan,"r");
		if (f==NULL)
			puts("\nKhong co tap tin nay tren dia");
		else
		puts("\tCo tap tin nay tren dia");
		fclose(f);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}