#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    int a, b,c;
    clrscr();
    printf("\t Kiem tra tam giac\n");
    printf("\t\nNhap vao cac canh cua tam giac: ");
    scanf("%d%d%d", &a, &b, &c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
 		int kt=0;
        if ((a==b) && (b==c))
              kt=4;
          else{
              if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))   
                  kt=2;     
            if ((a==b)||(a==c)||(b==c))
                  kt++;       
              }
          printf("Day la tam giac ");   
          if (kt==1) printf("can.\n");
          if (kt==2) printf("vuong.\n");
 		  if (kt==3) printf("vuong can.\n");
          if (kt==4) printf("deu.\n");
          if (kt==0) printf("thuong.\n");
          
   }else
          printf("Ba canh vua nhap khong tao thanh tam giac.\n");
   getch();
}