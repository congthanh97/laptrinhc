#include <stdio.h>
#include <conio.h>

//Tim MAX MIN ma tran

void nhap(float a[][10], int *n, int *m){
	int i,j;
	printf("\nNhap n, m = ");
	scanf("%d%d",n,m);
	for(i=0;i<*n;i++)
		for(j=0;j<*m;j++){
			printf(" Nhap a[%d][%d] = ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
}

void xuat(float a[][10], int n, int m){
	int i,j;
	printf("\nMA TRAN VUA NHAP: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%6.2f",a[i][j]);
		printf("\n");
	}			
}

void timMaxMin(float a[][10], int n, int m){
	int i,j;
	float max,min;
	max = a[0][0]; min = a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
				if(a[i][j] > max)
					max = a[i][j];
				if(a[i][j] < min)
					min = a[i][j];
		}
	printf("\n\t Max = %6.2f \tMin = %6.2f\n",max,min);
}

void main(){
	int n,m;
	float a[10][10];
	clrscr();
	nhap(a,&n,&m);
	xuat(a,n,m);
	timMaxMin(a,n,m);
	getch();

}


