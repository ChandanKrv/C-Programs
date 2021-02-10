void main()
{
int n,i,r,a=1;
clrscr();
 printf("\n\t\tEnter the number\t");
 scanf("%d",&n);
 for(i=2;i<=n-1;i++)
 {
 r=n%i;
 if(r==0)
 {
 a=0;
 break;
 }
}
 if(a==1)
 {
 printf("\n\t\tThe number is Prime");
 }
 else
  {
   printf("\n\t\tThe number is not Prime");
 }
 getch();
 }