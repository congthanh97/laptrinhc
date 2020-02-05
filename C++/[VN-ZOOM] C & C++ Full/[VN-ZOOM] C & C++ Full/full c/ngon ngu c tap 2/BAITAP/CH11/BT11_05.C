#include"stdio.h"
int a[254];
main()
	{
		FILE *f;
		unsigned char c;
		char tap_tin[79];
		int k;
		long kich_thuoc;
		int dong=1;
		for (k=0; k<254; k++)
			a[k]=0;
		clrscr();
		printf("\nDOC TAP TIN VA THONG KE CHU");
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
			while (!feof(f))
				{
					c=fgetc(f);
					putchar(c);
					a[c]++;
					delay(500);
					putchar(7);
				}
		kich_thuoc=ftell(f);
		printf("\n-Kich thuoc tap tin: %ld bytes",kich_thuoc+1);
		printf("\n\tBam phim bat ky de thong ke chu");
		getch();
		fclose(f);
		printf("\nThong ke cac chu trong tap tin\n");
		for (c='A'; c<='z'; c++)
			{
				printf("-Chu: %c   -Tan so: %3d\n",c,a[c]);
				dong+=1;
				if (dong==24)
					{
						printf("\nBam phim bat ky de xem tiep\n");
						getch();
						dong=1;
					}
			}
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}