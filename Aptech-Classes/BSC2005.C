/*void main()
{
int p=3,q=4;
clrscr();
p=p^q;
printf("\n%d\n",p);
q=p^q;
p=p^q;
printf("P=%d AND Q=%d",p,q);
getch();
}*/

#define PRINT(int)    printf("int=%d\n",int)
#define PRT(x,y,z)    printf("x=%d\ty=%d\tz=%d\n",x,y,z)

/*void main()
{
int x=1,y=1,z=1;
clrscr();
x+=y+=z;
PRINT(x<y?y:x);
x=y=z=-1;
++x||++y&&++z;
PRT(x,y,z);
x=y=z=1;
++x&&++y||++z;
PRT(x,y,z);
getch();
}*/
void main()
{
int b=0x6db7,y;
clrscr();
y=b>>4;
printf("%d",y);
	       getch();
}