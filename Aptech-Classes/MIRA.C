/*    FINDING THE REAL ROOT BY NEWTON RAPHSON METHOD      */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float);
float fx1(float);
void main()
{
 float a,b;
 clrscr();
 printf ("\n Enter the point: ");
 scanf ("%f",&a);
 while(1)
 {
  b=a-(fx(a)/fx1(a));
  if(fabs(b-a)<=0.0005)
  {
   break;
  }
  a=b;
 }
 printf("\n The real root is %f",b);
 getch();
 }
float fx(float x)
 {
 return (pow(x,4)-pow(x,1)-10);
 }
float fx1(float x)
{
 return (4*pow(x,3)-1);
 }