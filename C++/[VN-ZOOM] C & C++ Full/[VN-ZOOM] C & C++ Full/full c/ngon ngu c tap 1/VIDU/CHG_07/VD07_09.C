

#include"stdio.h"
main()
{
  int a[]={8,9,4,6,7,8,4,6,5,6};
  int k;
  for(k=0;k<10;k++)
    printf("\n a[%d]=%d so sanh voi *(a+%d)=%d ",k,a[k],k,*(a+k));
    printf("\n---------------Dia chi ");
    printf("\nDia chi ten mang tro toi %p ",a);
    printf("\nDia chi byte dau tien    %p ",&a[0]);
    getch();
}