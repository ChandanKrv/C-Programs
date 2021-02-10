#include <stdio.h>
int main()
{
        int fib(int);
        int a, i;
        printf("Enter no of terms");
        scanf("%d", &a);
        for (i = 1; i <=a; i++)
                printf("%d", fib(i));
        return 0;
}
int fib(int n)
{
        if (n == 1 || n == 2)
                return (1);
        return (fib(n - 1) + fib(n - 2));
}
