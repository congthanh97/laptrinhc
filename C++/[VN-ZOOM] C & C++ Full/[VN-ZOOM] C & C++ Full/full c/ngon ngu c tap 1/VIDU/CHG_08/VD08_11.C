

#include"stdio.h"
#include"math.h"
#include"alloc.h"
int *tong(int *x,int *y,int dim);
float modul(int *x,int dim);
main()
  {
	 int *a,*b,SIZE;
	 clrscr();
	 printf("\nSo chieu cua Vecto la = ");
	 scanf("%d",&SIZE);
	 a=(int *)calloc(SIZE,sizeof(int));
	 b=(int *)calloc(SIZE,sizeof(int));
	 nhap(a,'a',SIZE);
	 nhap(b,'b',SIZE);
	 hienthi(a,'a',SIZE);
	 hienthi(b,'b',SIZE);
	 hienthi(tong(a,b,SIZE),'c',SIZE);
	 printf("\nModule cua Vecto a la %f",modul(a,SIZE));
	 printf("\nModule cua Vecto b la %f",modul(b,SIZE));
	 printf("\nModule cua Vecto tong c la %f",modul (tong(a,b,SIZE),SIZE));
	 getch();
  }

  nhap(int *x,char chu,int n)
    {
      int k;
      for(k=0;k<n;k++)
		 {
			printf("%c[%d]=",chu,k+1);
			scanf("%d",x+k);
		 }
      printf("\n");
    }
  hienthi(int *x,char chu,int n)
    {
      int k;
      printf("\n%c=(",chu);
      for(k=0;k<n-1;k++)
			printf("%d\,",*(x+k));
		printf("%d)",*(x+k));
    }

  float modul(int *x,int dim)
    {
      int k;
      float s=0;
      for(k=0;k<dim;k++)
		s+=(*(x+k))*(*(x+k));
		s=sqrt((double)s);
		return(s);
    }

  int *tong(int *x,int *y,int dim)
    {
      int *supp,k;
      supp=(int *)calloc(dim,sizeof(int));
      for(k=0;k<dim;k++)
		supp[k]=x[k]+y[k];
		return(supp);
    }
