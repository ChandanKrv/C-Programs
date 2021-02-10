#include <stdio.h>
int main() {
 int x,r,y=0;
 printf("Enter a number " );
 scanf("%d",&x);
while (x!=0)
{
        r=x%10;
        y=y*10+r;
        x=x/10;
        }
        printf("Reversed number is %d",y);
    return 0;
}