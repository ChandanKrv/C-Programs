#include <stdio.h>
int main()
{
        int N, sum = 0;
        printf("Enter a natural number ");
        scanf("%d", &N);
        while (N)
        {
                sum = sum + 2 * N-1;
                N--;
        }
        printf("SUM is %d \n", sum);
}