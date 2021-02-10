#include "stdio.h"
/*demostration of array calculation*/
main()
{
int mar[25];
int i;
float sum=0;
float avg;
clrscr();
for(i=0;i<=4;i++)
{
printf("\nenter the values of the students\n");
scanf("%d",&mar[i]);
sum=(sum+mar[i]);
}
printf("\nthe summed marks is....\n=%f",sum);
getch();
avg=(sum/10.0);
printf("\nthe avarage marks is....\n=%f",avg);
getch();
}