

#include<stdio.h>
main()
  {
	 char a='2';
    unsigned char b='7';
    int c=-23;
    unsigned int d=124;
    float re=675.89;
    float rm = 0.000887;
	 float rt = 0.0000887;
	 clrscr();
    printf("\na= %c, \tb=%c",a,b);
    printf("\nc=+%04d\td=%03d\tc=%4d\td=%3d",c,d,c,d);
    printf("\nd=%o\td=%x\td=%X",d,d,d);
	 printf("\nre= %6.3f \trm= %6.3g ",re,rm);
	 printf("\nrt= %6.3g \trm= %6.3G ",rt,rm);
	 printf("\ntrt= %6.3G",rt);
    getch();
  }