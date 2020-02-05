#include"conio.h"
typedef enum
	{
		dung,sai
	}xacnhan;
typedef struct
	{
		char ten[12];
		xacnhan kichhoat;
	}tenmenu;
tenmenu menu[8]={"  File  ",sai,"  Edit ",sai,
	"  Run  ",sai," Compile",sai," Project",sai,
	" Options",sai," Debug  ",sai,"Break/Watch",sai};
	xacnhan ketthuc;
	char ch;
	int k;
void hop(int x1, int y1, int x2, int y2)
	{
		int i;
		gotoxy(x1,y1);
		putch(201);
		for (i=x1+1; i<x2; i++)
			putch(205);
		putch(187);
		gotoxy(x1,y2);
		putch(200);
		for (i=x1+1; i< x2;i++)
			putch(205);
		putch(188);
		for (i=y1+1; i<y2; i++)
			{
				gotoxy(x1,i);
				putch(186);
				gotoxy(x2,i);
				putch(186);
			}
	}
settextcolor(int bk, int tx)
	{
		textbackground(bk);
		textcolor(tx);
	}
void xuat_menu(tenmenu m, int vitri)
	{
		if (m.kichhoat == dung)
			settextcolor(RED,YELLOW+BLINK);
		else
			settextcolor(RED,WHITE);
		gotoxy(vitri,3);
		cprintf(" ");
		gotoxy(wherex()-6,3);
		cprintf("%s",m.ten);
		gotoxy(wherex(),3);
		settextcolor(BLUE,WHITE);
	}
void trai()
	{
		menu[k].kichhoat=sai;
		xuat_menu(menu[k],8+k*9);
		if (k<7)
			k++;
		else
			k=0;
		menu[k].kichhoat=dung;
		xuat_menu(menu[k],8+k*9);
	}
void phai()
	{
		menu[k].kichhoat=sai;
		xuat_menu(menu[k],8+k*9);
		if (k>0)
			k--;
		else
			k=7;
		menu[k].kichhoat=dung;
		xuat_menu(menu[k],8+k*9);
	}
main()
	{
		textmode(C80);
		settextcolor(BLUE,WHITE);
		clrscr();
		hop(2,2,78,4);
		for (k=0;k<8; xuat_menu(menu[k],8+k*9),k++);
		menu[0].kichhoat=dung;
		k=0;
		xuat_menu(menu[0],8);
		ketthuc=sai;
		do
			{
				ch=getch();
				if (ch==0)
					ch=getch();
				switch (ch)
					{
						case 77:trai();
									break;
						case 75:phai();
									break;
						case 13:ketthuc=dung;
									break;
						case 'F':
						case 'f':k=0;
									ketthuc=dung;
									break;
						case 'E':
						case 'e':k=1;
									ketthuc=dung;
									break;
						case 'R':
						case 'r':k=2;
									ketthuc=dung;
									break;
						case 'C':
						case 'c':k=3;
									ketthuc=dung;
									break;
						case 'P':
						case 'p':k=4;
									ketthuc=dung;
									break;
						case 'O':
						case 'o':k=5;
									ketthuc=dung;
									break;
						case 'D':
						case 'd': k=6;
									ketthuc=dung;
									break;
						default :putch(7);
									putch(7);
					}
			}
		while (ketthuc==sai);
		gotoxy(30,10);
		cprintf("Ban da chon menu %s",menu[k].ten);
		getch();
	}