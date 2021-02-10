void main()
{
int i,j,k,l;
clrscr();
printf("\n\n\n\t\t\tEnter First Number......");
scanf("%d",&i);
printf("\n\n\n\t\t\tEnter Second Number......");
scanf("%d",&j);
if(i<j)
{
i=i+j;
j=i-j;
i=i-j;
}
printf("\n\n\n\t\t\tThe First Number......%d",i);
printf("\n\n\n\t\t\tThe Second Number.....%d",j);
getch();
clrscr();
printf("\n\n\t\t****************MENU DRIVEN PROGRAM********************");
printf("\n\n\t\t 1>ADDITION ***********************");
printf("\n\n\t\t 2>SUBTRACTION ********************");
printf("\n\n\t\t 3>MULTIPLICATION *****************");
printf("\n\n\t\t 4>DIVISION ***********************");
printf("\n\n\n\t\t\tEnter Your Choice.......");
scanf("%d",&k);
if((k<1)||(k>4))
{
printf("\n\n\n\t\t\tYou Have Made A Wrong Choice......");
getch();
exit(1);
}
switch(k)
{
case 1: l=sum(i,j);
printf("\n\n\n\t\t\tThe Sum Is.............%d",l);
getch();
break;
case 2: l=sub(i,j);
printf("\n\n\n\t\t\tThe Subtraction Is.............%d",l);
getch();
break;
case 3: l=mul(i,j);
printf("\n\n\n\t\t\tThe Multiplication Is.............%d",l);
getch();
break;
case 4: l=div(i,j);
printf("\n\n\n\t\t\tThe Division Is.............%d",l);
getch();
}
}
sum(int a,int b)
{
  int s1;
  s1=a+b;
  return(s1);
  }

sub(int a,int b)
{
  int s1;
  s1=a-b;
  return(s1);
  }

mul(int a,int b)
{
  int s1;
  s1=a*b;
  return(s1);
  }

div(int a,int b)
{
  int s1;
  s1=a/b;
  return(s1);
  }