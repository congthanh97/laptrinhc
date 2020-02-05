main()
	{
		float diem;
		printf("\nCho biet diem trung binh = ");
		scanf("%f",&diem);
		if (diem>=5)
			if (diem <=6.5)
				printf("\nTrung binh");
			else
				if (diem <=8.5)
					printf("\nKha");
				else
					if (diem <=9.5)
						printf("\nGioi");
					else
						printf("\nXuat sac");
		else
			printf("\nThi lai");
		getch();
	}