/* Ma hoa dung XOR */
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>
void main()
{
  char chuoi[50000], khoa1[50000],khoa2[50000],c;
  int i,j,k, len,lenkhoa1,lenkhoa2;
  do
  {
  clrscr();
  printf("\nNhap vao chuoi can ma hoa : ");
  gets(chuoi);
  printf("Cho biet khoa : ");
  gets(khoa1);
  len = strlen(chuoi);
  for (i=0; i<len; i++)
    chuoi[i] ^= khoa1[i];
  clrscr();
  printf("\nChuoi da duoc ma hoa thanh : %s", chuoi);
  printf("\ncho biet mat ma de giai:");
  gets(khoa2);
  lenkhoa1=strlen(khoa1);
  lenkhoa2=strlen(khoa2);
  if(lenkhoa1!=lenkhoa2)
  { printf("sai mat ma!");
    getch();
    exit(1);
  }
  else
  for(i=0;i<lenkhoa1;i++)
     if(khoa2[i]!=khoa1[i])
     {
        printf("\nsai mat ma,khong giai ma duoc!");
        getch();
        exit(1);
     }
  printf("Nhan phim bat ky de giai ma.");
  getch();
  clrscr();
  for (i=0; i<len; i++)
    chuoi[i] ^= khoa1[i];
  printf("\nChuoi da duoc giai ma : %s", chuoi);
  printf("\nco tiep tuc nua khong?(c)");
  c=getch();
  }while(c=='c'||c=='C');
  getch();
}