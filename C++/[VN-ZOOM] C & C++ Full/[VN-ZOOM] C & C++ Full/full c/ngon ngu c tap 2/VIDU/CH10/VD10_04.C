#include"stdio.h"
main()
	{
		struct date
			{
				int nam;
				int thang;
				int ngay;
				char thu[4];
			};
		struct date x={1998,10,8,"Nam"};
		clrscr();
		printf("\n	- Nam   = %d",x.nam);
		printf("\n	- Thang = %d",x.thang);
		printf("\n  - Ngay  = %d",x.ngay);
		printf("\n  - Thu   = %s",x.thu);
		getch();
	}