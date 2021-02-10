void main()
{
char s[]="T.C.S";
clrscr();
print(s);
getch();
}
print(char *p)
{
while(*p!='\0')
{
if(*p!=".")printf("%c",*p);
p++;
}
}
