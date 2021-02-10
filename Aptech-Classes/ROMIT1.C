
//11/03/2007
/*void main()
{
int i,j,k;
clrscr();  /* CLEAR THE SCREEN */
/*printf("\nEnter FIrst Number  ");
scanf("%d",&i);
printf("\nEnter Second Number  ");
scanf("%d",&j);
k=i+j;
printf("\n\tThe Result Is...%d",k);
getch();
}

/*void main ()
{
int a,b,c;
clrscr();
printf ("enter the number\t\n");
scanf("%d",&a);
printf ("enter second number\t\n");
scanf("%d", &b) ;
c=a+b;
a=c-a;
b=c-b ;
printf("\n%d",a);
printf("\n%d",b) ;
getch();
}

void main()
{
int *p,*q,i=12,j=15;
clrscr();
p=&i;
printf("P=%u",p);
p=&p;
printf("\nP=%u",p);
printf("\nQ=%u",q);
getch();
}*/

/*int x;
float r;
void *p = &x;          p points to x
void main (void)
{
  clrscr();
  *(int *) p = 2;
  printf("\nAddress=%d",x);
  p = &r;               p points to r
  *(float *)p = 1.12;
  printf("\nAddress=%f",r);
  getch();
} */
//18/03/2007
/*void main()
{
int x=-3;
clrscr();
if(!x)
{
printf("\nThe Number is greater");
printf("\nGood Bye");
}
else
{
printf("\nThe Number is smaller or equal");
printf("\nGood Night");
}
getch();
}*/

//19/3/2007
/*void main()
{
int p;
clrscr () ;
printf ("enter your percentage -");
scanf("%d",&p);
if (p>=75)
{
printf ("you get star ..");
}
if(p>=60 && p<75)
{
printf ("you get first division ..");
}
if (p>=45 && p<60)
{
printf ("you get sccond division  ..");
}
if (p>=34 && p<45)
{
printf ("you get third division ..");
}
if(p<34)
{
printf ("you fail .." );
}
getch();
} */

/*void main()
{
int p;
clrscr () ;
printf ("enter your percentage -");
scanf("%d",&p);

switch(p)
{
case 75:printf("star");
	break;
case 60:printf("first");
       break;
case 45:printf("second");
	break;
case 34:printf("third");
	break;
default:printf("fail");
}
getch();
}
void main()
{
int x=7,y=3;
clrscr();
printf("\n%d",x/y);
printf("\n%d",x%y);
getch();
} */
void main ()
{
int d,b;
clrscr();
printf ("enter the decimal number --");
scanf ("%d",& d);
while (d!=0)
{
b=d%2;
d=d/2 ;
printf ("\n%d",b);
}
getch ();
}


















