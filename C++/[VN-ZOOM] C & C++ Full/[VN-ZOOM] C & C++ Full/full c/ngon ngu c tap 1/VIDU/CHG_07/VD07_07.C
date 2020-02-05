

#include"conio.h"
#define MAX 3
main()
{
  int a[MAX][MAX];
  int b[MAX][MAX];
  int c[MAX][MAX];
  int i,j,k,s;
  textmode(C40);
  textbackground(BLUE);
  clrscr();
  nhap(a,'a');
  nhap(b,'b');
  clrscr();
  textcolor(WHITE);
  hienthi(a,'a');
  textcolor(YELLOW);
  hienthi(b,'b');
  for (i=0;i<MAX;i++)
    for (j=0;j<MAX;j++)
      for(k=0,c[i][j]=0;k<MAX;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
  textcolor(GREEN);
  hienthi(c,'c');
}
nhap(int v[][MAX],char chu)
{
  int i,j;
  for(i=0;i<MAX;i++)
    {
     for(j=0;j<MAX;j++)
       {
			cprintf("Phan tu %c[%d\,%d]=",chu,i+1,j+1);
			cscanf("%d",&v[i][j]);
			cprintf("\n\r");
       }
	 cprintf("\n\r");
    }
}
hienthi(int v[][MAX],char chu)
{
  int lx,ly,mid,i,j;
  ly=wherey();
  mid=wherey()+MAX/2+1;
  gotoxy(5,mid);
  cprintf("%c=",chu);
  for(i=0;i<MAX;i++)
    {
      gotoxy(10,ly+i+1);
		if(i==0)
			putch(201);
		else
			if (i==MAX-1)
				 putch(200);
			else
				putch(186);
		for(j=0;j<MAX;j++)
			cprintf("%4d",v[i][j]);
		cprintf("  ");
		if (i==0)
			 putch(187);
		else
			 if (i==MAX-1)
				 putch(188);
			 else
				 putch(186);
	 }
}