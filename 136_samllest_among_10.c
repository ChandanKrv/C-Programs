#include <stdio.h>
int main()
{
        int a[10], i, min;
        printf("Enter 10 numbers ");
        for (i = 0; i < 9; i++)
                scanf("%d", &a[i]);
        min = a[0];
        for (i = 1; i < 9; i++)
                if (min > a[i])
                        min = a[i];

        printf("Smallest number is %d ", min);
        return 0;
}