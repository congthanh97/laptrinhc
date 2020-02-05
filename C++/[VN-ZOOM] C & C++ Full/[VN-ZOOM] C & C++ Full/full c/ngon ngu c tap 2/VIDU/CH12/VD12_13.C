#include"conio.h"
#define TRAI	10
#define DINH	5
#define PHAI  70
#define DAY    20
#define RONG (PHAI-TRAI+1)
#define CAO (DAY-DINH+1)
#define TRUE   1
#define ESC    27
#define MUI_TEN_T 75
#define MUI_TEN_P 77
#define MUI_TEN_L 72
#define MUI_TEN_X 80
#define CHEN    82
#define XOA    83
#define ALT_H  35
#define ALT_L  38
#define ALT_C  46
#define ALT_U  22
int dem [RONG][CAO];
main()
	{
		int x,y;
		char phim;
		clrscr();
		window(TRAI,DINH,PHAI,DAY);
		x=1;
		y=1;
		textbackground(BLUE);
		while ((phim=getch()) !=ESC)
			{
				if (phim==0)
					{
						switch (getch())
							{
								case MUI_TEN_T:if (x > 1)
												gotoxy(--x,y);
												break;
								case MUI_TEN_L:if (y > 1)
												gotoxy(x,--y);
												break;
								case MUI_TEN_P:if (x < RONG)
												gotoxy(++x,y);
												break;
								case MUI_TEN_X:if (x < CAO)
												gotoxy(x,++y);
												break;
								case CHEN   :gettext(TRAI,DINH,PHAI,DAY,dem);
												insline();
												break;
								case 	XOA   :gettext(TRAI,DINH,PHAI,DAY,dem);
												delline();
												break;
								case 	ALT_H :highvideo();
												break;
								case 	ALT_L :lowvideo();
												break;
								case 	ALT_C :textcolor(getch()-'0');
												break;
								case 	ALT_U :puttext(TRAI,DINH,PHAI,DAY,dem);
												break;
							}
					}
				else
					{
						putch(phim);
						x=wherex();
						y=wherey();
					}
			}
	}
