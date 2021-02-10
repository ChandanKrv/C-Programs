#include <stdio.h>
int sq(int);
int main()
{
        int N;
        printf("Ente a number ");
        scanf("%d", &N);
        printf("%d", sq(N));
        return 0;
}
int sq(int n)
{
        int i, s = 0;
        for (i = 1; i <= n; i++)
        {
                s = s + i * i;
        }
        return s;
}