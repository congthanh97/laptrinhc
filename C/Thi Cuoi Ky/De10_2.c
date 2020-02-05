#include <stdio.h>
#include <conio.h>
void nhap(int a[],int *n,char ten){
	int i;
	printf("Nhap so mu cua da thuc %c: ",ten);
	scanf("%d",n);
	for(i=*n;i>=0;i--){
		printf("Nhap a^%d: ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[],int n, char ten){
	int i;
	printf("Da thuc %c:\t%",ten);
	for(i=n;i>=0;i--){
			printf("%4d",a[i]);
	}
	printf("\n");
}


int tinhGT(int a[],int n,int x){
	int i,tong=a[0],lthua=x;
	for(i=1;i<=n;i++){		
		tong += a[i]*lthua;
		lthua*=x;
	}
	return tong;
}

void tong(int p[], int q[], int t[], int n, int m, int *k){
	int j;
	if(n>m){
		*k = n;
		for(j=0;j<=n;j++)
			if(j<=m)
				t[j]=q[j]+p[j];
			else t[j]=p[j];	
	}else{
		*k = m;
		for(j=0;j<=m;j++)
			if(j<=n)
				t[j]=p[j]+q[j];
			else t[j]=q[j];	
	}
}

void main(){
	int p[10],q[10],t[10],n,m,k,x;
	nhap(p,&n,'A');
	nhap(q,&m,'B');
	xuat(p,n,'A');
	xuat(q,m,'B');
	tong(p,q,t,n,m,&k);
	xuat(t,k,'T');
	printf("Nhap x = ");
	scanf("%d",&x);
	printf("\tP = %d \t Q = %d \t T = %d\n",tinhGT(p,n,x),tinhGT(q,m,x),tinhGT(t,k,x));
	getch();
	
}