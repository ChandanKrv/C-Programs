#include<stdio.h>
#include<math.h>
#include<conio.h>
 long double f(long double);
void main()
{
  /*trapizoidal rule*/
  long int n,i;
 long double a,b,h,x[50],s1,s2,sum;
  printf("give a=  b=  n=\n");
  scanf("%ld%ld%d",&a,&b,&n);
  h=(b-a)/n;
  x[0]=a;
  for(i=0;i<=n;i++)
  x[i]=x[0]+i*h;
  s1=f(x[0])+f(x[n]);
  s2=0.0;
  for(i=1;i<=(n-1);i++)
  s2=s2+f(x[i]);
  sum=h*(s1+2*s2)/2;
  printf("%ld",sum);
  getch();
			  }
long double f(long double a)
{
long double b;
b=pow(2.15,a)/(sin(a)+2.15*exp(-a*a/2));
return(b);
		  }