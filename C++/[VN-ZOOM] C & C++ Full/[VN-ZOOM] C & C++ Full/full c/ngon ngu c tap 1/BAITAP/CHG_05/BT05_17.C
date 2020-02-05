/* Chuong trinh dem chu,so tu va so dong khi nhap tu ban phim */
/*Bam phim ESC khi ket thuc nhap lieu */
#define ESC 27
#define TRUE 1
#define FALSE 0
main()
  {
    unsigned char word=0,letters=0,lines=0;
    char c,inword=FALSE;
    puts("");
    clrscr();
    printf("\nHay nhap cac ky tu,bam phim ESC de ngung\n");
    while((c=getche()) !=ESC)
      {
		if (c==13)
			{
				lines++;
				puts("");
			}
		if (c==32 || c==13 || c=='\t')
			 inword=FALSE;
		else
			{
				letters++;
				if(inword==FALSE)
					{
						inword=TRUE;
						word++;
					}
			}
	  }
	printf("\nThong bao cac so lieu thong ke");
	printf("\n+Tong so chu la =%d",letters);
	printf("\n+Tong so tu la = %d",word);
	printf("\n+Tong so dong la =%d",lines+1);
	getch();
  }