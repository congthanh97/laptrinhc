#include <stdio.h>
#include <conio.h>

//Tim trong day xem co so nao = 1 so trong day binh phuong khong
//In ra bo so do


int main(){
	int a[100],j,i,dem=0,n;
	printf("\nNhap n= ");	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	//In day ban dau
	printf("Day ban dau: ");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	
	//Kiem tra
	for(i=1;i<=n;i++)	
		for(j=1;j<=n;j++)
			if(a[i] == a[j] * a[j]){
				printf("\nBo so thoa man: %d %d.",a[i],a[j]);
			dem++;
		}
	if(dem==0)		
		printf("\nKhong co bo so nao thoa man.");
	getch();
}