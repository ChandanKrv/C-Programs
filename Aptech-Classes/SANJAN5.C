#include<string.h>
void main()
{
int n,p;
char w[20],w1[20];
clrscr();
printf("\n\n\t\t\tEnter The String...");
gets(w);
n=strlen(w);
printf("\n\n\t\t\tThe Length Of The String Is....%d" , n);
strcpy(w1,w);
strrev(w1);
p=strcmp(w,w1);
if(p==0)
{
printf("\n\n\t\t\tThe String Is Palindrome...");
getch();
}
else
{
printf("\n\n\t\t\tNon-Palindrome String.......");
getch();
}
}