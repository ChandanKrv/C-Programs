#include<string.h>
void main()
{
void strcomp(char *,char *);
char *s1,*s2;
clrscr();
printf("\n\t\tEnter The First string....");
gets(s1);
printf("\n\t\tEnter The Second string....");
gets(s2);
strcomp(s1,s2);
getch();
}

void strcomp(char *str1,char *str2)
{
int c,d=0,l1,l2;
l1=strlen(str1);
l2=strlen(str2);
printf("\n\t%d\t%d",l1,l2);
for(c=0;c<=l1 && c<=l2 && d==0;c++)
d=*(str1+c)-*(str2+c);
printf("\n\t\tThe Result Is....%d",d);
}