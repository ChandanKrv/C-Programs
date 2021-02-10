#include<string.h>
void main()
{
int i,n;
char *x="ANanda";
clrscr();
n=strlen(x);
*x=x[n];   //x[0]=x[n]
for(i=0;i<n;i++)
{
printf("%s\n",x);
x++;
}
getch();
}