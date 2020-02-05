#include <stdio.h>
#include <conio.h>
#include <alloc.h>
typedef struct node
{
	int so_du;
	struct node *tiep;
}p_node;
p_node *top,*p;
void push(int n)
{
	p=(p_node*)malloc(sizeof(p_node));
	p->so_du=n;
	p->tiep=top;
	top=p;
}
void chuyen_co_so(int so,int co_so)
{
	top=NULL;
	while(so!=0)
	{
		push(so%co_so);
		so=so/co_so;
	}
}
void pop(int *m)
{
	p=top;
	*m=p->so_du;
	top=top->tiep;
	free(p);
}
void hien_ket_qua(int so,int co_so)
{
	int n;
	printf("\nso %d duoc doi sang co so %d la:   ",so,co_so);
	while(top!=NULL)
	{
		pop(&n);
		if(n<10) 
		printf("%d",n);
		else 
		printf("%c",n+55);
	}
	getch();
}
void main()
{
	int n,a;
	printf("Nhap so: ");
	scanf("%d",&n);
	chuyen_co_so(n,2);
	hien_ket_qua(n,2);
	chuyen_co_so(n,8);
	hien_ket_qua(n,8);
	chuyen_co_so(n,16);
	hien_ket_qua(n,16);
	getch();
}