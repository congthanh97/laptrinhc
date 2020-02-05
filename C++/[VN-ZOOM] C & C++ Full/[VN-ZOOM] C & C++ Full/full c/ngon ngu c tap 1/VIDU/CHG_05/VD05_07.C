main()
	{
		int i=10;
		clrscr();
		while (1) /* dieu kien luon luon dung */
			{
				if (!--i)
					break;
				printf("\i=%d\n",i);
			}
		getch();
	}