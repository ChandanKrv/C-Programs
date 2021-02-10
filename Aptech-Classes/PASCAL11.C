#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,p[10][10];
clrscr();
printf("\n enter the upper limit :- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
p[i][j]=p[i-1][j-1]+p[i-1][j];
}
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("\t%d",p[i][j]);
}
printf("\n");
}
getch();
}