#include<stdio.h>
/*void main()
{
 int i,j,k,n,p=1,q,r=1,s,t;
 clrscr();
 printf("Enter Lines To Be Printed....");
 scanf("%d",&n);
 s=p;t=r;
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=(n-i);j++)
  printf(" ");
  t=r;
  s=p;
  for(j=1;j<=i;j++)
  {
   if(j==1)
      printf("%d ",p);
   else
   {
     q=s+t;
     printf("%d ",q);
     t=s;
     s=q;
    }
  }
 }
 getch();
}*/



void main()
{
 int i,j,k,n,p=1,q,r=1,s,t,y;
 char c1='A',c2;
 clrscr();
 printf("Enter Lines To Be Printed....");
 scanf("%d",&n);
 if(n>7)
 {
   printf("\n\n Enter Range Upto Seven ");
   getch();
   exit(0);
 }
 s=p;t=r;
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=(n-i);j++)
  printf(" ");
  t=r;
  s=p;
  for(j=1;j<=i;j++)
  {
   if(j==1)
      printf("%c ",c1);
   else
   {
     q=s+t;
     c2=c1+q-1;
     printf("%c ",c2);
     t=s;
     s=q;
   }
  }
 }
getch();
}