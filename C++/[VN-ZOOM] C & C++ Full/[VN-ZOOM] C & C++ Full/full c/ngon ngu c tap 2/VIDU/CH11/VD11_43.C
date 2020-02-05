#include"stdio.h"
#include"dir.h"
main()
	{
		char duong_dan[20];
		clrscr();
		printf("\nTIM DUONG DAN CUA TAP TIN");
		printf("\n-Cho ten tap tin can tim duong dan: ");
		scanf("%s",duong_dan);
		printf("\Duong dan cua tap tin nay la: %s",searchpath(duong_dan));
		printf("\n   Bam phim bat ky de ket thuc");
		getch();
	}