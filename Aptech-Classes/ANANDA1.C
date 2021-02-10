#include<stdio.h>
void main()
{
 int i,j,k,l=1,n;
 clrscr();
 printf("enter lines   ");
 scanf("%d",&n);
 fflush(stdin);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=(n-i);j++)
  printf(" ");
  for(j=1;j<=i;j++)
  {
   if(j==1||j==i)
   printf("%d ",l);
   else
   printf("%d ",(i-1));
  }
 }
 getch();
}