#include<stdio.h>
main()
	{
		float a[3][4],b[4][2],c[3][4],d[3][2];
		clrscr();
		nhap(a,3,4);
		nhap(b,4,2);
		tong(a,a,c,3,4);
		tich(a,b,d,3,4,2);
		clrscr();
		printf("\nMa tran A\n");
		xuat(a,3,4);
		printf("\nMa tran B\n");
		xuat(b,4,2);
		printf("\nMa tran tong C=A+A\n");
		xuat(c,3,4);
		printf("\nMa tran tich D=A*B\n");
		xuat(d,3,2);
		getch();
	}
nhap(pa,m,n)
float *pa;
int m,n;
	{
		float x;
		int k=m*n,t,i,j;
		for (t=0;t<k;t++)
			{
				i=t/n;
				j=t-i*n;
				printf("\nPhan tu %d ,%d = ",i+1,j+1);
				scanf("%f",&x);
				*(pa+t)=x;
			}
	}
xuat(pa,m,n)
float *pa;
int m,n;
	{
		int k=m*n,t,s;
		for (t=0;t<k;++t)
			{
				s=(t+1)%n;
				printf("%10.2f%c",*(pa+t),s?'':'\n');
			}
	}

tong(pa,pb,pc,m,n)
float *pa,*pb,*pc;
int m,n;
	{
		int k=m*n;
		while (k--)
			*pc++ = *pa++ + *pb++;
	}

tich(pa,pb,pc,m,n,k)
float *pa,*pb,*pc;
int m,n,k;
	{
		int i,j,t;
		for (i=0;i<m;++i)
			for (j=0;j<k;++j)
				{
					*(pc+i*k+j)=0;
					for (t=0;t<n;++t)
						*(pc+i*k+j)+=*(pa+i*n+t)**(pb+t*k+j);
				}
	}

