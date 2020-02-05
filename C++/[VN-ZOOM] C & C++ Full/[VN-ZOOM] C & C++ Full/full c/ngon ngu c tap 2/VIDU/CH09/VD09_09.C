#include"string.h"
#include"stdio.h"
#include"stdlib.h"
char *thaythe(char chu, int lan);
main()
	{
		char c;
		printf("\n %s",thaythe('s',4));
		c=getchar();
		printf("\n %s",thaythe(c,5));
		getch();
	}
char *thaythe(char chu, int lan)
	{
		char *kytu;
		int i;
		kytu=calloc(lan,sizeof(char));
		for (i=0;i <=lan-1; i++)
			kytu[i]=chu;
			return(kytu);
	}