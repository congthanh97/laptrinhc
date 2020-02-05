#include <stdio.h>
#include <conio.h>

int i,j;

void nhap(int a[][10],int m, int n, char ten){
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			printf("Nhap %c[%d][%d]: ",ten,i+1,j+1);
			scanf("%d",&a[i][j]);
		}
}

void xuat(int a[][10],int m,int n, char ten){
	printf("\n\nMa tran %c\n",ten);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
}

void tichMT(int a[][10], int b[][10], int c[][10],int m, int n, int p){
	int k;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			c[i][j]=0;
			for(k=0;k<n;k++) 
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}
void main(){
	int a[10][10],b[10][10],c[10][10],n,m,p;
	printf("Nhap m,n,p = ");
	scanf("%d%d%d",&m,&n,&p);
	nhap(a,m,n,'A');
	nhap(b,n,p,'B');
	tichMT(a,b,c,m,n,p);
	xuat(a,m,n,'A');
	xuat(b,n,p,'B');
	xuat(c,m,p,'C');
	getch();
}