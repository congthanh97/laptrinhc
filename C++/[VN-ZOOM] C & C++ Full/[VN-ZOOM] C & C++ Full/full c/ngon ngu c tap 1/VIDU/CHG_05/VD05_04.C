main()
	{
	int ma,k;
	tt:printf("\nCho biet ma truong = ");
	scanf("%d",&ma);
	if (ma==1)
		printf("\nDai hoc Tai Chanh 297 Nguyen Tri Phuong,Quan 10");
	else if (ma==2)
		printf("\nDai hoc Kinh Te 59c Nguyen Dinh Chieu,Quan 3");
	else if (ma==3)
		printf("\nDai hoc Tong Hop 227 Nguyen Van Cu,Quan 5");
	else if (ma==4)
		printf("\nDai hoc Bach Khoa 268 Ly Thuong Kiet,Quan 10");
	else if (ma==5)
		printf("\nDai hoc Mo ban cong 97 Vo Van Tan,Quan 3");
	else if (ma==6)
		printf("\nDai hoc Su Pham 280 An Duong Vuong,Quan 5");
	else
		printf("\nGo sai ma ");
		printf("\n Tiep tuc hoac dung (1/0)");
		scanf("%d",&k);
		if (k==1)
			goto tt;
	}