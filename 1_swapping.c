#include <stdio.h>
int main()
{
        int a, b, c;
        printf("Enter two Numbers");
        scanf("%d%d", &a, &b);
        c = a;
        a = b;
        b = c;
        printf(" Hence Swapped numbers are a=%d and b=%d", a, b);
        return 0;
}