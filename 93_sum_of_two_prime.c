#include <stdio.h>
int nextPrime(int);
int isPrime(int);

int main()
{
        int x, i;
        printf("Enter a number ");
        scanf("%d", &x);
        for (i = 2; i <= (x - 1); i = nextPrime(i))
        {
                if (isPrime(x - i))
                        printf("%d + %d = %d \n", i, x - i, x);
        }
        return 0;
}
int nextPrime(int n)
{
        do
                n++;
        while (!isPrime(n));
        return (n);
}
int isPrime(int n)
{
        int i;
        for (i = 2; i < n; n++)
                if (n % i == 0)
                        return (0);

        return (1);
}