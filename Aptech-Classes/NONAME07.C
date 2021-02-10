#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y;
int*ptr ;
x=10;
ptr =&x;
y=*ptr;
printf("value of x is %d\n\n",x);
printf("%d is stored at addr %u\n",x,&x);
printf("%d is stored at addr %u\n",*&x,&x);
printf("%d is stored at addr %u\n",ptr,&ptr);
printf("%d is stored at addr %u\n",y,&*ptr);
printf("%d is stored at addr %u\n",y,&y);
*ptr=25 ;
printf("now x=%d",x);
getch();
}
