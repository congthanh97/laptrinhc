
#define Ty 10
main()
	{
		clrscr();
		printf("\n\t VI DU VE CHI THI #ifdef...#ifndef");
		#ifdef Ty
			printf("\n\t-Xin chao ban Ty");
		#else
			printf("\n\t-Xin chao tat ca moi nguoi");
		#endif
		#ifndef Teo
			printf("\n\t-Xin chao ban Teo");
		#endif
		getch();
	}