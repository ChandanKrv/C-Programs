#include<stdio.h>
#include<conio.h>
void main()
{
int power();
int a,x,p;
clrscr();
printf("\n\t enter the no. of the base :-");
scanf("%d",&a);
printf("\n\t enter the power no. :- ");
scanf("%d",&x);
p=power(a,x);
printf("\n\t result %d",p);
getch();
}
	int power(int a,int x)
		 {
		 int i,s=a;
		 if(x==0)
		 return(1);
		 if(x==1)
		 return(a);
		 else
		   {
		      s=s*power(a,(x-1));
		      }
		 }