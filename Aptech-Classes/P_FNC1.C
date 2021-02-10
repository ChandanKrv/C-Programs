      /*  THIS PROGRAM GIVES THE CONCEPT OF "POINTER TO FUNCTION"  */
void main()
{
int disp();
int (*f)();
clrscr();
f=disp;
printf("\n\tThe Address Of Function Is.....%u",f);
(*f)();
getch();
}

int disp()
{
int a,b;
printf("\n\tEnter First Value ....");
scanf("%d",&a);
printf("\n\tEnter Second Value ....");
scanf("%d",&b);
if(a>b)
printf("\n\tThe Larger Is The First One...%d",a);
else
printf("\n\tThe Larger Is The Second One...%d",b);
}