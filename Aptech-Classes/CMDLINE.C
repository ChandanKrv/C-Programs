#include<stdio.h>
void main(int argc,char *argv[])
{
int x,y,z;
clrscr();
puts(argv[2]);
printf("\n\n");
puts(argv[1]);
printf("\n\n");
puts(argv[0]);
printf("\n\n");
x=(int)argv[1];
y=(int)argv[2];
printf("X=%d\tY=%d",x,y);
printf("\n\nThe result Is %d",(x+y));
getch();
}