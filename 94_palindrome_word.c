#include <stdio.h>
#include <string.h>
int main()
{
        char str[20];
        int l, i;
        printf("Enter a String ");
        gets(str);
        l = strlen(str);
        for (i = 0; i < l / 2; i++)
        {
                if (str[i] != str[l - 1 - i])
                {
                        printf(" NOT Plindrome ");
                        break;
                }
        }
        if (i == l / 2)
                printf("Plindrome ");

        return 0;
}