#include <stdio.h>
int main()
{
        int x;
        for (x = 0; x <= 255; x++)
        {
                printf("\n %d -> %c", x, x);
        }
        return 0;
}