#include"graphics.h"
#include"stdio.h"
main()
	{
		int man_hinh;
		int kieu;
		clrscr();
		printf("\nTIM GIA TRI THIET BI VA KIEU MAN HINH");
		detectgraph(&man_hinh,&kieu);
		if (man_hinh== -2)
			printf("\nKhong co card do hoa");
		printf("\n-Thiet bi      = %d",man_hinh);
		printf("\n-Kieu man hinh = %d",kieu);
		getche();
		closegraph();
	}
