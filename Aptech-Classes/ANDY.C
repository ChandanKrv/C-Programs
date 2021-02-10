#include<stdio.h>
#include<conio.h>
main()
{
 int p,n,i,j,k,val=65;

 printf("Enter Value    ");
 scanf("%d",&n);
 printf("\n\n");
 for(i=1;i<=n;i++)
  {
  printf("%c",val);
  getch();
  val++;
  }
 val--;
 for(i=1;i<n;i++)
  {
  val--;
  printf("%c",val);
  getch();
  }
p=(n-1);
for(i=p;i>=1;i--)
{
 printf("\n");
 val=65;
 for(j=1;j<=i;j++)
 {
  printf("%c",val);
  getch();
  val++;
 }
  for(j=1;j<=(2*(p-i)+1);j++)
  {
  printf(" ");
  }
 for(j=1;j<=i;j++)
 {
  val--;
  printf("%c",val);
  getch();
  }
}
}
