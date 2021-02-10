void main()
{
char *str;
int l=0;
clrscr();
printf("\n\tEnter The String....");
gets(str);
while(*(str+l)!='\0')
l++;
printf("\n\t\tThe Length Is....%d",l);
getch();
}