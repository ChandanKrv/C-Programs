#include <stdio.h>
int sumcubes(int);
int main()
{
        int x;
        printf("Enter a number ");
        scanf("%d", &x);
        printf("Sum of N cubes is %d", sumcubes(x));
        return 0;
}
int sumcubes(int n)
{
        if (n == 1)
                return (1);
        return (n * n * n + sumcubes(n - 1));
}