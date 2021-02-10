void main()
{
int n,f;
char *str,*rev;
clrscr();
printf("\n\n\t\tEnter The String....");
gets(str);
n=strlen(str);
printf("%s",pal(str,n));
if(f==n)
printf("\n\t\tThe %s String Is Palindrome...",str);
else
printf("\n\t\tThe String %s Is Not Palindrome...",rev);
getch();
}

pal(char *st,int nn)
{
if(*st=='\0')
return(nn);
return(st[0]==st[nn-1] && pal(st+2,nn-1));
}