					   /*BIGGEST NUMBER*/
#include<stdio.h >
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,big;
 printf("Enter the values of a,b,c:-");
 scanf("\n%d\n%d\n%d",&a,&b,&c);
 big=a;
 if(big<=b)
 big=b;
 else if(big<=c)
 big=c;
 else
 printf("The Biggest Number is big=%d",big);
 getch();
 }