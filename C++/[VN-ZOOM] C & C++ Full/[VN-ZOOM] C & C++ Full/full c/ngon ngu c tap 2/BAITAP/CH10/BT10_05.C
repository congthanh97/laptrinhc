
#include"alloc.h"
#include"stdio.h"
typedef struct
	{
		char *ten;
		char *diachi;
		long luong;
	}nhanvien, *pt;
void hien_thi(nhanvien ct)
	{
		printf("\n\t--------------------------------------");
		printf("\n\t Ong (Ba): %s",ct.ten);
		printf("\n\t Dia chi: %s",ct.diachi);
		printf("\n\t Luong: %ld",ct.luong);
	}
void nhap(nhanvien *ct)
	{
		ct->ten=malloc(24);
		ct->diachi=malloc(40);
		printf("\n- Ten nhan vien : ");
		gets(ct->ten);
		printf("\n- Dia chi : ");
		gets(ct->diachi);
		printf("\n- Muc luong : ");
		scanf("%ld",&(ct->luong));
		getchar();
	}
main()
	{
		nhanvien M[4];
		char k;
		clrscr();
		for (k=0; k<4; k++)
			nhap(&M[k]);
      for (k=0; k<4; k++)
			hien_thi(M[k]);
      printf("\n\t--------------------------------------");
		getch();
	}