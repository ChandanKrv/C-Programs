//#include<ctype.h>
/*void main()
{
int c;
clrscr();
for(c=123;c<=130;c++)
{
printf("\n\tThe Value Of %c Is %d...",c,toascii(c));
delay(2000);
}
}*/
/*void main()
{
int x=7,y=5,x1,x2,x3;
clrscr();
x1=x++ + ++x;
x=x++ + y++;
y=y++ + x++;
printf("X1=%d",x1);
printf("\nX2=%d",y);
getch();
}*/
/*void main()
{
int a=500,b=100,c;
clrscr();
if(!a>=400)
b=300;
c=200;
printf("b=%d\tc=%d",b,c);
getch();
}*/
/*void main()
{
int k=-2,j=4;
clrscr();
switch(k/=j/k)
{
default:
      printf("m");
case 0:
     printf("d");
case 1:
     printf("a");
     break;
case 2:
     printf("n");
}
getch();
} */
/*void main()
{
int x=1,y=1,z=-1,z1,z2;
clrscr();
z1=++x||++y&&++z;
printf("x=%d\ty=%d\tz=%d\tz1=%d",x,y,z,z1);
getch();
}*/
/*void main()
{
int i=15;
clrscr();
while(i==10)
{
printf("\nHi");
i--;
}
printf("\n%d",i);
getch();
} */
void main()
{
clrscr();
if(!printf("Hi"))
printf("\tHi");
else
printf("\n\thello");
getch();
}