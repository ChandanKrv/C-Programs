#include <stdio.h>
int main()
{
        int n, N, sum=0, i, s;
        printf("Enter a natural number ");
        scanf("%d", &N);
        for (n = 1; n <= N; n++)
        {
                s = 0;
                for (i = 1; i <= n; i++)
                        s = s + i;
                sum = sum + s;
        }
        printf("Series is 1+(1+2)+(1+2+3)+..........+(1+2+3+4+.......+N) \n");
        printf("And sum of this series is %d \n", sum);
}