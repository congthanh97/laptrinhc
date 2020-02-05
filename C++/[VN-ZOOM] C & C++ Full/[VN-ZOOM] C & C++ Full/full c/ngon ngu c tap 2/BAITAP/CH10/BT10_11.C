#include"stdio.h"
static int ngay[2][12]=
	{
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
struct date
	{
		int ngay;
		int thang;
		int nam;
	};
typedef struct date th;
main()
	{
		int t1,t2,t3,ngay_nam();
		th x;
		clrscr();
		printf("\n\tNhap vao ngay-thang-nam can xem");
		printf("\n\t    la ngay thu may cua nam do");
		printf("\n\t********************************");
		printf("\n\t- Cho biet ngay: ");
		scanf("%d",&t1);
		printf("\t- Cho biet thang: ");
		scanf("%d",&t2);
		printf("\t- Cho biet nam: ");
		scanf("%d",&t3);
		x.ngay=t1;
		x.thang=t2;
		x.nam=t3;
		printf("\t********************************");
		printf("\n\t*Ngay %2d. Thang %2d. Nam %5d",x.ngay,x.thang,x.nam);
		printf("\n\t+La ngay thu %4d cua nam %5d",ngay_nam(&x),x.nam);
		printf("\n\t++++++++++++++++++++++++++++++++");
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
int ngay_nam(p)
th *p;
	{
		int i,j,s;
		s=p->ngay;
		j=p->nam%4==0;
		for (i=0; i<p->thang-1; i++)
			s+=ngay[j][i];
		return(s);
	}