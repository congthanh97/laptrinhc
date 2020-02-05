#include"stdio.h"
#include"mem.h"
#include"alloc.h"
main()
  {
	char *nguon,*dich;
	int n;
	nguon=calloc(100,sizeof(char));
	dich=calloc(100,sizeof(char));
	clrscr();
	printf("\nNhap vao mot chuoi nguon : ");
	gets(nguon);
	printf("\nCan sao chep bao nhieu ky tu : ");
	scanf("%d",&n);
	printf("\nChuoi nguon la :\" %s\"",nguon);
	movmem(nguon,dich,n);
	printf("\nNeu sao chep : %d ky tu thi chuoi dich la :\"%s\"",n,dich);
   getch();
  }
