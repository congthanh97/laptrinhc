#include"stdio.h"
main()
	{
		FILE *f;
		char tap_tin[79];
		char ch;
		clrscr();
		printf("\nDOC CHAM NOI DUNG TEN TAP TIN VAN BAN");
		printf("\n-Cho biet ten tap tin can doc: ");
		gets(tap_tin);
		f=fopen(tap_tin,"rt");
		if (f==NULL)
			perror("Khong doc duoc, vi: ");
		else
			while ((ch=getc(f)) !=EOF)
				{
					putchar(ch);
					delay(2000);
				}
		fclose(f);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}