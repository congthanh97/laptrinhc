#include"stdio.h"
typedef struct
	{
		char ten[8];
		int tuoi;
	}cautruc;
	cautruc A[6],ct;
	FILE *f;
	int k;
	main()
		{
			f=fopen("dulieu.dbf","r+b");/*Mo tap tin nhi phan de doc*/
			fread(A,sizeof(cautruc),6,f); /* Doc noi dung tap tin */
			fread(&ct,sizeof(cautruc),1,f);
			printf("\n  | %4s  | %4d |",ct.ten,ct.tuoi);
			clrscr();
			printf("\n     DANH SACH");
			printf("\n  ++++++++++++++++");
			printf("\n  | Ten   |  Tuoi|");
			printf("\n  ------- | ------");
			for (k=0; k<6; k++)
					printf("\n  | %4s  | %4d |",A[k].ten,A[k].tuoi);
			printf("\n  ================");
			printf("\nBam phim bat ky de ket thuc");
			getch();
		}