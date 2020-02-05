#include"stdio.h"
#include"alloc.h"
struct dinh
	{
		int n;
		int tanso;
		struct dinh *trai;
		struct dinh *phai;
	};
typedef struct dinh dinh_t; /*Kieu du lieu tu tao */
main()
	{
		dinh_t *goc,*taocay();
		int c,s,k;
		goc=NULL;
		clrscr();
		printf("\n CAU TRUC TU CHI - CAY NHI PHAN");
		tt:printf("\nNhap so lieu: ");
		scanf("%d",&s);
		goc=taocay(goc,s);
		printf("\n Nhap them so lieu bam so (1) ");
		printf("\n Bam so bat ky de ngung nhap : ");
		scanf("%d",&k);
		if (k==1) goto tt;
      printf("\n TAN SO CUA CAC SO NGUYEN VUA NHAP");
		incay(goc);
		printf("\n Bam phim bat ky de ket thuc");
		getch();
	}
dinh_t *taocay(p,s)
dinh_t *p;
int s;
	{
		if (p==NULL)
			{
				/* Tao dinh moi cho cay */
				p=malloc(sizeof(dinh_t));/*Cap bo nho cho dinh moi */
				p->n=s;
				p->tanso=1;
				p->trai=p->phai=NULL;
			}
		else
			if (p->n ==s)
				p->tanso++; /*Gap dinh cu */
			else
				if (p->n==s)
					p->trai=taocay(p->trai,s);
				else
					p->phai=taocay(p->phai,s);
		return(p);
	}
	/* In du lieu ra man hinh */
incay(p)
dinh_t *p;
	{
		if (p!=NULL)
			{
				incay(p->trai);
				printf("\nSo =%3d co tan so xuat hien: %2d lan",p->n,p->tanso);
				incay(p->phai);
			}
	}
