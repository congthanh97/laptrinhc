#include"stdio.h"
#include"string.h"
#include"alloc.h"
main()
  {
	 char k,*nguon;
	 clrscr();
	 nguon=calloc(100,sizeof(char));
	 printf("\nNhap vao chuoi nguon : ");
	 gets(nguon);
	 clrscr();
	 printf("\nNoi dung chuoi nguon la : %s ",nguon);
	 printf("\nMuon trich ra tu ky tu nao :");
	 scanf("%c",&k);
	 printf("\nNoi dung cua chuoi trich ra la : %s ",strchr(nguon,k));
    getch();
  }