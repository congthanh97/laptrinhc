#define MAX(x,y)	((x) < (y) ? (y) : (x))
main()
	{
		int a,b,i;
		a=10;
		b=20;
		clrscr();
		printf("\n           VI DU VE CHI THI #define");
		i=MAX(a,b);
		printf("\n\t-Tri lon nhat la: %2d",i);
		getch();
	}