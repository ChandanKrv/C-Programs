void main()
{
int n,b,i,k;
int binary(int);
clrscr();
printf("\n\t\tenter the no.:- ");
scanf("%d",&n);
binary(n);
getch();
}
       int binary(int num)
		   {
			int r;
			r=num%2;
			num/=2;
			if(num==0)
			{
			printf("\n\n\t\tThe Bin Equi Is....%d",r);
			return(r);
			}
			else
			binary(num);
			printf("%d",r);
		   }