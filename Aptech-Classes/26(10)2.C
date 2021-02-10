void main()
{
int n1,n2;
clrscr();
printf("\n\tEnter The First Value...");
scanf("%d",&n1);
printf("\n\tEnter The Second Value...");
scanf("%d",&n2);
swap(&n1,&n2);
printf("\n\tFirst Value Is....%d",n1);
printf("\n\tFirst Value Is....%d",n2);
getch();
}

swap(int *nn1,int *nn2)
{
int temp1;
temp1=*nn1^*nn2;
*nn1^=temp1;
*nn2^=temp1;
return;
}