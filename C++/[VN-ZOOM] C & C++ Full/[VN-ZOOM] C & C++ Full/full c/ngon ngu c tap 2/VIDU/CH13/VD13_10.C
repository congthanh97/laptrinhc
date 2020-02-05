
#define MAX 10
main()
	{
		clrscr();
		printf("\n\t VI DU VE CHI THI #undef...#endif");
		#ifdef MAX
			printf("\n\t+Ban da dinh nghia MAX= %d ",MAX);
		#undef MAX
			printf("\n\t+Ban da dinh nghia MAX= %d ",MAX);
		#endif
		printf("\n\t-Tam biet, hen gap lai");
		getch();
	}