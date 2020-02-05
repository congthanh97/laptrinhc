#include <stdio.h>
#include <conio.h>

void main(){
    int mang[100],n,i,j,tg;
    clrscr();
    printf("\nNhap n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
	 printf(" Nhap phan tu thu %d: ",i);
	 scanf("%d",&mang[i]);
    }

    printf("Day so ban dau: ");
    for(i=1;i<=n;i++)
	printf("%d ",mang[i]);

    for(i=1;i<=n-1;i++)
	for(j=i+1;j<=n;j++)
		if(mang[i]>mang[j])
		{
		     tg = mang[i];
		     mang[i] = mang[j];
		     mang[j] = tg;
		}
   printf("\nDay so sau khi sap xep: ");
   for(i=1;i<=n;i++)
	printf("%d ",mang[i]);
   getch();
}