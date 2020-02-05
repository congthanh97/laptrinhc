struct x
	{
		char *ten;
		char diachi[40];
		char dienthoai[10];
	};
	struct x M[]={"Nguyen Dinh Te","35/6 Bui Vien, Quan 1","8-360.124",
					"Hoang Duc Hai","231 Nguyen Van Cu, Quan 5","8-350.656",
					"Pham Hoang Dung","352/8 Nguyen Dinh Chieu, Quan 3","8-326.667",
					"Truong Thi Thanh Mai","70 Ham Nghi, Quan 1","8-214.545"};
	char k;
void hien_thi(struct x ct) /* Truy xuat bang toan tu dau cham (.) */
	{
		printf("\n\t-----------------------------------------------");
		printf("\n\t Ong:  %s ",ct.ten);
		printf("\n\t Dia chi: %s",ct.diachi);
		printf("\n\t Dien thoai: %s",ct.dienthoai);
	}

main()
	{
		clrscr();
		printf("\n\t Truy xuat bang toan tu dau cham (.)");
		for (k=0; k<4; k++)
			hien_thi(M[k]);
		printf("\n\t-----------------------------------------------");
		printf("\n\t Bam phim bat ky de ket thuc");
		getch();
	}
