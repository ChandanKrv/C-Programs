#include<stdio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("veryimp.c","r");
if(fp==NULL)
{
printf(" Exit From Program");
exit(1);
}
while(ch!=EOF)
{
ch=fgetc(fp);
//printf("%c",ch);
fputc(ch,stdout);
}
fclose(fp);
getch();
}