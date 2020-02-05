
/* Truy xuat cau truc bang con tro */
struct tm
	{
		int gio;
		int phut;
		int giay;
	};
main()
	{
		struct tm thoigian;
		thoigian.gio=0;
		thoigian.phut=0;
		thoigian.giay=0;
		for (;;)
			{
				cap_nhat(&thoigian);
				hien_thi(&thoigian);
			}
	}
cap_nhat(t)
struct tm *t;
	{
		t->giay++;
		if (t->giay==60)
			{
				t->giay=0;
				t->phut++;
			}
		if (t->phut==60)
			{
				t->phut=0;
				t->gio++;
			}
		if (t->gio==24)
			t->gio=0;
			tri_hoan();
	}
hien_thi(t)
	struct tm *t;
		{
			printf("%d:",t->gio);
			printf("%d:",t->phut);
			printf("%d:\n",t->giay);
		}
tri_hoan()
	{
		long int t;
		for (t=1;t<128000;++t);
	}