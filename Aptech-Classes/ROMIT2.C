void main ()
{
int x,y;
clrscr ();
printf ("enter your first number ");
scanf("%d",&x);
printf ("enter your second nunber ");
scanf ("%d",&y);
while (x<=9 && y<=4)
{
printf("\n");
printf ("\nyour result is-%d",x);
printf ("\nyour result is -%d",y);
x++;
y++;
}
/*y=x--;
printf ("%d",x--+ ++x);
//printf ("\n%d",x);*/
getch ();
}