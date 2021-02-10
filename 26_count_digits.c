#include <stdio.h>
int main()
{
        int n, i, count = 0;
        printf("Enter a number ");
        scanf("%d", &n);
        while (n != 0)
        {
                n = n / 10;
                count++;
        }
        printf("%d", count);
        return 0;
}
