#define MAX 100
main()
	{
		clrscr();
		printf("\n\t VI DU VE CHI THI #if...#else ...#endif");
		#if MAX > 120
			printf("\n\t-Tri cua MAX la dung");
		#else
			printf("\n\t-Tri cua MAX la sai");
		#endif
		getch();
	}