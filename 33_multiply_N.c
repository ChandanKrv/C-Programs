#include <stdio.h>
int main()
{
        int i, n,product=1;
        printf("Enter the limit ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
                product = product * i;
        }
        printf("Product is %d", product);
        return 0;
}