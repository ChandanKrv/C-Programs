#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=0,n;
 clrscr();
 printf("enter the no. of lines u want 2 print    ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
  {
   printf("%d  ",k);
   k=-(k-1);
  }
 }
 getch();
}

