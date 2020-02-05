float lon_nhat(f,g,x)
float x,(*f)(),(*g)();
	{
		return((*f)(x) > (*g)(x) ? (*f)(x):(*g)(x));
	}

float binh_phuong(x)
float x;
	{
		return(x*x);
	}

float lap_phuong(x)
float x;
	{
		return(x*x*x);
	}

#include<stdio.h>
main()
	{
		int c;
		float lon_nhat(),binh_phuong(),lap_phuong(),x;
		tt:printf("\nNhap gia tri X = ");
		scanf("%f",&x);
		printf("\n\nX=%4.1f Binh phuong =%6.1f Lap phuong =%7.1f",
			x,binh_phuong(x),lap_phuong(x));
		printf("\nSo lon nhat{x*x,x*x*x}=%7.1f",lon_nhat(binh_phuong,lap_phuong,x));
		printf("\n\nBam so 1 de tiep tuc,so 0 de dung ");
		scanf("%d",&c);
		if (c==1)
			goto tt;
	}