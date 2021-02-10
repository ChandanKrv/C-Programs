#include <stdio.h>
void main(void)
{
int x,z,k;
for(k=0;k<5;k++)
{
clrscr();
printf("\nEnter The Value Of x\n");
scanf("%d",&x);
z=(++x + ++x);
printf("\nThe Value Of z Is=\n%d",z);
getch();
printf("\nThe Value Of x Is=\n%d",x);
getch();
}
}