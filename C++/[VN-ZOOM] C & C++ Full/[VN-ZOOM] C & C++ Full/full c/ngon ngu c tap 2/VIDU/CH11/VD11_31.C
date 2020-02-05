#include"stdio.h"
typedef struct
	{
		char ten[8];
		int tuoi;
	}cautruc;
	const cautruc A[5]={"Mai",23,"Dao",21,"Lan",18,
										"Hue",20,"Cuc",19};
	FILE *f;
	int k;
	main()
		{
			cautruc ct={"Hong",22};   /* Bo sung vao mang A[] */
			f=fopen("dulieu.dbf","w+b");  /*Mo tap tin, ghi nhi phan*/
			fwrite(A,sizeof(cautruc),5,f);
			fwrite(&ct,sizeof(cautruc),1,f);
			fseek(f,0,SEEK_SET); /*Di chuyen con tro ve dau tap tin */
			clrscr();
			printf("\n     DANH SACH");
			printf("\n  ++++++++++++++++");
			printf("\n  | Ten   |  Tuoi|");
			printf("\n  ------- | ------");
			while (!feof(f))
				{
					fread(&ct,sizeof(cautruc),1,f);
					printf("\n  | %4s  | %4d |",ct.ten,ct.tuoi);
				}
			delline(); /*Xoa dong cuoi cung */
			printf("\n  ================");
			printf("\nBam phim bat ky de ket thuc");
			getch();
		}