#include <stdio.h>
int main()
{
        int x, y, p = 1, i;
        printf("Enter value x to the power y ");
        scanf("%d%d", &x, &y);
        for (i = 1; i <= y; i++)
                p = p * x;

        printf("Result will be %d", p);
        return 0;
}