#include"conio.h"
struct text_info info;
main()
	{
		int mau_nen,mau_chu;
		textmode(C40);
		textbackground(BLUE);
		textcolor(WHITE);
		clrscr();
		window(1,5,40,20);
		gettextinfo(&info);
		cprintf("\n\rCAC THONG SO CUA MAN HINH");
		cprintf("\n\r-Kieu man hinh      :%2d",info.currmode);
		cprintf("\n\r-Chieu cao man hinh :%2d dong",info.screenheight);
		cprintf("\n\r-Chieu rong man hinh:%2d cot",info.screenwidth);
		cprintf("\n\r-Cua so cai dat     :%d,%d,%d,%d",info.winleft,
					info.wintop,info.winright,info.winbottom);
		cprintf("\n\r-Vi tri con tro     :cot:%d,dong:%d",info.curx,
									info.cury);
		mau_nen=info.attribute >> 4;
		mau_chu=info.attribute - (mau_nen << 4);
		cprintf("\n\r-Mau nen            :%2d",mau_nen);
		cprintf("\n\r-Mau chu            :%2d",mau_chu);
		while (!kbhit());
	}
