#include"stdlib.h"
#include"conio.h"
int mang_so[]={90,10,30,70,50,60,100,80,20,40};
int so=10, x;
int so_sanh();
main()
	{
		clrscr();
		textcolor(LIGHTRED);
		cprintf("\       MINH HOA HAM qsort()\n\r");
		textcolor(YELLOW);
		cprintf("Day so ban dau la:\n\r");
		textcolor(LIGHTCYAN);
		for (x=0; x<so; x++)
			cprintf("%d ",mang_so[x]);
		textcolor(WHITE);
		cprintf("\n\r");
		cprintf("   *************************\n\r");
		textcolor(LIGHTGREEN);
		cprintf("Day so sau khi sap xep la:\n\r");
		qsort(mang_so,so,sizeof(int),so_sanh);
		textcolor(LIGHTMAGENTA);
		for (x=0; x<so; x++)
			cprintf("%d ",mang_so[x]);
		getch();
	}
int so_sanh(n1,n2)
int *n1, *n2;
	{
		return(*n1-*n2);
	}