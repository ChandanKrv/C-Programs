#include <stdio.h>
int main()
{
        int i, r, x, s;
        printf("Armstrong Numbers are \n");
        for (i = 1; i <= 1000; i++)
        {
                x = i;
                s = 0;
                while (x != 0)
                {
                        r = x % 10;
                        s = s + r * r * r;
                        x = x / 10;
                }
                if(s==i)
                printf("%d\n",i);
        }
        return 0;
}