char nhuan(nam)
	{
		if ( nam % 100 )
			return( !(nam % 4));
		else
			return( !(nam % 400));
	}

char kiemtra(ngay,thang,nam)
	{
		char f1,f2,f3;
		int f;
		f1=(ngay==30 && thang==2);
		f2=(ngay==29 && thang==2 && !nhuan(nam));
		f=(thang-2)*(thang-4)*(thang-6);
		f=f*(thang-9)*(thang-11);
		f3=(ngay==31 && !f);
		return !(f1 || f2 || f3);
	}

tieptuc()
	{
		char ch;
		printf("\nCo tiep tuc nua khong ? ( C/K )");
		ch=getch();
		ch=toupper(ch);
		return(ch-'K');
	}

main()
	{
		char tiep;
		int ngay,thang,nam;
		do
			{
				printf("\nCho biet can kiem tra ?");
				printf("\nNgay = ");
				scanf("%d",&ngay);
				printf("\nThang = ");
				scanf("%d",&thang);
				printf("\nNam = ");
				scanf("%d",&nam);
				if(kiemtra(ngay,thang,nam))
					printf("Ngay nay hop le");
				else
					printf("Ngay nay khong hop le");
				tiep=tieptuc();
			}
		while (tiep);
	}