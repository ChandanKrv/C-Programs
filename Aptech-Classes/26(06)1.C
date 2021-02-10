void main()
{
void rev(char *);
char *str;
clrscr();
printf("\n\tEnter The String.....");
gets(str);
rev(str);
getch();
}

void rev(char *ptr)
{
if(*ptr=='\0')
return;
else
rev(ptr+1);
printf("%c",*ptr);
}