#include <stdio.h>
int main()
{
        int x;
        printf("Enter a number ");
        scanf("%d", &x);
        if (x / 2 * 2==x)
                printf("EVEN");
        else
                printf("ODD");

        return 0;
}