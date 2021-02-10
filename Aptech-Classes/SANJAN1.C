#include<graphics.h>
void main()
{
int n,a=0,b=0,c1,c2,c3;
float c4;
clrscr();
textcolor(30);
cprintf("\n\n\nEnter 1st Number....");
scanf("%d",&a);
textcolor(36);
cprintf("\nEnter 2nd Number....");
scanf("%d",&b);
textcolor(44);
cprintf("\nChoice Number.....");
scanf("%d",&n);
switch(n)
{
case 1:
     c1=(a+b);
     textcolor(70);
     cprintf("\nThe Sum Is...%d", c1);
     getch();
     break;
case 2:
     c2=(a-b);
     textcolor(26);
     cprintf("\nThe  Subtracted Result Is...%d", c2);
     getch();
     break;
case 3:
     c3=(a*b);
     textcolor(425);
     cprintf("\nThe Multiplication Result Is...%d", c3);
     getch();
     break;
default:
     c4=((float)a/(float)b);
     textcolor(442);
     cprintf("\nThe Division Is...%.8f",c4);
     getch();
     }
}