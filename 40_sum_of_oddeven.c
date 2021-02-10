#include <stdio.h>
int main()
{
        int a[10], i, o = 0, e = 0;
        printf("Enter the 10 Numbers ");
        for (i = 0; i <= 9; i++)
                scanf("%d", &a[i]);

        for (i = 0; i <= 9; i++) 
        {
                if (a[i] % 2 == 0)
                        e = e + a[i];
                else
                        o = o + a[i];
        }
        printf("Sum of Even number is %d and Odd is %d ", e, o);
        return 0;
}