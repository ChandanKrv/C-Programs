void main()
{
int rem,c=0,i,j,k,n;
clrscr();
printf("Enter The Number=>>");
scanf("%d",&n);
i=n;
aa:
c=c+1;
j=i;
k=0;
   while(j>0)
    {
      rem=(j%10);
      k=k*10+rem;
      j/=10;
    }
  if(k==i)
  {
  printf("The Palindrome Of %d is %d ",n,i);
  printf("\nIt Is Found In %d-th Count" ,c);
  getch();
  exit(2);
  }
 i=(k+i);
 goto aa;
}