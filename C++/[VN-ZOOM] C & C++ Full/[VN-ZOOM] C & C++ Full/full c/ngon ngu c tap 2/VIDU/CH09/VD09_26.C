#include"conio.h"
#include"string.h"
#include"stdlib.h"
#include"alloc.h"
main()
	{
		char *p[]={"Nam","Quoc","Son","Ha","Nam",
				"De","Cu","Tu","Nhien","Dinh","Phan",
				"Tai","Thien","Thu","Nhu","Ha","Nghich",
				"Lo","Lai","Xam","Pham","Nhu","Dang",
				"Hanh","Khang","Thu","Bai","Hu"};
		char *tam;
		int i,j;
		clrscr();
		tam=calloc(28,sizeof(char));
		for (i=0; i <28; i++)
			for (j=i;j<28;j++)
				if (strcmp(p[i],p[j]) >0)
					{
						tam=p[i];
						p[i]=p[j];
						p[j]=tam;
					}
			for (i=0; i<28; i++)
				{
					textcolor(i+1);
					if (i==7 || 15)
						textcolor(YELLOW);
					cprintf("\n\r %2d. %s",i+1,p[i]);
				}
		getch();
	}