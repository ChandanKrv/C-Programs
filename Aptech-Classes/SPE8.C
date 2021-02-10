#define swap1(a,b) a=a+b;b=a-b;a=a-b;
void main()
{
int x=5,y=10;
clrscr();
swap1(x,y);
printf("X=%d\tY=%d\n",x,y);
swap2(&x,&y);
printf("X=%d\tY=%d",x,y);
getch();
}

swap2(int *a,int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}