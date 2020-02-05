#include<stdio.h>
main()
	{
		float a[3][2],b[2][4],c[3][4],x;
		int i,j,k;
		clrscr();
		printf("\n %5c NHAP SO LIEU CHO MA TRAN \n",'');
		printf("\nNhap ma tran A");
		for (i=0;i<3;++i)
			for (j=0;j<2;++j)
				{
					printf("\na[%d][%d]= ",i,j);
					scanf("%f",&x);
					a[i][j]=x;
				}
		printf("\nNhap ma tran B");
		for (i=0;i<2;++i)
			for (j=0;j<4;++j)
				{
					printf("\nb[%d][%d]= ",i,j);
					scanf("%f",&x);
					b[i][j]=x;
				}
		printf("\nTinh ma tran tich c=a*b");
		for (i=0;i<3;++i)
			for (j=0;j<4;++j)
				{
					c[i][j]=0;
					for (k=0;k<2;++k)
						c[i][j]+=a[i][k]*b[k][j];
				}
		clrscr();
		printf("\n %10c IN KET QUA \n",'');
		printf("\n %10c Ma tran A \n",'');
		for (i=0;i<3;++i)
			for (j=0;j<2;++j)
				printf("%8.2f%c",a[i][j],j==1?'\n':'');
		printf("\n %10c Ma tran B \n",'');
		for (i=0;i<2;++i)
			for (j=0;j<4;++j)
				printf("%8.2f%c",b[i][j],j==3?'\n':'');
		printf("\n %10c Ma tran tich C=A*B \n",' ');
		for (i=0;i<3;++i)
			for (j=0;j<4;++j)
				printf("%8.2f%c",c[i][j],j==3?'\n':'');
		getch();
	}