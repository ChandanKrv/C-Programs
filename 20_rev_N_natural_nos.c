
#include <stdio.h>
int main()
{
        int i, n;
        printf("Enter the  max limit of natural numbers ");
        scanf("%d",&n);
        for (i = 1; i <= n; i++)
        {
                printf("\n%d", n+1-i);
        }
        return 0;
}
