double luythua(float x,int n)
	{
		if (n)
			return(x*luythua(x,--n));
		else
			return 1;
	}

main()
	{
		float x;
		int n;
		clrscr();
		printf("\nNhap so can tinh luy thua : ");
		scanf("%f",&x);
		printf("\nNhap luy thua : ");
		scanf("%d",&n);
		printf("\n\t%8.2f luy thua %d la : %lg ",x,n,luythua(x,n));
		getch();
	}
