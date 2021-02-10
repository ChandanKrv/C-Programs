//Program name :- day-9\factoria.c


#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int n,f;
    int factorial(int);

    clrscr();

    printf("\n\n\t\tPlease enter the number....");
    scanf("%d",&n);

    f=factorial(n);

    printf("\n\n\t\tSo the required factorial is %d....",f);

    getch();
  }

int factorial(int nn)
  {
    int f,ftemp;

    printf("\n\t\tI am executing for n = %d....",nn);

    if (nn==1 || nn==0)
      return(1);

    ftemp=factorial(nn-1);

    f=ftemp*nn;

    return(f);
  }
