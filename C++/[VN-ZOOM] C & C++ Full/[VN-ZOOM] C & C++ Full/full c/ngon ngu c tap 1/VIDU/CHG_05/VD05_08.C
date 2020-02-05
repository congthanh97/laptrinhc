main()
	{
		int nam;
		clrscr();
		printf("\nCho biet nam can xem = ");
		scanf("%d",&nam);
		switch(nam % 4)
			{
				case 0:printf("\nNam %4d ",nam);
					   printf("\nLa nam nhuan");
					   break;
				case 1:printf("\nNam ngoai %4d ",nam-1);
					   printf("\nMoi la nam nhuan");
					   break;
				case 2:printf("\nNam kia %4d ",nam-2);
					   printf("\nMoi la nam nhuan");
					   break;
				default:printf("\nSang nam %4d ",nam+1);
					   printf("\nMoi la nam nhuan");
					   break;
			}
		getch();
	}
