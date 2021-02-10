							/*Quadratic Equation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 {
 float a,b,c,r1,r2,d,real,imag;
 clrscr();
 printf("\n\tenter values of a,b,c:\n");
 scanf("\n%f\n%f\n%f",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if(d>0.0)
 {
 r1=((-b)+sqrt(d))/(2*a);
 r2=((-b)-sqrt(d))/(2*a);
 printf("the roots of the equation are r1=%f\n,r2=%f\n",r1,r2);
 }
 else if(d==0.)
 {
 r1=(-b);
 r2=(-b);
 printf("The roots of the equation are r1\n,r2:-%f%f",r1,r2);
 }
 else
 {
 real=(-b)/(2*a);
 imag=sqrt(-d)/(2*a);
 printf("The roots of the  equation are imaginary\n\n");
 printf("The real_root=%f\n\nimaginary_root=%f",real, imag);
 }
 getch();
 }
