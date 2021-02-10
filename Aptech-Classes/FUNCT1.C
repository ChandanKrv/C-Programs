//Program name :- day-2\funct1.c

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int a,b,c;				//variable declarations

    void cls(void);			//function prototype declarations
    int input(void);
    int add(int,int);
    void display(int);
    void halt(void);

    cls();                              //to clear the screen

    a=input();                          //to take the first number as input
    b=input();                          //to take the second number as input

    c=add(a,b);				//to perform the addition

    display(c);				//display the result

    halt();                             //press any key to continue
  }

void display(int h)
  {
    printf("\n\n\t\tSo the required sum is %d....",h);
  }

void cls(void)
  {
    clrscr();
  }

int input(void)
  {
    int temp;

    printf("\n\n\t\tPlease enter the number....");
    scanf("%d",&temp);

    return(temp);
  }

int add(int m,int n)
  {
    return(m+n);
  }

void halt(void)
  {
    getch();
  }







