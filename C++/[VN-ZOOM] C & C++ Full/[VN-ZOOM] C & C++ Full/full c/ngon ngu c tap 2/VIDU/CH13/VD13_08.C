
#define MAX 10
int k;
main()
	{
		clrscr();
		printf("\n\t VI DU VE CHI THI #ifdef...#endif");
		#ifdef MAX
			printf("\n\t+Ban da dinh nghia MAX");
			for (k=1; k< MAX; printf("\n-Khong co viec gi kho"), k++);
		#else
			printf("\n\t+Ban chua dinh nghia MAX");
		#endif
		printf("\n\t-Tam biet, hen gap lai");
		getch();
	}