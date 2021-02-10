#include <stdio.h>
int square(int n);
int main()
{
        int x;
        printf("Enter a number ");
        scanf("%d", &x);
        printf("Sum of square of digits is %d", square(x));
        return 0;
}
int square(int n)
{
        if (n / 10 == 0)
                return (n * n);
        return (n % 10) * (n % 10) + square(n / 10);
}