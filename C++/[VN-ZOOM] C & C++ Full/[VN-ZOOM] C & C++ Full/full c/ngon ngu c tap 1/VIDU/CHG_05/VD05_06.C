main()
	{
		int i,k;
		tt:printf("\nNhap vao mot so nguyen = ");
		scanf("%d",&i);
		switch(i)
			{
				case 0:printf("\nSo khong");
					   break;
				case 1:
				case 2:printf("\nSo 1 hoac 2");
					   break;
				case 3:break; /* khong hien ra neu i=3 */
				case 4:break; /* khong hien ra neu i=4 */
				case 5:
				case 6:printf("\nSo 5 hoac 6");
					   break;
				default:printf("\nNhung so khac");
			}
		printf("\nTiep tuc (1/0)");
		scanf("%d",&k);
		if (k==1)
			goto tt;
	}