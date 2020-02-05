#include <stdio.h>
#include <conio.h>

//Tim so lon thu 2 cua day.
//In ra cac vi tri do

int main(){
	int a[100],b[100],i,j,tg,max2,n;
	printf("\nNhap n= ");	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
		b[i] = a[i]; //Copy toan bo mang a sang mang b
	}
	//In day ban dau
	printf("Day ban dau: ");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
		
	//Sap xep day theo chieu giam dan
	for(i=1;i<=n-1;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]<a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
					
	//Tim so max thu 2
	i=1;
	while(a[i]==a[i+1]) i++;
	max2=a[i+1];
	printf("\nGia tri lon thu 2: %d",max2);
	printf("\nVi tri so lon thu 2: ");
	for(i=1;i<=n;i++)
		if(b[i]==max2)
			printf("%d ",i);
	getch();
}