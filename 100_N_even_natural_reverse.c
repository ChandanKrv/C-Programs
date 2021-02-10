#include <stdio.h>
int main()
{
        int N;
        printf("Enter a natural number ");
        scanf("%d", &N);
        while (N)
        {
                printf("%d \n", 2 * N);
                N--;
        }
}