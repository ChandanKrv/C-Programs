#include<Stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter value of a");
 scanf("%d",&a);
 b=67;
 c=56;
 if(a>400)
 {
 b=300;
 c=200;
 }
printf("\n%d\n%d",b,c);
getch();
}