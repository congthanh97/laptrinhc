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
	struct x *y;
	char k;

void hien_thi(struct x *y) /* Truy xuat bang con tro */
	{
		printf("\n\t-----------------------------------------------");
		printf("\n\t Ong:  %s ",y->ten);
		printf("\n\t Dia chi: %s",y->diachi);
		printf("\n\t Dien thoai: %s",y->dienthoai);
	}

main()
	{
		clrscr();
      printf("\n\t Truy xuat bang toan tu mui ten (->)");
		for (k=0;k<4; k++)
			hien_thi(&M[k]);
		printf("\n\t-----------------------------------------------");
		printf("\n\t Bam phim bat ky de ket thuc");
		getch();
	}
