#include"stdio.h"
main()
	{
		FILE *doc;   /* Dinh nghia tap tin va khai bao bien */
		char vanban[81]; /* Khai bao bien la dong van ban */
		clrscr();
		doc=fopen("cadao.txt","r");  /* Mo tap tin van ban de doc */
		while (fgets(vanban,80,doc) != NULL)
			{
				printf("%s",vanban);  /* Doc noi dung tu tap tin vao bo nho */
			}
		fclose(doc);     /* Dong tap tin */
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}