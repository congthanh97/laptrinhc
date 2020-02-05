/* Khai bao va gan tri dau tien cho bien */
main()
	{
		int i,j=3,k; /* Chi co j duoc gan gia tri */
		float x=15;
		float y=1.2e-3; /* Mo ta so thuc o dang khoa hoc */
		char c1='A';
		char c2='\x41'; /* Mo ta ky tu bang tri ASCII o dang thap luc */
		long l1=123L; /* Hang 123 luu tru o dang long */
		double z1=.5E8;
		printf("KET QUA IN RA MAN HINH \n");
		printf("j=%d\n",j);
		printf("x=%f,y=%e\n",x,y);
		printf("c1=%x,c2=%c\n",c1,c2);
		printf("l1=%Ld,z1=%LE\n",l1,z1);
		getch();
	}