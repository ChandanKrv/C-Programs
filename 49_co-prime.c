#include <stdio.h>
int main()
{
        int a, b, i, min;
        printf("Enter two numbers ");
        scanf("%d%d", &a, &b);
        min = a < b ? a : b;
        for (i = 2; i <= min; i++)
        { 
                if (a % i == 0 && b % i == 0)
                        break;
        }
        if (i == min + 1)
                printf("%d and %d are  Co-prime numbers ", a, b);

        else
                printf("%d and %d are Not Co-prime numbers ", a, b);

        return 0;
}