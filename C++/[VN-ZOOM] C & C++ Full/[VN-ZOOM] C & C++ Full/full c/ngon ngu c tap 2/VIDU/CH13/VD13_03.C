#define BIEU_THUC(x,y)	x * y
main()
	{
		int a,b,c,d;
		b=10;
		c=20;
		d=5;
		clrscr();
		printf("\n           VI DU VE CHI THI #define");
		a=BIEU_THUC(b,c+d);
		printf("\n\t-Tri cua a= %2d",a);
		getch();
	}