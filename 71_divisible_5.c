#include <stdio.h>
int main()
{
        int n;
        printf("Enter a Number ");
        scanf("%d", &n);
        if (n % 5 == 0)
                printf("YES, %d is  divisible by 5 ", n);
        else
                printf("No, %d is not divisible by 5 ", n);
        return 0;
}