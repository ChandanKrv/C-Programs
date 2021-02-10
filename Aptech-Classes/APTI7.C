/*void main()
{
int i=11;
clrscr();
switch(i)
{
case 1:
printf("\nGood ");
break;
case 2*3+5:
printf("\nHello....");
}
getch();
}*/
/*void main()
{
int n=15;
clrscr();
printf("\nn=%*d",n,n,n);
getch();
}*/
/*main()
{
char *ptr = "Ramco Systems";
clrscr();
(*ptr)++;
printf("%s\n",ptr);
ptr++;
printf("%s\n",ptr);
getch();
}*/

main()
{
int x=20,y=35;
clrscr();
x = y++ + x++;
y = ++y + ++x;
printf("%d %d\n",x,y);
getch();
}

