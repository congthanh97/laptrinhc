#include"stdio.h"
#include"stdlib.h"
#define Max 100
typedef struct
	{
		int x,y;
	}toa_do;
toa_do M[Max];
unsigned char k;
int r;
char tim_thay;
void khoi_tao()
	{
		randomize();
		for (k=0; k<Max; k++)
			{
				M[k].x = random(20)-10;
				M[k].y = random(20)-10;
			}
	}
void tim1()
	{
		tim_thay=0;
		puts("Cac diem tren mat phang thoa x + 2y > 3 :");
		for (k=0; k<Max; k++)
			if (M[k].x + 2 * M[k].y > 3)
				{
					tim_thay = 1;
					printf("( %2d\, %2d )",M[k].x, M[k].y);
				}
			if (tim_thay)
				puts("\n..la cac diem thoa x + 2y > 3");
			else
				puts("\nKhong co diem nao nhu vay");
	}
void tim2()
	{
		tim_thay=0;
		printf("-Nhap ban kinh R= ");
		scanf("%d",&r);
		printf("Cac diem tren vong tron tam O ban kinh %d :\n",r);
		for (k=0; k<Max; k++);
			if (M[k].x * M[k].x + M[k].y * M[k].y == r*r)
				{
					tim_thay=1;
					printf("( %2d\, %2d )",M[k].x, M[k].y);
				}
			if (tim_thay)
				printf("\n..la cac diem tren vong tron tam O ban kinh %d",r);
			else
				puts("\nKhong co diem nao nhu vay");
	}
main()
	{
		khoi_tao();
		tim1();
		tim2();
		printf("\n\t Bam phim bat ky de ket thuc");
		getch();
	}