#include"stdio.h"
#include"conio.h"
struct ngay_thang_nam
	{
		int ngay;
		int thang;
		int nam;
	};
main()
	{
		struct ngay_thang_nam x;
		clrscr();
		textcolor(LIGHTCYAN);
		textbackground(BLACK);
		clrscr();
		printf("\n       Chuong trinh tinh ngay,thang,nam");
		hom_nay(&x);
		ngay_mai(&x);
		printf("\n       Bam phim bat ky de ket thuc");
		getch();
		normvideo();
		clrscr();
	}
hom_nay(pd)
struct ngay_thang_nam *pd;
	{
		printf("\n   + Hom nay la ngay-thang-nam : ");
		scanf("%d-%d-%d",&pd->ngay,&pd->thang,&pd->nam);
	}
ngay_mai(pd)
struct ngay_thang_nam *pd;
	{
		int nngay,m;
		m=pd->thang;
		nngay=(m==4||m==6||m==9||m==11)?30:(m==2)
					?28+(pd->nam % 4==0):31;
		if (++pd->ngay > nngay)
			{
				pd->ngay=1;
				if (++pd->thang > 12)
					{
						pd->thang=1;
						pd->nam=(pd->nam+1)%100;
					}
			}
		printf("   + Ngay mai la ngay :%d-%d-%d\n",pd->ngay,
						 pd->thang,pd->nam);
	}