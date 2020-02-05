/*Cheo hoa dang toan phuong*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

enum BOOLEAN { false = 0 , true };

void main()
{
	int i , j , k , n ;
	float   c;
	enum BOOLEAN t ;
	char sua ;
	float  b[50] ;
	float a[50][50] ;

	clrscr();
	printf("CHEO HOA DANG TOAN PHUONG\n");
	printf("CAP MA TRAN n = ");
	scanf("%d",&n);
	fflush(stdin) ;
	printf("DOC SO LIEU MA TRAN A \n");
	for ( i = 0 ; i < n ; i++ )
	{
		printf("HANG THU %d : " , i);
		for ( j = 0 ; j < n ; j++ )		scanf("%f" , &a[i][j]);
	}
	t = true ;
	while ( t )
	{
		printf("CO SUA MA TRAN KHONG ? (c/k) : ");
		fflush(stdin);
		scanf("%c" , &sua );
		if ( toupper(sua) == 'C' )
		{
			printf("CHI SO HANG  i = ");
			fflush(stdin);
			scanf("%d" , &i);
			printf("CHI SO COT  j = ");
			fflush(stdin);
			scanf("%d" , &j);
			printf("a[%d,%d] =",i,j);
			fflush(stdin);
			scanf("%f" , &a[i][j]);
		}
		if ( toupper(sua) == 'K' ) t= false ;
	}
	printf("\tCHEO HOA DANG TOAN PHUONG VOI MA TRAN A\n");
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)	printf("  %10.3f" , a[i][j]);
		printf("\n");
	}
	t = true ;
	k = 0 ;
	printf("NHAN 1 PHIM BAT KY DE TIEP TUC\n");
	getch();
	while (t)
	{
		if (a[k][k] == 0)
		{
			t = false ;
			printf("A[k][k] =0 \n");
		}
		if (a[k][k] != 0)
		{
			c = 1.0/ a[k][k] ;
			for (i = k + 1 ; i < n ; i++)
			{
				a[i][i] -= a[k][i]*a[k][i]*c ;
				for (j = i + 1 ; j < n ; j++)
					a[i][j] -= a[k][i]*a[k][j]*c ;
			}
		}
		printf("\tMA TRAN SAU LAN BIEN DOI THU %d\n" , k);
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)   printf("    %f" , a[i][j]);
			printf("\n") ;
		}
		k++ ;
		if (k == n - 1 ) 	t = false ;
	}
	if (k == n - 1 )
	{
		printf("DAO CUA MA TRAN CHUYEN CO SO T \n");
		for (i = 1 ; i < n ; i++)
			for (j = 0 ; j <= i - 1  ; j++) a[i][j] = a[j][i] ;
		printf("\n") ;
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)	printf("    %5.2f" , a[i][j]);
			printf("\n") ;
		}
		for (i = 0 ; i < n - 1 ; i++ )    b[i] = 1.0/a[i][i];
		b[n] = a[n][n];
		printf("\n") ;
		printf("DANG CHEO CUA DANG TOAN PHUONG\n");
		printf("\n") ;
		printf(" f(y,y) =") ;
		printf("  %15.13f*y0" , b[0]) ;
		for (i = 1 ; i < n ; i++ )
			if  (b[i] != 0)
			{
				if  (b[i] > 0) 	printf("  +%15.13f*y%d" , b[i] , i) ;
				else printf("  %15.13f*y%d" , b[i] , i) ;
			}
		printf("\n") ;
		printf("\tPHEP BIEN DOI TOA DO\n");
		printf("\n") ;
		for (i = 0 ; i < n ; i++ )
		{
			printf(" y%d =" ,i) ;
			for (j = i ; j < n  ; j++)
			{
				if ( j == i )	printf("  %8.4f*x%d" , a[i][j] , i) ;
				else
					if (a[i][j] != 0 )
					{
						if (a[i][j] > 0 )
							printf("  +%6.4f*x%d" , a[i][j] , j) ;
						else  printf("  %8.4f*x%d" , a[i][j] , j) ;
					}
				}
				printf("\n") ;
			}
	}
	getch();
}