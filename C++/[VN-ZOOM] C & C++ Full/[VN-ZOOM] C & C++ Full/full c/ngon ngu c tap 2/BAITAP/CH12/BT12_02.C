#include"conio.h"
#define TRAI 46
#define DINH 10
#define PHAI 75
#define DAY  22
#define TRAIM 1
#define DINHM 1
#define SO_MAU 16
main()
	{
		int j;
		window(TRAI,DINH,PHAI,DAY);
		textbackground(GREEN);
		for (j=0; j<98; j++)
			{
				textcolor(j % SO_MAU);
				cputs("Turbo C");
			}
		delay(200000);
		movetext(TRAI,DINH,PHAI,DAY,TRAIM,DINHM);
		getche();
	}
