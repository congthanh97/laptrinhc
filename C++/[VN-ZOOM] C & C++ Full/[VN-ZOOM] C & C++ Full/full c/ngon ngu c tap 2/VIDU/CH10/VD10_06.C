#include"stdio.h"
struct nam
	{
		int so;
		char *ten_thang;
	}thang[12]={ {1,"Gieng"},{2,"Hai"},{3,"Ba"},
							{4,"Tu"},{5,"Nam"},{6,"Sau"},
							{7,"Bay"},{8,"Tam"},{9,"Chin"},
							{10,"Muoi"},{11,"Mot"},{12,"Chap"}};
main()
	{
		int i;
		clrscr();
		printf("\n      TRUY XUAT VA GAN TRI KHOI DAU");
		printf("\n   CHO CAC THANH PHAN CUA MANG CAU TRUC");
		printf("\n - Muon truy xuat phan tu nao trong 12 phan tu : ");
		scanf("%d",&i);
		printf("\n + Do la thang : %d (%s)",thang[i-1].so,thang[i-1].ten_thang);
		getch();
	}