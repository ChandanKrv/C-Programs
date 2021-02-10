#include <stdio.h>
//1st Logic
int main()
{
        int n, x = 3, y, count;
        printf("Enter a number ");
        scanf("%d", &n);
        while (n)
        {
                y = x;
                count = 0;
                while (y)
                {
                        if (y % 2 == 1)
                                count++;
                        y = y / 2;
                }
                if (count == 2)
                {
                        printf("  %d", x);
                        n--;
                }
                x++;
        }
        return 0;
}