#include"stdio.h"
main()
	{
		FILE *ghi; /* Dinh nghia tap tin va khai bao bien */
		char vanban[81]; /* Khai bao bien la dong van ban */
		clrscr();
		ghi=fopen("cadao.txt","w");   /* Mo tap tin van ban de ghi */
		while (strlen(gets(vanban)) > 0)
			{
				fputs(vanban,ghi);   /* Ghi noi dung vao tap tin */
				fputs("\n",ghi);   /* Xuong dong moi */
			}
		fclose(ghi);       /* Dong tap tin */
	}