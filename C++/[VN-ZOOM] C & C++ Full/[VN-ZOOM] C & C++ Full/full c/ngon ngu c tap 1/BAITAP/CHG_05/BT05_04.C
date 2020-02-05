		/* Cau truc if long nhau */

	main()
	{
		int gio,gio1,phut,phut1,giay,giay1,them,t;
		tt:clrscr();
		gio=0;
		phut=0;
		giay=0;
		them=0;
		printf("\nCHUONG TRINH TINH THOI GIAN");
		printf("\n-Cho biet gio  : ");
		scanf("%2d",&gio);
		gio1=gio;
		printf("-Cho biet phut : ");
		scanf("%2d",&phut);
		phut1=phut;
		printf("-Cho biet giay : ");
		scanf("%2d",&giay);
		giay1=giay;
		printf("-Cho biet giay muon them vao : ");
		scanf("%2d",&them);
		if ((giay+them) < 60)
			giay=giay+them;
		else
			{
				giay=giay+them-60;
				phut=phut+1;
				if (phut >=60)
					{
						phut=phut-60;
						gio=gio+1;
					}
			}
		printf("\n*Luc dau la %2d : %2d : %2d ",gio1,phut1,giay1);
		printf("\n*Neu ban cong them    : %2d giay ",them);
		printf("\n*Gio moi la= %2d : %2d : %2d ",gio,phut,giay);
		printf("\n\n   Tiep tuc (bam so 1) / Cham dut (bam so 0) ");
		scanf("%d",&t);
		if (t==1)
			goto tt;
	}