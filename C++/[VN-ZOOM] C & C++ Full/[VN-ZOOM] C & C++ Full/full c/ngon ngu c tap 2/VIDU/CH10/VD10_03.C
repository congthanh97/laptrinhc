#include"stdio.h"
main()
	{
		struct nhansu
			{
				char ten[24];
				int tuoi;
			} nguoi1,nguoi2;
		int s;
		clrscr();
		printf("\n	*NHAP DU LIEU*");
		printf("\n - Nhap ten cua nguoi thu nhat : ");
		scanf("%s",&nguoi1.ten);
		printf(" - Nhap tuoi cua nguoi thu nhat : ");
		scanf("%d",&nguoi1.tuoi);
		printf("\n - Nhap ten cua nguoi thu hai : ");
		scanf("%s",&nguoi2.ten);
		printf(" - Nhap tuoi cua nguoi thu hai : ");
		scanf("%d",&nguoi2.tuoi);
		s=nguoi1.tuoi + nguoi2.tuoi;
		printf("\n --------------------------");
		printf("\n	*XUAT DU LIEU*");
		printf("\n + Ten cua nguoi thu nhat la : %s ",nguoi1.ten);
		printf("\n + Tuoi cua nguoi thu nhat la :%2d",nguoi1.tuoi);
		printf("\n * Ten cua nguoi thu hai la : %s",nguoi2.ten);
		printf("\n * Tuoi cua nguoi thu hai la :%2d",nguoi2.tuoi);
		printf("\n - Tuoi cua 2 nguoi la       :%d tuoi",s);
		getch();
	}