#include<alloc.h>
#include<string.h>
char *chen(char *dich, char *nguon, char vitri)
	{
		char k,l,*chuoi;
		if (vitri > strlen(nguon+1))
			return(strcat(nguon,dich));
		chuoi=malloc(strlen(nguon)+strlen(dich)+1);
		for (k=0;k<vitri-1;k++)
			chuoi[k]=nguon[k];
		for (;dich[k-vitri+1];k++)
			chuoi[k]=dich[k-vitri+1];
		for (l=vitri-1;nguon[l];)
			chuoi[k++]=nguon[l++];
		chuoi[k]='\0';
		return(chuoi);
	}

main()
	{
		char *s;
		int m,n;
		s=calloc(100,sizeof(char));
		clrscr();
		printf("\nNhap vao mot chuoi : ");
		gets(s);
		printf("\nMuon chen ky tu trong vao vi tri nao : ");
		scanf("%d",&m);
		clrscr();
		printf("\nChuoi nguon la : %s ",s);
		printf("\nChuoi sau khi chen la : ");
		s=chen(" ",s,m);
		puts(s);
		getch();
	}