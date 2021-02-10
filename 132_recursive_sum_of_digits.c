#include <stdio.h>
int sum(int x);
int main()

{
        int x;
        printf("Enter a number ");
        scanf("%d", &x);
        printf("Sum is %d", sum(x));
        return 0;
}
int sum(int x)
{
        if (x / 10 == 0)
                return (x);
        return (x % 10 + sum(x / 10));
}