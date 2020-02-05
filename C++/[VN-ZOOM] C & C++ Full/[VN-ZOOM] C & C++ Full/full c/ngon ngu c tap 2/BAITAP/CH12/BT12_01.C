#include"conio.h"
#include"alloc.h"
main()
	{
		char *ten;
		char quequan[20];
		int tuoi;
		ten=malloc(24);
		textmode(C80);
		textcolor(YELLOW);
		textbackground(BLUE);
		clrscr();
		cputs("\n\r-Cho biet ten: ");
		ten[0]=24;
		ten=cgets(ten);
		cputs("\n\r-Que quan: ");
		quequan[0]=20;
		strcpy(quequan, cgets(quequan));
		cputs("\n\r-Tuoi: ");
		scanf("%d",&tuoi);
		textcolor(LIGHTRED);
		cprintf("\n\r\+Ten la: %s",ten);
		cprintf("\n\r\+Que quan: %s",quequan);
		cprintf("\n\r\+Tuoi: %d",tuoi);
		textcolor(LIGHTMAGENTA);
		cprintf("\n\n\r*Bam phim bat ky de ket thuc");
		getch();
	}