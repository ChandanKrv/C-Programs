#include <stdio.h>
int main()
{
        int i, n,sum=0;
        printf("Enter the limit ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
                sum =sum+i;
        }
        printf("Sum is %d",sum);
        return 0;
}