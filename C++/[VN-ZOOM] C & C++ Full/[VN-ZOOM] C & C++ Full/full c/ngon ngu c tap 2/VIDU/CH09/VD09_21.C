#include"stdio.h"
#include"string.h"
#include"alloc.h"
main()
  {
	 char *nguon,*dich;
	 int i;
	 nguon=calloc(100,sizeof(char));
	 dich=calloc(100,sizeof(char));
	 clrscr();
	 printf("\nNhap vao chuoi nguon : ");
	 gets(nguon);
	 printf("\nMuon sao chep den ky tu thu may ? : ");
	 scanf("%d",&i);
	 strncpy(dich,nguon,i);
	 printf("\nNoi dung cua chuoi sao chep la : %s ",dich);
	 printf("\nChieu dai cua chuoi sao chep la : %d ky tu",strlen(dich));
	
    getch();
  }