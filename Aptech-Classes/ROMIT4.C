void main ()
{
/* 1)int x=5,y=-2,z=0;
clrscr();
printf("%d%d%d",x>6,y<0,z!=0);
2)int x=5,y=7,x1,x2,x3;
clrscr();
x1=x++ + ++y;
x2=x++ + y++ ;
x3=++x + ++y;
printf("%d %d %d",x1,x2,x3);
3)int x=4;
clrscr();
if(!(x!=0))
printf("hi");
else
printf("hello");
getch() ;  */
int a,b,c;
clrscr();
scanf("%d",&a);
/*if (a>=60)
printf("F.d. %d",a);
if(a>=45&&a<60)
printf("S.D. %d",a);
if(a>=34&&a<45)
printf("T.D. %d",a);*/
(a>=60)?printf("FD"):((a>=45&&a<60)?printf("SD"):((a>=34&&a<45)?printf("TD"):printf("fail")));
getch();
}
