#include<stdio.h>
void main()
{
char nm[5];
int  pa[5],i,n;
float pr[5];
clrscr();
printf("\n\t\tEnter The Number Of Books.....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\t\tEnter The Name....");
scanf("%s",nm[i]);
printf("\t\tEnter The Page Number....");
scanf("%d",&pa[i]);
printf("\t\tEnter The Price.....");
scanf("%f",&pr[i]);
}
clrscr();
for(i=1;i<=n;i++)
{
printf("\n\t\tAddress of name is...%u",&nm[i]);
printf("\n\t\tAddress of page number is...%u",&pa[i]);
printf("\n\t\tAddress of price is....%u",&pr[i]);
}
getch();
}