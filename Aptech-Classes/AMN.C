#include <stdio.h>
void main()
{
int p,q;
float x;
float a=0;
float b=0;
float c=0;
int bas[25];
for(p=0;p<=4;p++)
{
printf("\nEnter the basic pay of the employee of com1");
scanf("%d",&bas[p]);
a=(a+bas[p]);
}
printf("\nThe Total Value of Amount is=Rs%f",a);
getch();
for(q=0;q<=4;q++)
{
printf("\nEnter the basic pay of the employee of com2");
scanf("%d",&bas[q]);
b=(b+bas[q]);
}
printf("\nThe Total Value of Amount is=Rs%f",b);
getch();
c=(a+b);
printf("\nThe total value of Amount of two companies is=Rs%f",c);
getch();
x=(c>70000?.15:.20);
printf("\nThe Basic Percentage is=%f",x);
getch();
}