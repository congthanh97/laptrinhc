#include"stdio.h"
#include"string.h"
#include"conio.h"
int i;
char chuoi[]="Que huong la chum khe ngot";
main()
	{
		int k;
		char chuoi[40];
		clrscr();
		cprintf("\n\n");
		copy(chuoi);
		/* Chu y cach truy xuat thanh phan chuoi */
		textcolor(YELLOW);
		for (k=0;k<strlen(chuoi);k++)
			cprintf(" %c ",chuoi[k]);
		getch();

	}
copy(char x[])
	{
		strcpy(x,chuoi);
	}
