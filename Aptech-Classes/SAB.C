#include<stdio.h>
#include<conio.h>
int binary(int);
void main()
{
  int num;
  clrscr();
  printf("\n enter any number :-");
  scanf("%d",&num);
  binary(num);
  getch();
}
int binary(int n)
{
 int r;
 r=n%2;
 n=n/2;
 if(n==0)
 {
  printf("\n the binary equivalent is:-%d",r);
  return(r);
 }
 else
 {
  binary(n);
  printf("%d",r);
 }
 return(r);
}

