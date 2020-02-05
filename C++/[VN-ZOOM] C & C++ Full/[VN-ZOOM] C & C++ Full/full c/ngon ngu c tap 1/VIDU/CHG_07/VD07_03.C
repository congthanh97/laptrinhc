

#include"stdio.h"
#include"math.h"
float modul(int x[]);
main()
  {
	int A[5],B[5];
	clrscr();
	printf("\n");
	nhap(A,'A');
	nhap(B,'B');
	printf("\nKET QUA TINH TOAN CUA HAI VECTO A VA B");
	trinhbay(A,'A');
	trinhbay(B,'B');
	printf("\n-------------------");
	tong(A,B);
	printf("\nModule cua vecto A la %f",modul(A));
	printf("\nModule cua vecto B la %f",modul(B));
	getch();
  }
nhap(int x[],char chu)
  {
	int k;
	for(k=0;k<5;k++)
	  {
		printf("\%c[%d]=",chu,k+1);
		scanf("%d",&x[k]);
	  }
	printf("\n");
  }
trinhbay(int x[],char chu)
  {
	printf("\n%c={%d\,%d\,%d\,%d\,%d\}",chu,x[0],x[1],x[2],x[3],x[4]);
  }
float modul(int x[])
  {
	int k;
	float s=0;
	for(k=0;k<5;k++)
		s=s+x[k]*x[k];
	s=sqrt((double)s);
	return(s);
  }
tong(int x[],int y[])
  {
	int z[5],k;
	for(k=0;k<5;k++)
		z[k]=x[k]+y[k];
	trinhbay(z,'C');
  }