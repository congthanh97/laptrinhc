#include"stdio.h"
#include"alloc.h"
typedef struct
	{
		char ten[8];
		int tuoi;
	}cautruc;
	FILE *f;
	int k;
	main()
		{
			cautruc *buffer;
			char ten_tap_tin[11];
			clrscr();
			printf("\n HAM rewind();VOI TAP TIN CAU TRUC");
			printf("\n-Go ten tap tin cau truc: ");
			scanf("%s",ten_tap_tin);
			buffer=(cautruc *)malloc(sizeof(cautruc));
			f=fopen(ten_tap_tin,"r+b");  /*Mo tap tin, doc nhi phan*/
			while (!feof(f))
				{
					fread(buffer, sizeof(cautruc),1,f);
					printf("\n  Ten  : %-8s    Tuoi : %2d  ",
										buffer->ten,buffer->tuoi);
				}
			delline();
			rewind(f);
			printf("\n--------------------------------------");
			printf("\nBam phim bat ky de quay lai dau tap tin");
			getch();
			printf("\n");
			fread(buffer,sizeof(cautruc),1,f);
			printf("\n  Ten  : %-8s    Tuoi : %2d  ",
										buffer->ten,buffer->tuoi);
			free(buffer);
			fclose(f);
         printf("\n--------------------------------------");
			printf("\nBam phim bat ky de ket thuc");
			getch();
		}