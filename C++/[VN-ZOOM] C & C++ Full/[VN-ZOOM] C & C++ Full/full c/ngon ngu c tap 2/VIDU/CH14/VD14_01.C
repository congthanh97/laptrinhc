#include"stdio.h"
#include"ctype.h"
main()
	{
		char ch;
		int i;
		for (i=1; i < 20 ; i++)
			{
				ch=getchar();
				if (ch==' ')
					break;
				if (isalnum(ch))
					printf("%c khong phai la ky hieu\n",ch);
			}
	}
