#include"stdio.h"
main()
	{
		int a,b,c;
		long x,y,z;
		double s,t,u,v;
		clrscr();
		printf("\nSU DUNG DAC TA LOAI SO\n");
		printf("\n\t-Nhap vao a b c: ");
		scanf("%d%o%x",&a,&b,&c);
		printf("\n\t- Nhap vao x y z: ");
		scanf("%ld%lo%lx",&x,&y,&z);
		printf("\n\t- Nhap vao s t u v: ");
		scanf("%lf%le%lf%le",&s,&t,&u,&v);
		printf("\n\t  a=%4d",a);
		printf("\n\t  b=%4d",b);
		printf("\n\t  c=%4d",c);
		printf("\n\t  x=%10ld",x);
		printf("\n\t  y=%10ld",y);
		printf("\n\t  z=%10ld",z);
		printf("\n\t  s=%10.2e",s);
		printf("\n\t  t=%10.2e",t);
		printf("\n\t  u=%10.2g",u);
		printf("\n\t  v=%10.2g",v);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
