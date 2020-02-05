#include"conio.h"
#include"dos.h"
#include"stdlib.h"
typedef unsigned int co_ban;
co_ban kieu_goc,cot_cuoi,dong_cuoi;
char ch;
char ket_thuc;
khoi_tao()
	{
		char d=24;
		setcbrk(0);
		kieu_goc=LASTMODE;
		clrscr();
		cot_cuoi=80;
		dong_cuoi=24;
		gotoxy(1,dong_cuoi);
		textbackground(BLACK);
		textcolor(WHITE);
		cprintf("<Ins>:Chen dong,<Del>:Xoa dong,",
		 "<%c><%c><%c><%c>:Di chuyen con tro",d+3,d,d+1,d+2);
		cprintf("<Alt-W>:Cua xo,<Alt-R>:Ngau nhien,<ESC>:Ket thuc");
		dong_cuoi--;
		randomize();
	}
tao_cua_so()
	{
		co_ban x,y,h,w;
		w=random(cot_cuoi-2)+2;
		h=random(dong_cuoi-2)+2;
		x=random(cot_cuoi-w)+1;
		y=random(dong_cuoi-h)+1;
		window(x,y,x+w,y+h);
		if (kieu_goc==MONO)
			{
				textbackground(WHITE);
				textcolor(BLACK);
				clrscr();
				window(x+1,y+1,x+w,y+h-1);
				textbackground(BLACK);
				textcolor(WHITE);
				clrscr();
			}
		else
			{
				textbackground(random(8));
				textcolor(random(7)+9);
			}
		clrscr();
	}
ngau_nhien()
	{
		do
			{
				cprintf("%c",random(256-32)+32);
			}
		while (!kbhit());
	}
main()
	{
		khoi_tao();
		tao_cua_so();
		ket_thuc=0;
		do
			{
				ch=getch();
				if (ch==0)
					ch=getch();
				switch (ch)
					{
						case 17:tao_cua_so();
									break;
						case 19:ngau_nhien();
									break;
						case 45:ket_thuc=1;
									break;
						case 72:gotoxy(wherex(),wherey()-1);
									break;
						case 75:gotoxy(wherex()-1,wherey());
									break;
						case 77:gotoxy(wherex()+1,wherey());
									break;
						case 80:gotoxy(wherex(),wherey()+1);
									break;
						case 82:insline();
									break;
						case 83:delline();
									break;
						case 27:
						case 3:ket_thuc=1;
									break;
						case 13:cprintf("\n\r");
									break;
						default:cprintf("%c",ch);
									break;
					}
			}
		while (!ket_thuc);
	}

