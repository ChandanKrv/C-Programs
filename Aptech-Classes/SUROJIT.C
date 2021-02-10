#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float);
float fx1(float);
void main()
{
float a,b;
clrscr();
printf("\n enter the point:");
scanf("%f",&a);
while(1)
{
b=a-(fx(a)/fx1(a));
if(fabs(b-a)<=0.0005)
{
break;
}
a=b;
}
printf("\n the real root is %f",b);
getch();
}
float fx(float x)
{
return((exp(pow(x,2))+log(pow(x,2))+2)-3.2*(x+1));
}
float fx1(float x)
{
return((2*x*(exp(pow(x,2))))+(2*x)/(x*x+2)-3.2);
}















