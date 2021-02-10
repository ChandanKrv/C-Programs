int jm;
long float mm;
void fac();
void powr();
void pal();
void fib();
void toh();
void d2b();
#include<math.h>
void main()
{
  int choice;
  clrscr();
  printf("\n\n\t\t*****************MAIN MENU*************************");
  printf("\n\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
  printf("\n\n\t\t1>>Factorial Number Using Recursion.....");
  printf("\n\t\t2>>Power Function Using Recursion.....");
  printf("\n\t\t3>>Palindrome Using Recursion.....");
  printf("\n\t\t4>>Fibonacci Number Using Recursion.....");
  printf("\n\t\t5>>Towers Of Hanoi Using Recursion.....");
  printf("\n\t\t6>>Decimal To Binary Using Recursion.....");
  printf("\n\t\t7>>Exit From Program.....");
  printf("\n\n\t\tEnter Your Choice...........");
  scanf("%d",&choice);
   if(choice < 1 || choice > 7)
    {
      printf("\n\t\tWrong Entry Must Be Prohibited.........");
      getch();
      exit();
    }
   else
    {
      switch(choice)
	{
	  case 1:fac();
		 break;
	  case 2: powr();
		 break;
	  case 3:pal();
		 break;
	  case 4:fib();
		 break;
	  case 5:toh();
		 break;
	  case 6:d2b();
		 break;
	  case 7:printf("\n\t\tOK TA TA BYE BYE........");
		 getch();
		 exit();
	}
    }
  }

		     /*FACTORIAL NUMBER PRINTING*/

void fac()
{
    long m,n;
    long fact(long);
    clrscr();
    printf("\n\n\t\tEnter The Number=> ");
    scanf("%ld",&n);
    m=fact(n);
    printf("\n\n\t\tThe Result Of Factorial Is.....%ld",m);
    getch();
}

   long fact(long int n)
   {
       if(n==0||n==1)
       return(1);
       else
       return(fact(n-1)*n);
    }
		/* POWER FUNCTION GENERATION*/

void powr()
{
long float n,j,x;
long float power(long float);
clrscr();
printf("\n\n\t\tEnter The Number.....");
scanf("%lf",&mm);
printf("\n\n\t\tEnter The Power.....");
scanf("%lf",&n);
x=n;
if(x<0)
n*=-1;
else
n*=1;
j=power(n);
if(x<0)
j=1/j;
else
j=1*j;
printf("\n\n\t\tThe Result Is.....%lf",j);
getch();
}

long float power(long float n)
{
long float s=mm;
if(n==0)
return(1);
if(n==1)
return(mm);
else
return(s*=power(n-1));
}

		 /*PALINDROME NUMBER CHECKING*/

void pal()
{
long palind(long);
long n,q,i;
clrscr();
printf("\n\n\t\t Enter The Number To Be Checked:- ");
scanf("%ld",&n);
q=n;
jm=log10(n);
i=palind(n);
if(q==i)
	printf("\n\n\t\t Palindrom Number %ld And %ld ",q,i);
else
	printf("\n\n\t\t Not Palindrom Number %ld And %ld ",q,i);
   getch();
}
     long palind(long nn)
	       {
	       long r,i;
	       r=nn%10;
	       if(nn==0)
	       return(r);
	       return((palind(nn/10)/10)+(r*pow(10,jm)));
	       }
		/*FIBBONACCI NUMBER PRINTING*/

void fib()
{
int old=0,current=1,n;
void fibo(int old1,int current1,int n1);
clrscr();
printf("\n\n\t\tEnter How Many Term :");
scanf("%d",&n);
printf("\n\t***********************************************************");
printf("\n\t\tThe Fibonacci Series Is:");
printf("\n\t%d\t%d\t",old,current);
fibo(old,current,n);
printf("\n\t***********************************************************");
printf("\n\n\t\tPress Any Key To TaTa:");
getch();
}
void fibo(int old1,int current1,int n1)
{
static int term=3;
if(term<=n1)
{
printf("%d\t",old1+current1);
term=term+1;
fibo(current1,old1+current1,n1);
}
}
		/*TOWERS OF HANOI SIMULATION*/


void toh()
{
int n;
int y;
void tower(int , char , char , char );
clrscr();
printf("\n\n\t****************************************************************");
printf("\n\t\tThe Starting Location Is------A");
printf("\n\t\tThe Destination Location Is---C");
printf("\n\t\tThe Auxiliary Location Is-----B");
printf("\n\t*****************************************************************");
printf("\n\t\tEnter The Number Of Disks......");
scanf("%d",&n);
printf("\t*****************************************************************");
y=pow(2,n);
y--;
tower(n,'A','C','B');
printf("\n\t***************************************************************");
printf("\n\t\tThe Total No. Of Comparison Is.....%d",y);
printf("\n\t***************************************************************");
getch();
}

void tower(int n, char beg, char end, char aux)
{
if(n==1)
{
printf("\n\t\tMove Disk 1 From Place %c To Place %c",beg,end);
return;
}
tower(n-1,beg,aux,end);
delay(1000);
printf("\n\t\tMove Disk %d From Place %c To Place %c",n,beg,end);
delay(1000);
tower(n-1,aux,end,beg);
}

		   /* DECIMAL TO BINARY CONVERSION*/

void d2b()
{
long n,b,i,ss;
long binary(long);
clrscr();
printf("\n\n\t\t Enter The No.In Decimal Form:- ");
scanf("%ld",&n);
ss=binary(n);
printf("\n\n\t\tThe Binary Equivalent Is....%ld",ss);
getch();
}
	      long binary(long n)
		{
		long rem;
		rem=n%2;
		if(n==0)
		return(rem);
		else
		return(binary(n/2)*10+rem);
		}