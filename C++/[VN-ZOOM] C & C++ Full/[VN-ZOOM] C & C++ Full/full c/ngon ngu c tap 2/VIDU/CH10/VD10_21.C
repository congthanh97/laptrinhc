#include"stdio.h"
main()
	{
		int i;
		char *p;
		i=0x1020;
		p=(unsigned char *) &i;
		printf("Byte thap : %x\n",*p++);
		printf("Byte cao  : %x\n",*p++);
		getch();
	}
