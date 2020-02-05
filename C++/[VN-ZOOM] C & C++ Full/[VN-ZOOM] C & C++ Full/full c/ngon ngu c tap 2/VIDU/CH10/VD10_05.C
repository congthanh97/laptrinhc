#include"stdio.h"
struct ten_tuoi
	{
		char hoten[24];
		char tuoi;
	};
struct gia_canh
	{
		char vo_chong[20];
		char tuoi;
		char con;
	};
struct nghe_nghiep
	{
		char trinh_do[20];
		int nam_tot_nghiep;
	};
struct hoso            /* cau truc long nhau */
	{
		struct ten_tuoi hs1;
		struct gia_canh hs2;
		struct nghe_nghiep hs3;
	}nguoi;
	struct hoso nguoi={"Nguyen Van Xuan",30,"Bui Thi Thu",24,1,
							"Ky su may tinh", 1990};
main()
	{
		clrscr();
		printf("\n       LY LICH TRICH NGANG");
		printf("\n - Ho va ten    : %s",nguoi.hs1.hoten);
		printf("\n - Tuoi         : %d",nguoi.hs1.tuoi);
		printf("\n - Ho va ten vo : %s",nguoi.hs2.vo_chong);
		printf("\n - Tuoi         : %d",nguoi.hs2.tuoi);
		printf("\n - Co           : %d con",nguoi.hs2.con);
		printf("\n - Trinh do chuyen mon : %s",nguoi.hs3.trinh_do);
		printf("\n - Nam tot nghiep      : %d",nguoi.hs3.nam_tot_nghiep);
		getch();
	}