void main()
{
long n,b,i,ss;
long binary(long);
clrscr();
printf("\n\t\t enter the no.:- ");
scanf("%ld",&n);
ss=binary(n);
printf("\n\t\tThe Bin. Is....%ld",ss);
getch();
}
		      long binary(long n)
			{
			long rem,s;
			rem=n%2;
			n/=2;
			if(n==0)
			return(rem);
			else
			s=binary(n)*10+rem;
			return(s);
			}
