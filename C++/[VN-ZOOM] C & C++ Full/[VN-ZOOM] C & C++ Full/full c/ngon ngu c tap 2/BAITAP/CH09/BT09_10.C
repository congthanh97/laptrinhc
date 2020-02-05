#include"conio.h"
#include"alloc.h"
#define nhonhat(a,b) ((a) > (b) ? (b) : (a))
char *trich(char *nguon, char vitri, char so)
	{
		char k,*chuoi;
		so=nhonhat(so,strlen(nguon));
		chuoi=malloc(so+1);
		if (chuoi == NULL)
			return(" ");
		for (k=0; k<so && nguon[k+vitri-1];k++)
			chuoi[k]=nguon[k+vitri-1];
		chuoi[k]='\0';
		return(chuoi);
	}
main()
	{
		int m,n;
		char *s;
		s=calloc(100,sizeof(char));
		clrscr();
		textcolor(YELLOW);
		cprintf("\n - Nhap vao 1 chuoi :");
		gets(s);
		textcolor(LIGHTRED);
		cprintf("\r - Muon trich tu vi tri nao : ");
		scanf("%d",&m);
		textcolor(LIGHTGREEN);
		cprintf("\r - Muon trich bao nhieu ky tu : ");
		scanf("%d",&n);
		textcolor(LIGHTRED);
		cprintf("\n\r**********************************");
		textcolor(YELLOW);
		cprintf("\n\n\r     + Chuoi nguon la :");
		textcolor(LIGHTCYAN);
		cprintf("\n\r %s",s);
		textcolor(LIGHTRED);
		cprintf("\n\n\r     + Chuoi trich la : ");
		textcolor(LIGHTMAGENTA);
		cprintf("\n\r %s",trich(s,m,n));
		textcolor(LIGHTCYAN + BLINK);
		cprintf("\n\n\r * Bam phim bat ky de ket thuc");
		getch();
	}
