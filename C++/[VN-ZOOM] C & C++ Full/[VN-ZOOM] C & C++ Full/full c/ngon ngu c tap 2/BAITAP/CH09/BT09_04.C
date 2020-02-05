#include"stdio.h"
#include"conio.h"
main()
	{
		const char s[]="Turbo C";
		char k;
		clrscr();
      cprintf("\n%20c",' ');
		textcolor(YELLOW);
		for (k=0;s[k];cprintf("[%d]",++k));
			puts(" ");
		cprintf("\n%20c",' ');
		textcolor(LIGHTRED);
		for (k=0;s[k];cprintf(" %c ",*(s+k++)));
		textcolor(LIGHTGREEN+BLINK);
		cprintf("\n\n\r%15c Bam phim bat ky de ket thuc",'');
		getch();
	}

