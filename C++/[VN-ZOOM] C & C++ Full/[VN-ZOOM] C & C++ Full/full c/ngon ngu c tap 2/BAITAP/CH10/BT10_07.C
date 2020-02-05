#include"stdio.h"
#include"alloc.h"
typedef struct cautruc *contro;
typedef struct cautruc
	{
		char *ten;
		char diachi[30];
		long luong;
		contro tiep;
	};
contro dau,cuoi,moi;
void nhap()   /* Nhap du lieu vao tu ban phim */
	{
		cuoi=(struct cautruc *) malloc(sizeof(struct cautruc));
		cuoi->ten=malloc(24);
		printf("\n\t(Ket thuc nhap, bam phim <Enter>");
		printf("\n\t- Cho biet ten : ");
		gets(cuoi->ten);
		if (!strlen(cuoi->ten))
			return;
		printf("\t- Dia chi : ");
		gets(cuoi->diachi);
		printf("\t- Bac luong :");
		scanf("%ld",&(cuoi->luong));
		getchar();
		puts("\n\t==============================================");
		if (dau==NULL)
			dau=cuoi;
		else
			moi->tiep=cuoi;
		moi=cuoi;
		moi->tiep = NULL;
	}
void hien_thi()
	{
		cuoi=dau;
		while (cuoi)
			{
				puts("\n\t==============================================");
				printf("\t+ Ten : %s\n",cuoi->ten);
				printf("\t+ Dia chi : %s\n",cuoi->diachi);
				printf("\t+ Luong : %ld\n ",cuoi->luong);
				cuoi=cuoi->tiep;
			}
	}
void di_chuyen(n)
	{
		cuoi=dau;
		while (--n)
			cuoi=cuoi->tiep;
	}
void chen()
	{
		contro them;
		int n;
		them=(struct cautruc *) malloc(sizeof(struct cautruc));
		them->ten=malloc(24);
		puts("\n\t==============================================");
		printf("\n\t(Khong nhap them,bam phim <Enter>");
		printf("\n\t- Nhap them ten : ");
		gets(them->ten);
		if (!strlen(them->ten))
			return;
		printf("\t- Dia chi : ");
		gets(them->diachi);
		printf("\t- Bac luong : ");
		scanf("%ld",&(them->luong));
		getchar();
		puts("\n\t==============================================");
		printf("\n\t* Cho biet vi tri can chen : ");
		scanf("%d",&n);
		di_chuyen(n-1);
		them->tiep=cuoi->tiep;
		cuoi->tiep=them;
	}
void xoa_ten()
	{
		contro xoa;
		int n;
		printf("\n\t* Cho biet vi tri muon xoa : ");
		scanf("%d",&n);
		di_chuyen(n-1);
		if (cuoi->tiep)
			{
				xoa=cuoi->tiep;
				cuoi->tiep=(cuoi->tiep)->tiep;
				free(xoa->ten);
				free(xoa);
			}
		else
			moi=cuoi;
	}
void giai_toa() /* Xoa bot de thu hoi bo nho */
	{
		puts("\n\t**********************************************");
		printf("\n\t+ Bo nho truoc khi xoa la: %u\n",coreleft());
		do
			{
				cuoi=dau;
				dau=cuoi->tiep;
				free(cuoi->ten);
				free(cuoi);
			}
		while (dau);
		printf("\n\t- Bo nho sau khi xoa bot la: %u\n",coreleft());
		puts("\n\t**********************************************");
		printf("\n\t      Bam phim bat ky de ket thuc");
		getch();
	}
main()
	{
		dau=NULL;
      clrscr();
		puts("\n\t=********************************************=");
		do

			nhap();
			while (strlen(cuoi->ten));
				hien_thi();
				printf("\n\tBam phim bat ky de chen them du lieu");
				getch();
				chen();
				hien_thi();
            printf("\n\tBam phim bat ky de xoa du lieu");
				getch();
				xoa_ten();
				hien_thi();
				printf("\n\tBam phim bat ky de xem bo nho");
				getch();
				giai_toa();
	}