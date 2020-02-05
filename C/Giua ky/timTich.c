#include <stdio.h>
#include <conio.h>

//Tim trong day xem co so nao = 2 so truoc do nhan voi nhau hay khong.
//In ra bo so do

int main(){
	int a[100],i,dem=0,n;
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
	for(i=3;i<=n;i++)	
		if(a[i] == a[i-1] * a[i-2]){
			printf("\nBo so thoa man: %d %d %d.",a[i-2],a[i-1],a[i]);
			dem++;
		}
	if(dem==0)		
		printf("\nKhong co bo so nao thoa man.");
	getch();
}