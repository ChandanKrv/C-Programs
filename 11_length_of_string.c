#include <stdio.h>
#include <string.h>
int main()
{
        char a[20];
        int i;
        printf("Enter a String ");
        gets(a);
        for (i = 0; a[i] != '\0'; i++)
                ;
        printf("%d is the length Character \t", i);

        printf("\nUsing strlen() function \n");
        printf("%d is the length of Char", strlen(a));

        return 0;
}