#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float);
void main()
{
  /*trapizoidal rule*/
  int n,i;
 float a,b,h,x[50],s1,s2,s3,s4,sum,simp;
  printf("give a=  b=  n=\n");
  scanf("%f%f%d",&a,&b,&n);
  h=(b-a)/n;
  x[0]=a;
  for(i=0;i<=n;i++)
  x[i]=x[0]+i*h;
  s1=f(x[0])+f(x[n]);
  s2=0.0;
  s3=0.0;
  s4=0.0;
  for(i=1;i<=(n-1);i++)
  s2=s2+f(x[i]);
  for(i=1;i<=(n-1);i=i+2)
  s3=s3+f(x[i]);
  for(i=2;i<=(n-2);i=i+2)
  s4=s4+f(x[i]);
  sum=h*(s1+2*s2)/2;
  simp=h*(s1+4*s3+2*s4)/3.;
  printf("It=%f\n Is=%f\n",sum,simp);
  getch();
			  }

float f(float a)
{
float b;
b=pow(2.9,a)/(sin(a)+2.9*(exp(-a*a/2)));
return(b);
}
