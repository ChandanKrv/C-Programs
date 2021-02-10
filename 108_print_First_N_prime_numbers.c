#include <stdio.h>
int isPrime(int x);
int main()
{
        int N, x = 2;
        printf("Enter a natural number ");
        scanf("%d", &N);
        while (N)
        {
                if (isPrime(x))
                {
                        printf("%d\n ", x);
                        N--;
                }
                x++;
        }
}
int isPrime(int x)
{
        int i;
        for (i = 2; i < x; i++)
                if (x % i == 0)
                        return (0);
        return (1);
}