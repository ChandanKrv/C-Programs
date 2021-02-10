
#include <stdio.h>
int main()
{
        int i, n;
        printf("Enter the limit of natural numbers ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
                printf("\n%d", i);
        }
        return 0;
}