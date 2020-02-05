	/* Phep chia chi la phep tru */
	main()
		{
			int schia,sbchia,sluu,sthuong,sdu;
			clrscr();
			printf("\nCho biet so bi chia : ");
			scanf("%d",&sbchia);
			printf("\nCho biet so chia : ");
			scanf("%d",&schia);
			sluu=sbchia;
			sthuong=0;
			while ( schia<=sbchia )
				{
					sbchia=sbchia-schia;
					sthuong=sthuong+1;
				}
			sdu=sbchia;
			printf("\nNeu dem so : %d chia cho : %d ",sluu,schia);
			printf("\nThuong so la : %d ",sthuong);
			printf("\nSo du la : %d ",sdu);
			getch();
		 }
