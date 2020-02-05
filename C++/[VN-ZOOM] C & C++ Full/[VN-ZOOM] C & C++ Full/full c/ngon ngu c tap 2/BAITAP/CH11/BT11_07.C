#include"stdio.h"
main()
	{
		FILE *f;
		char tap_tin[79];
		int ch,string[81];
		int trong=0;
		int dem=0;
		clrscr();
		printf("\nDEM CAC TU CUA TAP TIN VAN BAN");
		printf("\n-Cho biet ten tap tin can dem: ");
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
			while ((ch=getc(f)) != EOF)
				switch(ch)
					{
						case ' ':
						case '\t':
						case '\n':trong++;
									 break;
						default: if (trong)
							{
								trong=0;
								dem++;
							}
					}
		fclose(f);
		printf("\n-Tap tin: %s gom co:%d tu",tap_tin,dem);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}