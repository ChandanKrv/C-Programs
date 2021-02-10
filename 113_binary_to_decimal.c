#include <stdio.h>
#include <math.h>
int main()
{
        int i = 0, bin, s = 0;
        printf("Enter a binary number ");
        scanf("%d", &bin);
        while (bin)
        {
                s = s + pow(2, i) * (bin % 10);
                bin = bin / 10;
                i++;
        }
        printf("Decimal Equivalent is  %d ", s);
        return 0;
}