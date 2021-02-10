void main()
{
char *str;
int n,i;
clrscr();
printf("\n\tEnter The String.....");
gets(str);
n=strlen(str);
printf("\t\t");
for(i=0;i<n;i++)
printf("%c",toupper(str[i]));
getch();
}
