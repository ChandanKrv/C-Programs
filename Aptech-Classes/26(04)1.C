void main()
{
char *ptr;
int i=0,count=1;
clrscr();
printf("\n\tEnter The String....");
gets(ptr);
while(ptr[i]!='\0')
{
if(ptr[i]==' ')
count++;
i++;
}
printf("\n\tThe Number Of Words In The String Is...%d",count);
getch();
}