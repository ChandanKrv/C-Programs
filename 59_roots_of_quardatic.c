#include <stdio.h>
#include <math.h>
int main()
{
        int a, b, c, D;
        float x, y;
        printf("Enter constants a,b,c of Quardatic ");
        scanf("%d %d %d", &a, &b, &c);
        D = b * b - 4 * c;
        if (D < 0)
                printf("Both Roots are Imaginary ");
        if (D == 0)
        {
                x = -b / (2.0 * a);
                printf("\n Both Roots will be Equal %f ", x);
        }
        if (D > 0)
        {
                x = (-b + sqrt(D)) / 2 * a;
                y = (-b - sqrt(D)) / 2 * a;
                printf("\nReal and distinct roots we have %f and %f ", x, y);
        }
        return 0;
}