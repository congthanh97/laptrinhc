		 /* Chuyen ky tu tu aA-fF sang ky so he 16 */
						  /* Cau truc else if */
	main()
	{
		 char c,k;
		 clrscr();
		 printf("\nHay nhap mot ky tu tu aA den fF : ");
		 scanf("\n%c",&c);
		 clrscr();
		 if (c >='0' && c<='9')
			k=c-'0';
		 else if (c>='A' && c<='F')
			k=c-'A'+10;
			else if (c>= 'a' && c<= 'f')
				k=c-'a'+10;
			else
				k=0;
		 printf("\nNeu ban nhap vao ky tu la :%c\n",c);
		 printf("\nLa ky so thu : %d cua he 16",k);
		 getch();
	}