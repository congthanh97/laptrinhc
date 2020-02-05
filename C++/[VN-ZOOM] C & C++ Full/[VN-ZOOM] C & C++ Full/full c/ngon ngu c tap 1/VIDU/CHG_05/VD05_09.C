float a[][4]={
				{25,0,-3,5},
				{-4,4,0,-2},
				{30,-4,7,-3}
			 };
main()
	{
		int i,j,k=0;
		float s=0,max=0;
		for (i=0;i<3;++i)
			for (j=0;j<4;++j)
				{
					if (a[i][j]<0)
						continue;
						s+=a[i][j];
						if (max < a[i][j])
							max=a[i][j];
						if (a[i][j] > 0)
							++k;
				}
		printf("\nSo phan tu duong la = %d",k);
		printf("\nTong cac phan tu duong la =%8.2f",s);
		printf("\nPhan tu duong lon nhat la =%8.2f",max);
		getch();
	}