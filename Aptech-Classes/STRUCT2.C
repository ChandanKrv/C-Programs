/*Program name :- day-7\struct2.c*/

/*Class on nested structures....*/

#include <stdio.h>
#include <conio.h>

struct date
  {
    int mm;
    int dd;
    int yy;
  };

struct record
  {
    int age;
    int sal;
    struct date doj;
  };

void main(void)
  {
    struct record rec;
    int i;

    void input(struct record *);
    void display(struct record);

    clrscr();

    input(&rec);	    /*call by reference*/

    display(rec);           /*call by value*/

    getch();
  }

void input(struct record *rr)       /*input has input argument of pointer type*/
  {
    printf("\n\n\t\tPlease enter the age....");
    scanf("%d",&rr->age);

    printf("\t\tPlease enter the salary....");
    scanf("%d",&rr->sal);

    printf("\t\tPlease enter the month....");
    scanf("%d",&rr->doj.mm);

    printf("\t\tPlease enter the day....");
    scanf("%d",&rr->doj.dd);

    printf("\t\tPlease enter the year....");
    scanf("%d",&rr->doj.yy);
  }

void display(struct record rrr)
  {
    printf("\n\n\t\tSo the entered age is %d....",rrr.age);
    printf("\n\t\tSo the entered salary is %d....",rrr.sal);
    printf("\n\t\tSo the entered month is %d....",rrr.doj.mm);
    printf("\n\t\tSo the entered day is %d....",rrr.doj.dd);
    printf("\n\t\tSo the entered year is %d....",rrr.doj.yy);
  }