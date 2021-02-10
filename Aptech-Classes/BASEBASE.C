void main()
{
char s[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char st[20],t;
int n,top,it,r,m;
clrscr();
printf("\n\n\tEnter The Base...b(binary),o(octal),x(hex)\t");
scanf("%s",&t);
top=-1;
if(t=='b'||t=='o'||t=='x')
{
printf("\n\n\tEnter The Value Of Decimal Number...\t");
scanf("%d",&n);
  if(t=='b'||t=='o')
   {
    if(t=='b')
     {
       while(n>=2)
	{
	 it=n%2;
	 top++;
	 st[top]=it;
	 n/=2;
	}
	top++;
	st[top]=n;
      }
	if(t=='o')
	{
	 while(n>=8)
	   {
	    it=n%8;
	    top++;
	    st[top]=it;
	    n/=8;
	   }
	    top++;
	    st[top]=n;
	 }
	  r=st[top];
	  top--;
	  while(top>=0)
	  {
	    r*=10;
	    r+=st[top];
	    top--;
	  }
	  printf("\n\n\t%d",r);
	  getch();
      }
if(t=='x')
{
while(n>=16)
{
it=n%16;
top++;
st[top]=s[it];
n/=16;
}
top++;
st[top]=s[n];
printf("\n\t");
while(top>=0)
{
printf("%c",st[top]);
top--;
}
getch();
}
}
else
printf("\n\n\t\tArgument Mismatch....");
exit(1);
}