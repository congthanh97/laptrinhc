void bo_nho(long int dia_chi)
	{
		char far *px;
		int t;
		px=(char far *) dia_chi;
		for ( t=0;;t++,px++ )
			{
				if (t%8==0)
					puts(" ");
				printf(" %4x ",*px);
				if ( kbhit() )
					return;
			}
	}
main()
	{
		unsigned long int bat_dau;
		printf("\nNhap vao mot dia chi : ");
		scanf("%ld",&bat_dau);
		bo_nho(bat_dau);
		getch();
	}