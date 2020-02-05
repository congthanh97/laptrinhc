#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#define ESC 27
typedef struct cautruc *contro;
/*Dung kieu ban ghi truoc khi dinh nghiq */
typedef struct cautruc
	{
		char ten[8];
		int luong;
		contro tiep;
	};
contro dau, cuoi,moi;
main()
	{
		char c;
		dau=NULL;
		do
			{
				moi=(struct cautruc *) malloc(sizeof(struct cautruc));
				clrscr();
				printf("\n NHAP TEN VA TIEN LUONG TRONG TUAN");
				printf("\n----------------------------------");
				printf("\n- Cho biet ten: ");
				gets(moi->ten);
				printf("- Cho biet tien luong trong tuan : ");
				scanf("%d",&(moi->luong));
				printf("\nBam <Enter> de tiep, bam <Esc> de ngung");
				if (dau==NULL)
					dau=moi;
				else
					cuoi->tiep=moi;
					cuoi=moi;
				cuoi->tiep=NULL;
				c=getchar();
				c=getch();
			}
		while (c!=ESC); /* Bam phim <Esc> de ngung */
		clrscr();
		printf("\n\t DANH SACH TEN VA TIEN LUONG TRONG TUAN");
		printf("\n\t **************************************");
			while (dau !=NULL)
				{
					printf("\n\t Ten : %8s | Tien luong :  %6d ",dau->ten,dau->luong);
					free(dau);
					dau=dau->tiep;
				}
		printf("\n\n\tBam phim <Esc> de ket thuc chuong trinh");
		getch();
	}