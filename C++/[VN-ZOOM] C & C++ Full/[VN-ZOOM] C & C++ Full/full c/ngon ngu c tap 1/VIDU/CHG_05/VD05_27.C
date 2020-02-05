/* Chuong trinh 2 */
main()
	{
		int so,tong=0,n=0;
		float tb;
		clrscr();
		do
			{
				printf("\nNhap vao mot so ( so 0 de dung ) ");
				scanf("%d",&so);
				tong+=so;
				n+=1;
			}
		while (so != 0);
		n-=1;
		tb=tong/n;
		printf("\nBan da nhap vao : %2d so ",n);
		printf("\nTrung binh cong = %8.2f ",tb);
		getch();
	}