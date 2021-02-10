#include <stdio.h>
void sum(void);
int main()
{
       
        sum();
        return 0;
}
void sum()
{
        int i, s = 0, N;
        printf("Enter Value of N ");
        scanf("%d", &N);
        for (i = 1; i <= N; i++)
        {
                s = s + i;
        }
        printf(" SUM IS %d ", s);
}