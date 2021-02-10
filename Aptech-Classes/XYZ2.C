/*A Program To find The sum Of Digits Of A Number*/
#include <stdio.h>
main()
{
int bit,sum=0;
long temp,m;
clrscr();
printf("\nEnter A Digit :\n");
scanf("%ld",&m);
temp=m;
while(temp>0)
{
bit=(temp%10);
sum+=bit;
temp/=10;
}
printf("\nThe Sum Of The Digits Is=\n%d",sum);
getch();
}

