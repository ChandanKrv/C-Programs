void main()
{
int i,fac;
clrscr();
printf("\n\t\t\Enter A Number.....");
scanf("%d",&i);
fac=fact(i);
printf("\n\t\tThe Result Is.....%d",fac);
getch();
}

fact(int n)
{
int fac;
if(n==0||n==1)
return(1);
else
fac=n*fact(n-1);
return(fac);
}