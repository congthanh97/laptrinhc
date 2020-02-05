#include"stdio.h"
#include"string.h"
typedef struct  /* Dinh nghia kieu du lieu tu tao */
	{
		char Ho[17];
		char Ten[7];
		int Bacluong;
	}nhanvien;
So_sanh(nhanvien *p,nhanvien *q)
	{
		int k;
		k=strcmp(p->Ten,q->Ten); /* Sap xep theo Ten */
		if (k==0)
			k=strcmp(p->Ho,q->Ho); /* Sap xep theo Ho */
		return(k);
	}
main()
	{
		int k;
		nhanvien M[8]={"Nguyen Van","Nam",300,"Bui Van","Bac",250,
						 "Pham Thi","Dong",320,"Chu Van","Tay",310,
						 "Tran Van","Son",290,"Tran Thi","Ha",350,
						 "Le Van","Xa",200,"Dang Van","Tac",300};
		clrscr();
		printf("\n  	SAP XEP DANH SACH THEO THU TU TU DIEN A->Z");
		printf("\n  		Khoa thu nhat theo Ten");
		printf("\n  		Khoa thu hai theo Ho");
		printf("\n  ------------------------------------------------");
		qsort(M,8,sizeof(nhanvien),So_sanh);
		for (k=0;k<8;k++)
			printf("\n- Ho va ten: %17s %7s  - Bac luong: %d $",M[k].Ho,
									M[k].Ten,M[k].Bacluong);
		getch();
	}
