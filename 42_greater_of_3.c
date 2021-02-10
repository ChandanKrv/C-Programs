#include <stdio.h>
int main()
{
        int a, b, c, k;
        printf("Enter three numbers ");
        scanf("%d%d%d", &a, &b, &c);
        k = a > b ?        a > c ? a : c           : b > c ? b : c;

        printf("%d is greater ", k);
        return 0;
}