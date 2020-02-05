#include<stdio.h>
main()
	{
		int c;
		/* In ra cau hoi va 4 cau tra loi */
		clrscr();
		tt:printf("\n\nAi la nguoi da de xuat ra ngon ngu Turbo C");
		printf("\n\nA)-Brian Kernighan ?\nB)-Ken Thompson ?");
		printf("\nC)-Dennis Ritchie ?\nD)-Niklau Wirth ?");
		printf("\n\nHay go vao cau tra loi tu aA den dD ");
		/*Cho nhan mot ky tu va kiem tra de thong bao */
		scanf("%d",&c);
		switch (c=getchar())
		  {
			case 'A':
			case 'a':
			case 'B':
			case 'b':
			case 'D':
			case 'd':printf("     *****************************");
				printf("\n     * Ban tra loi khong dung  ! *\n");
				printf("\     *****************************");
				goto tt;
			case 'C':
			case 'c': printf("     *************************");
				printf("\n     * Ban da tra loi dung ! *\n");
				printf("\     *************************");
				break;
			case'\n':break;
				default:printf("   Chi tra loi tu A den D thoi !");
			break;
		  }
		getch();
	}