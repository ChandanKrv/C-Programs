// ANY BASE TO ANY BASE CONVERSION PROGRAM
#include<math.h>
void main()
{
char s[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char st[20],t;
int n,top,it,r,m,sb,tb,sb1,tb1,rem,sum=0,i=0;
clrscr();
printf("\tEnter The Source Base...");
scanf("%d",&sb);
printf("\n\tEnter The Target Base...");
scanf("%d",&tb);
top=-1;

//DECIMAL TO ANY BASE
printf("\nDECIMAL TO ANY BASE");
printf("\n\tEnter The Value Number...\t");
scanf("%d",&n);
tb1=tb;
sb1=sb;
     if(tb1<=9)
     {
      while(n>=tb1)
	{
	 it=n%tb1;
	 top++;
	 st[top]=it;
	 n/=tb1;
	}
	top++;
	st[top]=n;
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

else
{
while(n>=tb1)
{
it=n%tb1;
top++;
st[top]=s[it];
n/=tb1;
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


//ANY BASE TO DECIMAL
printf("\n\n\nANY BASE TO DECIMAL");
printf("\n\tEnter The Value Number...\t");
scanf("%d",&n);
     if(sb1<=9)
      {
      while(n>0)
      {
      rem=n%10;
      sum=sum+(rem*pow(sb1,i));
      i++;
      n/=10;
      }
	  printf("\n\n\t%d",sum);
	  getch();
      }
     else
     {


}