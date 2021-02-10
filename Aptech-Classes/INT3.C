void main()
{
int b[]={1,2,3,4,5},*p;
clrscr();
p=b;
++*p;
printf("\nHi \t%d",*p);
p+=2;
printf("\n\t%d",*p);
printf("\n%u",p);
printf("\n%d",(p-(&p-2)));
getch();
}