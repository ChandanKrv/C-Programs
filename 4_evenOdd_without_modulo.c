#include <stdio.h>
int main()
{
        int a;
        printf("Enter a number");
        scanf("%d", &a);
        if (a & 1)
        {
                printf("Number is ODD");
        }
        else
        {
                printf("Number is EVEN");
        }
        return 0;
}