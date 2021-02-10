#define MAX(x,y) (x)>(y)?(x):(y)
void main()
{
int m=0,a=18,b=15;
clrscr();
m=MAX(a++,++b);
printf("%d %d %d",a,b,m);
getch();
}