main()
	{
		int i,tt;
		float a,b,c,r,dt;
		kk:clrscr();
		printf("\nCHUONG TRINH TINH DIEN TICH HINH HOC SO CAP");
		printf("\n    1-Hinh vuong");
		printf("\n    2-Hinh chu nhat");
		printf("\n    3-Hinh tam giac");
		printf("\n    4-Hinh thang");
		printf("\n    5-Hinh tron");
		printf("\nBam so (0) de thoat ");
		printf("\nNhap vao mot so tu 1 den 5 de tinh: ");
		scanf("%1d",&i);
		switch(i)
		  {
			case 0: goto thoat;
			case 1: goto hv;
			case 2: goto cn;
			case 3: goto tg;
			case 4: goto ht;
			case 5: goto tr;
			hv:printf("\n   CHUONG TRINH TINH DIEN TICH HINH VUONG");
				printf("\nCho biet canh hinh vuong = ");
				scanf("%f",&a);
				dt=a*a;
				printf("\nDien tich hinh vuong la : %8.2f",dt);
				printf("\n\n   Tiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&tt);
				if (tt==1)
					goto kk;
					break;
			cn:printf("\n   CHUONG TRINH TINH DIEN TICH HINH CHU NHAT");
				printf("\nCho biet chieu dai = ");
				scanf("%f",&a);
				printf("\nCho biet chieu rong = ");
				scanf("%f",&b);
				dt=a*b;
				printf("\nDien tich hinh chu nhat la : %8.2f",dt);
				printf("\n\n   Tiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&tt);
				if (tt==1)
					goto kk;
					break;
			tg:printf("\n   CHUONG TRINH TINH DIEN TICH HINH TAM GIAC");
				printf("\nCho biet canh day = ");
				scanf("%f",&a);
				printf("\nCho biet chieu cao = ");
				scanf("%f",&c);
				dt=a*c/2;
				printf("\nDien tich hinh tam giac la : %8.2f",dt);
				printf("\n\n   Tiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&tt);
				if (tt==1)
					goto kk;
					break;
			ht:printf("\n   CHUONG TRINH TINH DIEN TICH HINH THANG");
				printf("\nCho biet day dai = ");
				scanf("%f",&a);
				printf("\nCho biet day ngan = ");
				scanf("%f",&b);
				printf("\nCho biet chieu cao = ");
				scanf("%f",&c);
				dt=(a+b)*c/2;
				printf("\nDien tich hinh thang la : %8.2f",dt);
				printf("\n\n   Tiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&tt);
				if (tt==1)
					goto kk;
					break;
			tr:printf("\n   CHUONG TRINH TINH DIEN TICH HINH TRON");
				printf("\nCho biet ban kinh = ");
				scanf("%f",&r);
				dt=r*r*3.1416;
				printf("\nDien tich hinh thang la : %8.2f",dt);
				printf("\n\n   Tiep tuc (bam 1)/Cham dut (bam 0) ");
				scanf("%d",&tt);
				if (tt==1)
					goto kk;
			thoat:break;
		  }
	}
