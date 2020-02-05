typedef struct
	{
		char *ten;
		char diachi[40];
		char dienthoai[10];
	}x, *y; /* Khai bao 2 kieu du lieu: dau cham, mui ten */
	x M[]={"Nguyen Dinh Te","35/6 Bui Vien, Quan 1","8-360.124",
					"Hoang Duc Hai","231 Nguyen Van Cu, Quan 5","8-350.656",
					"Pham Hoang Dung","352/8 Nguyen Dinh Chieu, Quan 3","8-326.667",
					"Truong Thi Thanh Mai","70 Ham Nghi, Quan 1","8-214.545"};
	char k;
void hien_thi1(x ct) /* Truy xuat bang toan tu dau cham (.) */
	{
		printf("\n\t-----------------------------------------------");
		printf("\n\t Ong:  %s ",ct.ten);
		printf("\n\t Dia chi: %s",ct.diachi);
		printf("\n\t Dien thoai: %s",ct.dienthoai);
	}
void hien_thi2(y ct) /* Truy xuat bang toan tu mui ten (->) */
	{
		printf("\n\t-----------------------------------------------");
		printf("\n\t Ong:  %s ",ct->ten);
		printf("\n\t Dia chi: %s",ct->diachi);
		printf("\n\t Dien thoai: %s",ct->dienthoai);
	}

main()
	{
		clrscr();
		printf("\n\t Truy xuat bang toan tu dau cham (.)");
		for (k=0; k<4; k++)
			hien_thi1(M[k]);
		printf("\n\t-----------------------------------------------");
		printf("\n\t  Bam phim bat ky de truy xuat bang toan tu mui ten (->)");
		getch();
		for (k=0;k<4; k++)
			hien_thi2(&M[k]);
		printf("\n\t-----------------------------------------------");
		printf("\n\t Bam phim bat ky de ket thuc");
		getch();
	}
