#define MAX 10
main()
	{
		clrscr();
		printf("\n\t VI DU VE CHI THI #error");
		#ifdef MAX
		#error
			printf("\n\t+Ban da dinh nghia MAX= %d ",MAX);
		#endif
		printf("\n\t-Tam biet, hen gap lai");
		getch();
	}