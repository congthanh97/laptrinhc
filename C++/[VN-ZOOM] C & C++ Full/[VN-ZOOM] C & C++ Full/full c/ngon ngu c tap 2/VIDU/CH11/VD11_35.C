#include"stdio.h"
typedef struct
	{
		char ten[8];
		int tuoi;
	}cautruc;
	FILE *f;
	main()
		{
			cautruc ct;
			long vt;
			f=fopen("dulieu.dbf","r+b");  /*Mo tap tin, doc nhi phan*/
			clrscr();
			printf("\nMINH HOA HAM FTELL()");
			printf("\nTung vi tri con tro den dau tap tin");
			while (!feof(f))
				{
					vt=ftell(f);
					fread(&ct,sizeof(cautruc), 1, f);
					printf("\n  Ten  : %-8s    Tuoi : %2d  Vi tri  %d bytes",
									ct.ten,ct.tuoi,vt);
				}
			delline();
			fclose(f);
			printf("\nBam phim bat ky de ket thuc");
			getch();
		}