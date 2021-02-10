void main()
{
char *s;
void strrev(char *);
clrscr();
printf("\n\t\t\Enter The String.........");
gets(s);
strrev(s);
getch();
}

void strrev(char *s1)
{
if(*s1=='\0')
return;
else
strrev(s1+1);
//puts(s1);
printf("%c",*(s1+0));
}