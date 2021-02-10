void main()
{
char *a;
int i=0,count=1;
clrscr();
printf("\n\t enter the string:- ");
gets(a);
while(a[i]!='\x0')
{
if((a[i]==' ')&&(a[i+1]=='\0'))
count=count;
if((a[i]==' ')&&(a[i+1]!='\0'))
count=count+1;
i++;
}
printf("\n\t%d",count);
getch();
}