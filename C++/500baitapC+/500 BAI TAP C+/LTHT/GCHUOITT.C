/* Ghi chuoi co thuoc tinh */
#include <stdio.h>
#include <dos.h>
#include <conio.h>

char far *video = (char*)MK_FP(0xB800, 0);
void writestring(int x, int y, char *s, char attribute)
{
  unsigned offset, i=0;
  offset = y*160 + x*2;
  while (s[i] != 0)
  {
    video[offset] = s[i];
    video[offset+1] = attribute;
    offset += 2;
    i++;
  }
}

void main()
{
   char string[] = "Xin chao tat ca cac ban Hello World!";
   writestring(10, 10, string, 0x14);
   getch();
}