#include"stdio.h"
main()
	{
		FILE *f;
		char tap_tin[79];
		int dem=0;
		clrscr();
		printf("\nDEM KY TU CUA TAP TIN VAN BAN");
		printf("\n-Cho biet ten tap tin can doc: ");
		gets(tap_tin);
		f=fopen(tap_tin,"rt");
		if (f==NULL)
			{
				perror("\nKhong doc duoc, vi: ");
				printf("\nBam phim bat ky de ket thuc");
				getch();
				exit(1);
			}
		else
			while (getc(f) != EOF)
				dem++;
		fclose(f);
		printf("\n-Tap tin: %s gom co:%d ky tu",tap_tin,dem);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}