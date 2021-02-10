#include <stdio.h>
#include <conio.h>
int getIntOnly();
int main()
{
        int a;
        a = getIntOnly();
        printf("\nYou have Entered %d", a);
        return 0;
}
int getIntOnly()
{
        int ch, num = 0;
        do
        {
                ch = getch();
                if (ch >= 48 && ch <= 57)
                {
                        printf("%c", ch);
                        num = num * 10 + (ch - 48);
                }
                if (ch == 13)
                {
                        break;
                }
        } while (1);
        return (num);
}