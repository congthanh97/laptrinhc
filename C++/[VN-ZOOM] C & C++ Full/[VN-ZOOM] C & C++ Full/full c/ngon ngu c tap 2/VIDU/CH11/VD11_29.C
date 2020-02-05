#include"stdio.h"
#include"conio.h"
#include"alloc.h"
FILE *f;
char *hang[89];
int k=0,dong=1;
void len()
	{
		if (k > 0)
			if (dong == 1)
				{
					gotoxy(1,24);
					delline();
					gotoxy(1,1);
					insline();
					cprintf("%s",hang[--k]);
				}
			else
				{
					dong--;
					k--;
					gotoxy(1,dong);
				}
		else
			putch(7);
	}
void xuong()
	{
		if (k < 90)
			if (dong==24)
				{
					gotoxy(1,1);
					delline();
					gotoxy(1,24);
					insline();
					k++;
					cprintf("%s",hang[k]);
				}
			else
				{
					dong ++;
					k++;
					gotoxy(1,dong);
				}
		else
			putch(7);
	}
	main()
		{
			char key;
			textmode(C80);
			textattr((BLUE <<4)+WHITE);
			clrscr();
			gotoxy(5,25);
			cprintf("Bam (%c) hoac (%c) de xem",24,25);
			cprintf("Bam <Esc> de thoat");
			cprintf("              BANG LUONG GIAC");
			getch();
			f=fopen("LG_GIAC.TXT","rt");
			while (!feof(f))
				{
					hang[k]=calloc(80,sizeof(char));
					fgets(hang[k++],80,f);
				}
			for (k=0; k<25;k++)
				{
					gotoxy(1,k+1);
					cprintf("%s",hang[k]);
				}
			gotoxy(1,1);
			dong=1;
			k=1;
			do
				{
					key=getch();
					if (key==0)
						key=getch();
					switch (key)
						{
							case 72:len();
									  break;
							case 80:xuong();
									  break;
						}
				}

			while (key!=27);
			close(f);
		}
