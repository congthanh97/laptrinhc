#include"stdio.h"
#include"string.h"
main()
  {
	 char nguon[]="Truong Dai Hoc Tai Chanh Ke Toan";
	 char dich[100];
	 clrscr();
	 strcpy(dich,nguon);
	 printf("\n-Noi dung cua chuoi nguon la : %s ",nguon);
	 printf("\n-Chieu dai cua chuoi nguon la : %d ",strlen(nguon));
	 printf("\n\n          SAO CHEP SANG CHUOI DICH");
	 printf("\n+Noi dung cua chuoi dich la = %s ",dich);
	 printf("\n+Chieu dai cua chuoi dich la = %d ",strlen(dich));
    getch();
  }