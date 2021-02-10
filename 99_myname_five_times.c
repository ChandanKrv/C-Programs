#include <stdio.h>
int main()
{
        int n;
        char s[200];
        printf("Enter your name ");
        gets(s);
        printf("How many times do you want to print %s ", s);
        scanf("%d", &n);
        while (1<=n)
        {
                printf("%s \n", s);
                n--;
        }

        return 0;
}