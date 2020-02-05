#include"stdio.h"
#include"stdlib.h"
#define TRUE 1

struct nhansu
	{
		char ten[24];
		int maso;
		double cao;
	};
struct nhansu nhanvien[50]; /* mang co 50 phan tu */
int n=0;

main()
	{
		char ch;
		while (TRUE)
			{
				printf("\n Go 'n' de nhap nhan vien moi: ");
				printf("\n Go 'x' de xem danh sach nhan vien :");
				ch=getche();
				switch(ch)
					{
						case 'n'	: nhanvienmoi();
									  break;
						case 'x' : lietke();
									  break;
						default  : puts("\n Chi duoc go 'n' hoac 'x'");
									  break;
					}
			}
	}

nhanvienmoi()
	{
		char ma[81];
		printf("\n- So thu tu : %2d. \n Ten :",n+1);
		gets(nhanvien[n].ten);
		printf("\n- Ma nhan vien (3 ky so) : ");
		gets(ma);
		nhanvien[n].maso=atof(ma); /* doi chuoi ra so cham dong */
		printf("\n- Chieu cao ( Cm ) : ");
		gets(ma);
		nhanvien[n++].cao=atof(ma);
	}
lietke()
	{
		int j;
		if (n < 1 )
			printf("\n Khong co nguoi nao \n");
		for (j=0; j <n; j++)
			{
				printf("\n+ So thu tu : %02d\n",j+1);
				printf(" Ten : %s\n",nhanvien[j].ten);
				printf(" Ma nhan vien : %03d\n",nhanvien[j].maso);
				printf(" Chieu cao : %3.2f Cm \n",nhanvien[j].cao);
			}

	}




