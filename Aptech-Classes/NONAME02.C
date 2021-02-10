struct sa
{
int a;
int b;
};
struct sb
{
int c;
int d;
int e;
};
void main()
{
struct sa a1={22,3460};
struct sb b1={234,678,87},*b2;
clrscr();
b2=&a1;
//printf("%d\t%d\n",a1.a,a1.b);
printf("%d\t%d\n",b1.c,b1.d);
printf("%d\t%d\t%d",b2->c,b2->d,b2->e);
getch();
}