#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#define ESC 27
typedef struct cautruc *contro;
typedef struct cautruc
	{
		char ten[8];
		int tuoi;
		contro tiep;
	};
contro dau,cuoi,moi;
main()
	{
		FILE *f;
		char c;
		dau=NULL;
		clrscr();
      printf("\nSU DUNG CON TRO DE NHAP DU LIEU VAO TAP TIN");
		printf("\n===========================================");
		do
			{
				moi=(struct cautruc *) malloc(sizeof(struct cautruc));
				printf("\n-Cho biet ten: ");
				gets(moi->ten);
				printf("\-Cho biet tuoi: ");
				scanf("%d",&(moi->tuoi));
				if (dau==NULL)
					dau=moi;
				else
					cuoi->tiep=moi;
				cuoi=moi;
				cuoi->tiep=NULL;
				printf("\n+Bam phim <Enter> de nhap tiep");
				printf("\n+Bam phim <ESC> de ket thuc nhap");
				c=getchar();
				c=getch();

			}
		while (c!=ESC); /*Bam ESC de cham dut nhap*/
		printf("\n-------------------------------------");
		printf("\n\tBam phim bat ky de ghi vao tap tin");
		getch();
		clrscr();
		printf("\n\t* Du lieu vua nhap");
		f=fopen("TEN_TUOI.DAT","wb");
		while (dau !=NULL)
			{
				fwrite(dau,10,1,f);
				printf("\n:Ten :%-8s  :Tuoi :%3d",dau->ten,dau->tuoi);
				free(dau);
				dau=dau->tiep;
			}
		fclose(f);
		printf("\n\t+Da ghi vao tap tin TEN_TUOI.DAT");
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}