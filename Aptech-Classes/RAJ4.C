#include <stdio.h>
void main()
{
int x[7]={200,300,400,500,600,848,545},val, i;
clrscr();
/*for(i=0;i<5;i++)
{
printf("\nval is :");
scanf("%d",&val);
if(val>=400)
x[i]=val*.20;
else
x[i]=val*.30;
} */
for(i=6;i>=0;i--)
printf("\nresult=%d",x[i]);
getch();
printf("\n%u\t%u\t%u",&x[1],x,&x);
getch();
}