/* Chuong trinh 6 */
#define ESC '\x1b'
#include<stdio.h>
char c;
main()
	{
		clrscr();
		printf("\Bam phim <Esc> de dung ");
		while (1==1)
			{
				if (( c=getch()) == ESC)
					break;
				putchar(c);
			}
	}
