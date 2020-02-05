long int gt(n)
int n;
	{
		int s=1,i;
		if (n==0 || n==1)
			return(1);
		else
			{
				for (i=1;i<=n;++i)
					s*=i;
				return(s);
			}
	}

main()
	{
		long gt();
		int n;
		tt:printf("\nTinh giai thua cua n= ");
		scanf("%d",&n);
		printf("\nNeu n=%3d,thi n! = %8ld",n,gt(n));
		printf("\nTiep tuc (1), dung (0)");
		scanf("%d",&n);
		if (n==1)
			goto tt;
	}