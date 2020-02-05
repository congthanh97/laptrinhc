#include"stdio.h"
#include"alloc.h"
FILE *f;
char chuoi[10];
main()
	{
		char ten_tap_tin[11];
		fpos_t *vt;
		vt=(fpos_t *)malloc(sizeof(fpos_t));
		printf("\nGo vao mot ten tap tin tren dia: ");
		scanf("%s",ten_tap_tin);
		f=fopen(ten_tap_tin,"r");
		fread(chuoi,sizeof(char),10,f);
		printf("\n-Doc 10 chu dau tien : %s",chuoi);
		fgetpos(f,vt);
		fread(chuoi,sizeof(char),10,f);
		printf("\n-Doc 10 chu tiep theo: %s",chuoi);
		fgetpos(f,vt);
		fread(chuoi,sizeof(char),10,f);
		printf("\n-Doc 10 chu tiep theo: %s",chuoi);
		fgetpos(f,vt);
		fread(chuoi,sizeof(char),10,f);
		printf("\n-Doc 10 chu tiep theo: %s",chuoi);
		fgetpos(f,vt);
		fread(chuoi,sizeof(char),10,f);
		printf("\n-Doc 10 chu tiep theo: %s",chuoi);
		fgetpos(f,vt);
		fread(chuoi,sizeof(char),10,f);
		printf("\n-Doc 10 chu tiep theo: %s",chuoi);
		fsetpos(f,vt);
		fread(chuoi,sizeof(char),10,f);
		printf("\nDa danh dau den vi tri cuoi tap tin");
		printf("\nBam phim bat ky de doc lai 10 chu cuoi cung");
		getch();
		printf("\n");
		printf("\n10 chu cuoi cung cua tap tin: %s",chuoi);
		fclose(f);
		printf("\nBam phim bat ky de ket thuc");
		getch();
	}