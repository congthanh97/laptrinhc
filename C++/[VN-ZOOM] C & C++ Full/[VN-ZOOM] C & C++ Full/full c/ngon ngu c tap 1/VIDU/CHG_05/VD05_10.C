main()
	{
		int i,k;
		tt:clrscr();
		printf("\nNhap vao mot so nguyen = ");
		scanf("%d",&i);
		switch(i)
			{
				case 0:printf("\nXin chao quy ba");
					   break;
				case 1:printf("\nXin chao quy ong");
					   break;
				case 2:printf("\nXin chao quy co");
					   break;
				case 3:printf("\nXin chao quy cau");
					   break;
				default:printf("\nXin chao moi nguoi");
			}
		printf("\nTiep tuc nua hay khong ?");
		printf("\nBam so (1) de tiep tuc,so (0) de dung ");
		scanf("%d",&k);
		if (k==1)
			goto tt;
	}