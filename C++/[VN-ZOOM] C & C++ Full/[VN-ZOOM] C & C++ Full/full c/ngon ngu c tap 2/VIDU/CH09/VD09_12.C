#include"alloc.h"
#include"string.h"
main()
	{
		char *kytu;
		int n;
		kytu=calloc(2,sizeof(char));
		clrscr();
		printf("\n Cho biet so thu tu cua ma ASCII ( theo he thap phan )");
		scanf("%d",&n);
		setmem(kytu,1,n);
		printf("\n Ky tu ma ASCII cua : %d la :\"%s\"",n,kytu);
		getch();
	}
