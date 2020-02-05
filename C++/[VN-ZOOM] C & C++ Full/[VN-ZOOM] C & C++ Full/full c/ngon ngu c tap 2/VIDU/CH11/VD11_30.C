#include"stdio.h"
main()
	{
		FILE *f, *g; /* Khai bao bien tap tin nguon (f),dich (g) */
		char nguon[12],dich[12];
		char c;
		char k_thuoc[1024];
		long so_byte=0;
		clrscr();
		printf("\nCho biet ten tap tin nguon : ");
		scanf("%s",nguon);
		printf("\nKet qua ghi vao tap tin : ");
		scanf("%s",dich);
		f=fopen(nguon,"rt");/* Mo tap tin nguon la chu HOA */
		g=fopen(dich,"wt"); /* Mo tap tin dich de ghi vao chu thuong */
		setbuf(f,k_thuoc); /* Dat vung dem cho tap tin nguon */
		setbuf(g,NULL); /* Dat vung dem cho tap tin dich */
		while (!feof(f))
			{
				c=fgetc(f);
				if (c >='A' && c <= 'Z')
					c=c+'a'-'A';   /* Doi chu HOA ra chu thuong */
				putchar(c); /* Xuat chu thuong ra man hinh */
				fputc(c,g); /* Ghi chu thuong vao tap tin dich */
				so_byte ++;
			}
		fclose(f); /* Dong tap tin nguon */
		fclose(g); /* Dong tap tin dich */
		printf("\n\tChuong trinh dung %d bytes bo dem ",so_byte);
		printf("\n\t de chuyen doi tu chu HOA ra chu thuong");
		printf("\n\t   Bam phim bat ky de ket thuc");
		getch();
	}

