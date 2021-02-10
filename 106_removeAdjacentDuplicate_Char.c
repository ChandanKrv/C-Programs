#include <stdio.h>
char *remove_duplicate(char *s);
int main()
{
        char s[] = "AAABBBCCCDAB";
        printf("%s", remove_duplicate(s));

        return 0;
}
char *remove_duplicate(char *s)
{
        int i, j;
        for (i = 0; s[i]; i++) //OR   for (i = 0; s[i] == '\0'; i++)
        {
                if (s[i] == s[i + 1])
                {
                        for (j = i; s[j]; j++)
                                s[j] = s[j + 1];
                        i--;
                }
        }
        return (s);
}