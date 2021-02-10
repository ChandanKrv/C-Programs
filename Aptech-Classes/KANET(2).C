#define SQUAR(x) (x*x)
void main()
{
int l,i,k,j,m,o;
clrscr();
printf("\n\tEnter The Number==>(i) ");
scanf("%d",&i);
printf("\n\tEnter The Number==>(o) ");
scanf("%d",&o);
j=SQUAR(i);
m=SQUAR(i+1);
k=SQUAR(i++);
l=SQUAR(++o);
printf("\n\tThe Result Is ==(i) %d",j);
printf("\n\tThe Result Is ==(i+1) %d",m);
printf("\n\tThe Result Is ==(i++) %d",k);
printf("\n\tThe Result Is ==(++o) %d",l);
getch();
}