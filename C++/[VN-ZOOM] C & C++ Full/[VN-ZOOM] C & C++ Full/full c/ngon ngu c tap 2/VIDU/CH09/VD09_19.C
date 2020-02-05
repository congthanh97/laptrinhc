#include<alloc.h>
#include<string.h>
void chen(char dich , int vitri,char *nguon )
	{
		char k;
		for (k=strlen(nguon),nguon[k+1]=0;k>=vitri;k--)
			nguon[k]=nguon[k-1];
		nguon[k]=dich;
	}

main()
	{
		char *s1,s2;
		int n;
		s1=calloc(100,sizeof(char));
		clrscr();
		printf("\nNhap vao chuoi nguon : ");
		gets(s1);
		printf("\nNhap vao ky tu can chen : ");
		scanf("%c",&s2);
		printf("\nMuon chen vao vi tri nao : ");
		scanf("%d",&n);
		clrscr();
		printf("\nChuoi nguon la : %s ",s1);
		printf("\nKy tu da chen them vao la : %c ",s2);
		printf("\nTai vi tri so : %d ",n);
		printf("\n\n      KET QUA \n");
		chen(s2,n,s1);
		puts(s1);
		getch();
	}