							   /*LCM & HCM */
#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 {
 int a,b,l,h,p;
 int hcf(int,int);
 printf("Enter two number");
 scanf("%d,%d",&a,&b);
 p=a*b;
 h=hcf(a,b);
 l=p/h;
 printf("the hcf=%d & lcm=%d",h,l);
 getch();
 }
	int hcf(int p,int q)
	{
	 int r;
	 r=p-(p/q*q);
	 if(r==0)
	 return(q);
	 else
	 return(hcf(p,q));
	 }