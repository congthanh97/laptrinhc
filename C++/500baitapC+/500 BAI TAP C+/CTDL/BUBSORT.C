/* Cai dat thuat toan Bubble Sort */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10
int temp,mang[MAX];

void in_mang(int *mang)
{
  int i;
  for (i=0; i<MAX; i++)
    printf("%d ", mang[i]);
}

void bubblesort1()
{
  int i, j, x;
  for (i=1; i< MAX; i++)
    for (j=MAX-1; j>=i; j--)
    {
      if (mang[j-1] > mang[j])
      {
        x = mang[j-1];
        mang[j-1] = mang[j];
        mang[j] = x;
      }
    }
}

void bubblesort2()
{
  int i, j, x;
  for (i=1; i< MAX; i++)
    for (j=MAX-1; j>=i; j--)
    {
      if (mang[j-1] < mang[j])
      {
        x = mang[j-1];
        mang[j-1] = mang[j];
        mang[j] = x;
      }
    }
}

void main()
{
  int i;
  clrscr();
  randomize();
  for (i=0; i<MAX; i++)
    mang[i] = random(100);
  printf("\nTruoc khi sap : ");
  in_mang(mang);
  printf("\n1:tang dan");
  printf("\n2:giam dan");
  printf("\nChon kieu sap xep:");
  scanf("%d",&temp);
  if(temp==1)
  {
    bubblesort1();
    printf("\nSau khi sap : ");
    in_mang(mang);
  }
  else
  {
    bubblesort2();
    printf("\nSau khi sap : ");
    in_mang(mang);
  }
  getch();
}