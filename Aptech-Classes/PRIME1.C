/*A PROGRAM TO CHECK WHETHER A NUMBER IS PRIME OR NOT*/
#include <math.h>
main()
{
int i,m=0,j=3;
clrscr();
printf("\nEnter The Number........\t");
scanf("%d",&i);
if(i%2==0)
{
printf("\n\tThe Number %d Is A Non-Prime Number",i);
getch();
exit(1);
}
m=sqrt((double)i);
 while(j<=m)
  {
   if(i%j==0)
   {
   printf("\n\tThe Number %d Is A Non-Prime Number",i);
   getch();
   exit(1);
    }
   else
   j+=2;
    }
   printf("\n\tThe Number %d Is A Prime Number",i);
   getch();
   }