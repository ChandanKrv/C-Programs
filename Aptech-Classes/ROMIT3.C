/*void main ()
{
int a=2,b,s=0,c=1;
clrscr();
printf ("enter your upper range- ");
scanf ("%d",&b);
while (a<=b)
{
s=s+a*a;
a=a+3;
}
printf ("your rasult is -%d",s);
getch();*/
/*printf ("how many terms you add-");
scanf ("%d",&b);
while (c<=b)
{
s=s+a*a;
a=a+3;
c++;
   }
printf ("your result is -%d",s);
getch();
} */

/* DECIMAL TO BINARY CONVERSION */
void main()
{
int a[100];
int x=1,y,r,d;
clrscr();
printf ("enter the decimal number ");
scanf ("%d",&d);
while (d>0)
{
r=d%2;
a[x]=r;
d=d/2;
x++;
}
for(y=x-1;y>=1;y--)
{
printf ("\n%d",a[y]);
}
getch ();
}