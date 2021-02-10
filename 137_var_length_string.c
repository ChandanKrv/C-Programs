//INCOMPELTE
#include <stdio.h>
char *inputString()
{
        char *q, *p, ch;
        int len = 1;
        p = (char *)malloc(len);
        ch = getche();
        *p = ch;
        return (q);
}
int main()
{
        char *str;
        str = inputString();
        printf("You have Entered: %s", str);
        return 0;
}