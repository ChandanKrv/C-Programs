/*Program name :- day-7\struct1.c */

/*Program demo on structure.... */

#include <stdio.h>
#include <conio.h>

struct record
  {
    int age;
    int sal;
  };

void main(void)
  {
    struct record rec;
    int i;

    struct record input(void);
    void display(struct record);

    clrscr();

    rec=input();

    display(rec);

    getch();
  }

struct record input(void)
  {
    struct record rr;

    printf("\n\n\t\tPlease enter the age....");
    scanf("%d",&rr.age);

    printf("\t\tPlease enter the salary....");
    scanf("%d",&rr.sal);

    return(rr);
  }

void display(struct record rrr)
  {
    printf("\n\n\t\tSo the entered age is %d....",rrr.age);
    printf("\n\t\tSo the entered salary is %d....",rrr.sal);
  }