#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i;
 int s=0;
 clrscr();
 printf("\n\t******CALCULATE THE SUM OF 10 NUMBERS******");
 for(i=1;i<=10;i++)
  {
	printf("\n\n\t\tEnter the value of a=>");
	scanf("%d",&a);
	s=s+a;
	}
  printf("\n\t\tAdd S=>");
  printf("%d",s);
  printf("\n\t********************************************");
  printf("\n\n\t\tPRESS ANY KEY");
  getch();
 }






