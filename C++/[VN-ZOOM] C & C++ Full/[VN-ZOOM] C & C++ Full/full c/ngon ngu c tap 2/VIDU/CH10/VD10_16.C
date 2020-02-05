#include"stdio.h"
#include"stdlib.h"
#define TRUE 1
#define ESC 27

struct nhansu
	{
		char ten[24];
		int maso;
		double cao;
		struct nhansu *pt_tiep; /* chi den cau truc ke tiep */
	};
/* Khai bao 3 bien con tro: dau, cuoi, moi */
struct nhansu *pt_dau,*pt_cuoi,*pt_moi;

main()

	{
		char ch;
		pt_dau=(struct nhansu *) NULL ; /* chua nhap du lieu */
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

		/* Them nhan vien moi vao co so du lieu */
nhanvienmoi()
	{
		char ma[81];
		/* Cap phat bo nho cho bien con tro moi */
		pt_moi=(struct nhansu *) malloc(sizeof(struct nhansu));
		if (pt_dau==(struct nhansu *) NULL)
			pt_dau=pt_cuoi=pt_moi; /* luu dia chi */
		else
			{
				pt_cuoi=pt_dau; /* di den cuoi danh sach */
				while (pt_cuoi->pt_tiep !=(struct nhansu *) NULL)
					pt_cuoi=pt_cuoi->pt_tiep;
					pt_cuoi->pt_tiep=pt_moi;
					pt_cuoi=pt_moi;
			}
		printf("\n- Cho biet ten :");
		gets(pt_cuoi->ten);
		printf("\n- Cho biet ma so nhan vien : ");
		gets(ma);
		pt_cuoi->maso=atoi(ma); /* doi chuoi ra so cham dong */
		printf("\n- Cho biet chieu cao ( Cm ) : ");
		gets(ma);
		pt_cuoi->cao=atof(ma);
		pt_cuoi->pt_tiep=(struct nhansu *) NULL;
	}
/* Xem danh sach nhan vien */
lietke()
	{
		if (pt_dau==(struct nhansu *) NULL) /* Danh sach rong */
			{
				printf("\n Khong co nguoi nao \n");
				return;
			}
		pt_cuoi=pt_dau;
		do
			{
				printf(" Ten : %s\n",pt_cuoi->ten);
				printf(" Ma nhan vien : %03d\n",pt_cuoi->maso);
				printf(" Chieu cao : %3.2f Cm \n",pt_cuoi->cao);
				pt_cuoi=pt_cuoi->pt_tiep;
			}
		while (pt_cuoi !=(struct nhansu *)NULL);

	}




