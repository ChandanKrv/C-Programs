#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
void main(int argc,char *argv[])
{
char *a,*b,ch,*c;
clrscr();
c=(argv[0]);
puts(c);
//getch();
a=(argv[1]);
b=(argv[2]);
puts(strcat(a,b));
//c=(argv[3]);
/*if(ch<1||ch>4)
{
printf("illegal entry");
getch();
exit(0);
} */
/*switch(ch)
{
case 1:c=a+b;
       printf("sum=%d",c);
       break;
case 2:c=a-b;
       printf("sum=%d",c);
       break;
case 3:c=a*b;
       printf("sum=%d",c);
       break;

case 4:c=a/b;
     printf("sum=%d",c);
 }*/
 getch();
 }