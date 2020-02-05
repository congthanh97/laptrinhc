#include"stdio.h"
#include"fcntl.h"
#include"io.h"
main()
	{
		int f;
		struct ftime Ft;
		char tap_tin[11];
		clrscr();
		printf("\nXEM NGAY CAP NHAT SAU CUNG CUA TAP TIN");
		printf("\nGo ten tap tin can xem: ");
		gets(tap_tin);
		f=open(tap_tin,O_RDWR);
		getftime(f,&Ft);
		close(f);
		printf("\nTruy xuat sau cung cua: %s la ngay: ",tap_tin);
		printf("%u-%u-%u luc %u:%u:%u",Ft.ft_day,Ft.ft_month,
			 Ft.ft_year+1980,Ft.ft_hour,Ft.ft_min,Ft.ft_tsec);
		printf("\nBam phim bat ky de ket thuc");
		getch();
	}