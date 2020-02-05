#include"stdio.h"
struct date
	{
		int nam;
		int thang;
		int ngay;
		char thu[4];
	}d;
main()
	{
		int kich_thuoc;
		kich_thuoc=sizeof(struct date);
		printf("\n- Kich thuoc cau truc date la:%d bytes",kich_thuoc);
		kich_thuoc=sizeof d;
		printf("\n- Kich thuoc cua bien cau truc d la:%d bytes",kich_thuoc);
		getch();
	}