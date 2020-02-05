/* Truyen bang tri */
void Hoanvi(a,b)
{
  int Tam;
  Tam=a;
  a=b;
  b=Tam;
}
main()
{
  int a,b;
  printf("\nNhap so thu nhat : ");
  scanf("%d",&a);
  printf("\nNhap so thu hai : ");
  scanf("%d",&b);
  Hoanvi(a,b);
  printf("\nSau khi hoan vi,so thu nhat = %d ",a);
  printf("\nCo so thu hai = %d ",b);
  getch();
}