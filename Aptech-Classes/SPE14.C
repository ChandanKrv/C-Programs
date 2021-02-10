#include<alloc.h>
void main()
{
char *p1="ranjan";
char *p2="Ranjan";
clrscr();
//p2=(char *)malloc(21);
while(*p2++==*p1++)
printf("%c",*p1);
getch();
}