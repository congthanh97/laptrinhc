
	/* Hay du du doan ket qua truoc khi chay chuong trinh */
	main()
  {
	 int x=10,y=11;
	 clrscr();
    printf("\nKhi x=10 va y=11 thi gia tri cua");
    printf("\n\n x-- * ++y\n x-- - --y\n x++ + ++y\n");
    printf("\n\n se la :\n");
    printf("\n%10d",x-- * ++y);
    printf("\n%10d",x-- - --y);
    printf("\n%10d",x++ + ++y);
    getch();
  }