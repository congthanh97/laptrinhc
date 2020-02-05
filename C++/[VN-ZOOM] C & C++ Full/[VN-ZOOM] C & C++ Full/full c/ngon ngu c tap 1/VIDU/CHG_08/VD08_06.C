#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int k;
typedef char Ten[26];
Ten *p[10];
main()
	{
		for (k=0;k<10;k++)
			{
				p[k]=malloc(sizeof(Ten));
				printf("\nTen nguoi thu :%d la : ",k+1);
				gets(*p[k]);
				p[k]=realloc(*p[k],strlen(*p[k])+1);
			}
		clrscr();
		printf("\nDANH SACH 10 NGUOI VUA NHAP");
		for (k=0;k<10;k++)
			printf("\nNguoi thu :%d ten la : %s",k+1,*p[k]);
		getch();
	}