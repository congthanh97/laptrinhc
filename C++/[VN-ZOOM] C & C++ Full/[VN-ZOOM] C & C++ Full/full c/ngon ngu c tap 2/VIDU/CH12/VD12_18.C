#include"graphics.h"
main()
	{
		int man_hinh,kieu,loi;
		char *con_tro;
		man_hinh=VGA;
		kieu=VGAHI;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		loi=graphresult();
		if (loi)
			{
				printf("-Ma loi: %d  ",loi);
				con_tro=grapherrormsg(loi);
				printf("\n-Ly do: ");
				puts(con_tro);
			}
		else
			puts("-Khong co loi\n");
		getch();
		closegraph();
	}
