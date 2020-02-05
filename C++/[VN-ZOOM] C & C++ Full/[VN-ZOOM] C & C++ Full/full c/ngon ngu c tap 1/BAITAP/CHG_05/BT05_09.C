

 main()
   {
	  int nam,n;
	  tt:clrscr();
	  printf("\nCHUONG TRINH TINH NAM NHUAN");
	  printf("\nCho biet nam can tinh (?) : ");
	  scanf("%4d",&nam);
	  switch (nam % 4)
	  {
		case 0:printf("\nNam %4d ",nam);
				printf("La nam nhuan");
				printf("\n\nTiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&n);
				if (n==1)
					goto tt;
					break;
		case 1:printf("Nam ngoai tuc la nam %4d ",nam-1);
				printf("Moi la nam nhuan ");
				printf("\n\nTiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&n);
				if (n==1)
					goto tt;
					break;
		case 2:printf("Hai nam ve truoc (tuc nam %4d) moi la nam nhuan ",nam-2);
				printf("\n\nTiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&n);
				if (n==1)
					goto tt;
					break;
		default:printf("Nam toi (tuc nam %4d) moi la nam nhuan",nam+1);
		printf("\n\nTiep tuc (bam 1)/Cham dut (bam 0) ");
		scanf("%d",&n);
		if (n==1)
			goto tt;
			break;
	  }
   }
