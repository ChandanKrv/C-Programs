/**************PROGRAM TO FIND THE NEXT DAY OF A GIVEN DAY******************/
#include <stdio.h>
void main()
{
int d,m,x,m1;
long y;
clrscr();
printf("\n\n\tEnter The Day,Month & Year....\n");
scanf("\n%d\n%d\n%ld",&d,&m,&y);
clrscr();
printf("\n\n\n\n\n\t\tThe Date Is.......%d-%d-%ld",d,m,y);
m1=m;
x=(y%4);
if(d>31&&d<=0)
exit(1);
if(m>12&&m<=0)
exit(1);
if(d==30)
{
if(m1==2)
exit(1);
}
if(d==31)
{
if(m1==2||m1==4||m1==6||m1==9||m1==11)
exit(1);
}
/************************DAY CHECKING*****************************************/
if(d<30)
{
if(d==28)
{
if(m1==2)
{
if(x==0)
{
d++;
m1=m;
}
if(x!=0)
{
d=1;
m1+=1;
}
}
else
d++;
}
else
d++;
}
else
{
if(d==30)
{
if(m1==4||m1==6||m1==9||m1==11)
{
d=1;
m1++;
}
else
{
d++;
m1=m;
}
}
else
{
if(d==31)
{
if(m1==12)
{
d=1;
m1=1;
y++;
}
else
{
if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10)
{
d=1;
m1++;
}
}
}
}
}
printf("\n\n\n\n\n\n\n\n\t\tThe Next Date Is.....%d-%d-%ld",d,m1,y);
getch();
}