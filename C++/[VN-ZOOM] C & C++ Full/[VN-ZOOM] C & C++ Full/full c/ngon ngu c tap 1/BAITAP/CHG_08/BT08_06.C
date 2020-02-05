#include<stdio.h>
#define n 10 /*So chuyen di trong mot ngay khong qua 10 */
#define l 20 /* So lai xe khong qua 20 */
int k[n]; /* Km */
float t[n]; /* tan */
int *pk[l]; /* Mang con tro pk */
float *pt[l]; /* Mang con tro pt */
char *thongbao="\nKhong co lai xe thu %d ";

nhap(m) /* So lai xe la m */
int m;
	{
		int i,*pkk;
		float *ptt;
		pkk=pk[0]=k;
		ptt=pt[0]=t;
		for (i=1;i<=m;++i)
			{
				printf("*So lieu cua lai xe %d\n",i);
				doc :printf("+Bao nhieu cay so (Bam so 0 de dung) =");
				scanf("%d",pkk);
				printf("+Bao nhieu tan (Bam so 0 de dung)= ");
				scanf("%f",ptt);
				if (*pkk !=0)
					{
						ptt++;
						pkk++;
						goto doc;
					}
				pk[i]=pkk;
				pt[i]=ptt;
			}
	}
xuat(m,i)
int m; /* So lai xe thuc te la m */
int i; /*Can in so lieu cua nguoi thu i i(-[l,n] */
	{
		int *pkk;
		float *ptt;
		if (i<1 || i>m)
			{
				printf(thongbao,i);
				return(0);
			}
		pkk=pk[i-1];
		ptt=pt[i-1];
		printf("\n\n%4c So lieu cua lai xe %d\n",'',i);
		while (pkk < pk[i])
		printf("\n%4d Km %8.2f Tan ",*pkk++,*ptt++);
	}
float klvc(m,i)
int m; /* So lai xe la m */
int i; /* Tinh khoi luong van chuyen cua la xe i,i(-[1,m]) */
	{
		int *pkk;
		float *ptt,s=0;
		if (i<1 || i>m)
			{
				printf(thongbao,i);
				return(0);
			}
		pkk=pk[i-1];
		ptt=pt[i-1];
		while (pkk < pk[i])
			s+= (*pkk++)*(*ptt++);
		return(s);
	}
main()
	{
		int m,i;
		clrscr();
		printf("\n%10cNHAP SO LIEU VAN CHUYEN",'');
		printf("\nCo bao nhieu lai xe = ");
		scanf("%d",&m);
		nhap(m);
		/* In so lieu cua toan bo don vi */
		clrscr();
		printf("\n%10cBAO CAO TONG HOP",'');
		for (i=1;i<=m;++i)
			{
				xuat(m,i);
				printf("\nKhoi luong van chuyen = %8.2f Km/Tan ",klvc(m,i));
			}
		getch();
	}