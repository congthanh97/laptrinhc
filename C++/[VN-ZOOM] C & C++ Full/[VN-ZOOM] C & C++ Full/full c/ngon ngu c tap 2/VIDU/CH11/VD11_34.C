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
			cautruc *ct[6];
			f=fopen("dulieu.dbf","r+b");  /*Mo tap tin, doc nhi phan*/
			for (k=0; k<6; k++)
				{
					ct[k]=(cautruc *) malloc(sizeof(cautruc));
					fread(ct[k], sizeof(cautruc),1,f);
				}
			fclose(f);
			clrscr();
			printf("\nDUNG BIEN CON TRO DE QUAN LY CAU TRUC");
			do
				{
					printf("\nBam so 0 hoac lon hon 6 de ket thuc");
					printf("\nMuon di chuyen toi nguoi thu may ?: ");
					scanf("%d",&k);
					printf("\n  Ten  : %s    Tuoi : %d  ",
								ct[k-1]->ten,ct[k-1]->tuoi);
					printf("\n----------------------------------");
				}
			while (k>0 && k<6);
			printf("\nBam phim bat ky de ket thuc");
			getch();
		}