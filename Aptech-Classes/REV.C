#include<string.h>
#include<stdio.h>
void main()
{
char *s;
clrscr();
printf("\nPlz Nter The String :-");
gets(s);
printf("\n\t\t");
puts(strrev(s));
getch();
}