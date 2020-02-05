/* Bai tap 1_12 - Chuong trinh Piano don gian */
#include <stdio.h>
#include <dos.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char c;
  clrscr();
  printf("\nNhan cac phim A, B, C, D, E, F, G, H, J, K de choi cac not nhac.");
  printf("\nNhan phim ESC de ket thuc.");
  do {
    c = toupper(getch());
    switch(c)
    {
      case 'A' : sound(440);
                 break;
      case 'B' : sound(494);
                 break;
      case 'C' : sound(333);
                 break;
      case 'D' : sound(587);
                 break;
      case 'E' : sound(659);
                 break;
      case 'F' : sound(750);
                 break;
      case 'G' : sound(510);
                 break;
      case 'H' : sound(850);
                 break;
      case 'J' : sound(920);
                 break;
      case 'K' : sound(1010);
                 break;
    }
    delay(500);
    nosound();
  } while (c != 27);
}
