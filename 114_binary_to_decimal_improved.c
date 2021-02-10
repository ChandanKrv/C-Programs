#include <stdio.h>
int BtoD(char s[]);
int main()
{
        printf("%d", BtoD("101101"));
        return 0;
}
int BtoD(char s[])
{
        int d = 0, i;
        for (i = 0; s[i]; i++)
        {
                if (s[i] == '0')
                        d = d * 2 + 0;
                else
                        d = d * 2 + 1;
        }
        return (d);
}