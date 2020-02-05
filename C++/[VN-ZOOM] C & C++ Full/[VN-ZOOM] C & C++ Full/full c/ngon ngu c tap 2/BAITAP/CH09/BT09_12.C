#include"conio.h"
#include"alloc.h"
void xoa(char *nguon, char vitri, char so)
	{
		char k;
		for (k=vitri-1;nguon[k+so];k++)
			nguon[k]=nguon[k+so];
			nguon[k]='\0';
	}
main()
	{
		int m,n;
		char *s;
		s=calloc(100,sizeof(char));
		clrscr();
		textcolor(YELLOW);
		cprintf("\n - Nhap vao mot chuoi :");
		gets(s);
		textcolor(LIGHTRED);
		cprintf("\r - Muon xoa tu vi tri nao : ");
		scanf("%d",&m);
		textcolor(LIGHTMAGENTA);
		cprintf("\r- Muon xoa bao nhieu ky tu : ");
		scanf("%d",&n);
		textcolor(LIGHTRED);
		cprintf("\n\r**********************************");
		textcolor(YELLOW);
		cprintf("\n\n\r     + Chuoi nguon la :");
		textcolor(LIGHTCYAN);
		cprintf("\n\r %s",s);
		textcolor(LIGHTGREEN);
		cprintf("\n\r     + Chuoi nguon dai :%d ky tu",strlen(s));
		textcolor(LIGHTRED);
		cprintf("\n\r     + Sau khi xoa con lai chuoi : ");
		xoa(s,m,n);
		textcolor(LIGHTMAGENTA);
		cprintf("\n\r %s",s);
		textcolor(LIGHTGREEN);
		cprintf("\n\r     + Chieu dai la : %d ky tu",strlen(s));
		textcolor(LIGHTCYAN);
		cprintf("\n\n\r * Bam phim bat ky de ket thuc");
		getch();
	}
