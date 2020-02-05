long int gtdq(n)
int n;
	{
		if (n==1 || n==0)
			return(1);
		else
			return(n*gtdq(n-1));
	}

main()
	{
		long gtdq();
		int n;
		tt:printf("\nTinh giai thua cua n= ");
		scanf("%d",&n);
		printf("\nNeu n=%3d,thi n! = %8ld",n,gtdq(n));
		printf("\nTiep tuc (1), dung (0)");
		scanf("%d",&n);
		if (n==1)
			goto tt;
	}