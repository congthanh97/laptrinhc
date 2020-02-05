#include"conio.h"
unsigned char c;
main()
	{
		int dem=0 ;
		clrscr();
		for (c=0; c<255; c++ )
			{
				cprintf("\n\r  -Ma ASCII cua (%3d) la: ",c+1,putch(c));
				dem++;
				if (dem >24)
					{
						dem=1;
						getch();
					}
			}
	}