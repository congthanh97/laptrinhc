
  /* Chuong trinh tim uoc so chung lon nhat cua 2 so */

main()
  {
    int a,b;
    char key;
    clrscr();
    printf("\n\rChuong trinh tim uoc so chung lon nhat cua 2 so ");
    do
      {
			printf("\n\rNhap so thu nhat a = ");
			scanf("%d",&a);
			printf("\n\rNhap so thu hai b = ");
			scanf("%d",&b);
			printf("\n\rUoc so chung lon nhat cua %d va %d la: ",a,b);
			while (a!=b)     /* vong while nay long trong do... while */
			  {
				 if(a>b)
					 a=a-b;
				 else
					 b=b-a;
			  }
			printf("%d",a);
			printf("\nBam phim bat ky de tiep tuc,bam phim ESC de ngung");
			key=getch();
      }
	 while (key!=27)
	 ; 			/* lenh rong */
  }
