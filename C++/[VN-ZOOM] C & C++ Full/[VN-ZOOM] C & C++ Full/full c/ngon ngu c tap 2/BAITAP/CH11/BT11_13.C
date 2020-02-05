#include"stdio.h"
main()
	{
		FILE *fp;
		char hs[100];
		int n,i;
		fp=fopen("hocsinh.dbf","w");
		clrscr();
		printf("\nNHAP VA IN DANH SACH HOC SINH");
		printf("\n-Can nhap bao nhieu hoc sinh: ");
		scanf("%d",&n);
		for (i=0; i<= n; ++i)
			{
				printf("\n+Nguoi thu: %d = ",i);
				gets(hs);
				fputs(hs,fp);
				putc('\n',fp);
			}
		fclose(fp);
		fp=fopen("hocsinh.dbf","r");
		fprintf(stdprn,"\nDANH SACH HOC SINH");
		fprintf(stdprn,"\n------------------");
		for (i=0; i<=n; i++)
			{
				fgets(hs,50,fp);
				puts(hs);
				fputs(hs,stdprn);
			}
		fclose(fp);
	}
