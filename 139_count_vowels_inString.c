#include <stdio.h>
int main()
{
        char str[50], v[] = "aeiouAEIOU";
        int count = 0, i, j;
        printf("Enter a String ");
        gets(str);
        for (i = 0; str[i]; i++)
        {
                for (j = 0; v[j]; j++)
                {
                        if (str[i] == v[j])
                        {
                                count++;
                                break;
                        }
                }
        }
        printf("Total vowels in %s is %d ", str, count);
        return 0;
}