#include <stdio.h>
int main()
{
        int i, n;
        printf("Enter the value of N for natural naumbers ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
        printf("%d,",2*i);
        }

        return 0;
}