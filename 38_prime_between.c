#include <stdio.h>
int main()
{
        int n, m, j, i;
        printf("Check Prime between two nos.. ");
        scanf("%d%d", &n, &m);
        printf("Prime numbers are ");
        for (i = n + 1; i <= m - 1; i++)
        {
                for (j = 2; j < i; j++)
                        if (i % j == 0)
                                break;
                if (i == j)
                        printf("%d,", i);
        }
        return 0;
}