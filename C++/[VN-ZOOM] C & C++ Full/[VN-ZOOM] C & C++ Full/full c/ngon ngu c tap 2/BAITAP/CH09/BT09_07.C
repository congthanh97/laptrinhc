#include"conio.h"
void toadoxy(x,y,s)
char x,y,*s;
	{
		char k;
		gotoxy(x,y);
		for (k=0;s[k]&& k < 80 - (2 *x);putch(s[k++]));
	}
void trai(char *s)
	{
		char tam,k;
		tam=*s;
		for (k=0;s[k+1];s[k]=s[k+1],k++);
		s[k]=tam;
	}
void phai(char *s)
	{
		char tam,k;
		k=strlen(s)-1;
		tam=s[k];
		for (;k;s[k]=s[k-1],k--);
		s[k]=tam;
	}
main()
	{
		char *thongbao1=" Chuong trinh truyen hinh kenh 9 ngay 28/9/98 "
				"-6g02: Tap the duc buoi sang - 6g20: Tin trong nuoc"
				"-6g30: Tin the gioi - 7g10 - The duc the thao trong tuan"
				"-7g30: Kheo tay hay lam - 8g: Giai tri nuoc ngoai";
		char *thongbao2="* Chuong trinh truyen hinh kenh 7 ngay 28/9/98 *"
				"-6g02: Tap the duc - 6g25: Tin tieng nuoc ngoai"
				"-6g45: Phim hoat hinh: Tom va Jerry - 7g: Tin trong nuoc"
				"-8g05: Chieu phim: Canh sat va nhung nuoi o hanh tinh khac";
		clrscr();
		for (;!kbhit();)
			{
				trai(thongbao1);
				phai(thongbao2);
				textcolor(YELLOW);
				toadoxy(5,5,thongbao1);
				textcolor(LIGHTRED);
				toadoxy(5,7,thongbao2);
				delay(1000);
			}
	}
