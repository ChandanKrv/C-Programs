#include<stdio.h>
void main()
{
  int n,i,b,a,q,r,x;
   b=0;
   a=10;
   clrscr();
   printf("Enter the number");
   scanf("%d",&n);
   while(n==0)
   {
     n=x,
     r=n%a;
     q=n/a;
     b=b*10;
     b=r+b;
     q=n;
   }
     if(b==x)
     {
      printf("The number is palindrome");
     }
     else
     {
      printf("The number is not palindrome");
     }
     getch();
}