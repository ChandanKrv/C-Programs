void main()
{
union {
char nm;
int pg;
float pr;
} b1,b2;
clrscr();
printf("\n\t\tEnter The Details Of Book1.....\n");
scanf("%s%d%f",&b1.nm,&b1.pg,&b1.pr);
printf("\n\t\tEnter The Details Of Book2.....\n");
scanf("%s%d%f",&b2.nm,&b2.pg,&b2.pr);
printf("\n\t\tThe Address Of Book1 Is...%u...%u...%u...",&b1.nm,&b1.pg,&b1.pr);
printf("\n\t\tThe Address Of Book2 Is...%u...%u...%u...",&b2.nm,&b2.pg,&b2.pr);
getch();
}