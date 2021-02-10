//Program name :- day-9\fibno.c


#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int n,fib;
    int fibno(int);

    clrscr();

    printf("\n\n\t\tThis program finds the nth term of the fib. series...");
    printf("\n\n\t\tThe fibonacci series is 0, 1, 1, 2, 3, 5, 8, 13, 21....");

    printf("\n\n\t\tPlease enter the place number....");
    scanf("%d",&n);

    fib=fibno(n);

    printf("\n\n\t\tSo the required number is %d....",fib);

    getch();
  }

int fibno(int nn)
  {
    int f,ftemp1,ftemp2;

    //printf("\n\t\tI am executing for n = %d....",nn);

    if (nn==1 || nn==0)
      return(nn);

    ftemp1=fibno(nn-1);
    ftemp2=fibno(nn-2);

    f=ftemp1+ftemp2;

    return(f);
  }
