#include <stdio.h>
#include <conio.h>

void nhap(int a[], int *n){
	int i;
	printf("\nNhap n= ");
	scanf("%d",n);
	for(i=0;i<*n;i++){
		printf("Nhap a[%d]= ",i+1);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[], int n){
	int i;
	printf("\nDanh sach cac phan tu: \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void timMaxMin(int a[], int n, int *max, int *min){
	int i;
	*max = a[0];
	*min = a[0];
	for(i=0;i<n;i++){
		if(a[i] > *max)
			*max = a[i];	
		if(a[i] < *min)
			*min = a[i];
	}
}

void inVitri(int a[],int n, int max, int min){
	int i;
	printf("\nGia tri Max = %d",max);
	printf("\nVi tri gia tri Max la: ");
	for(i=0;i<n;i++)
		if(a[i]==max)
			printf("%d ",i+1);
	printf("\nGia tri Min = %d",min);
	printf("\nVi tri gia tri Min la: ");
	for(i=0;i<n;i++)
		if(a[i]==min)
			printf("%d ",i+1);
} 

void main(){
	int a[10],n,min,max;
	clrscr();
	nhap(a,&n);
	xuat(a,n);
	timMaxMin(a,n,&max,&min);
	inVitri(a,n,max,min);
	getch();
}














