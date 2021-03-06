//Program name :- day-7\struct6.c

//Program on pointer-structure....

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct date
  {
    int mm;
    int *dd;
    int yy;
  };

struct record
  {
    int *age;
    int sal;
    struct date *doj;
  };

void main(void)
  {
    struct record *rec;
    int i;

    void input(struct record **);
    void display(struct record *);
    void output(struct record);

    clrscr();

    /* allocate memory for mother variable rec */
    if (((struct record *)rec = (struct record *) malloc(sizeof(struct record))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for age integer */
    if (((int *)rec->age = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for doj field */
    if (((struct date *)rec->doj = (struct date *) malloc(sizeof(struct date))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for date integer */
    if (((int *)rec->doj->dd = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    input(&rec);	    //call by reference

    display(rec);           //call by value
    output(*rec);           //call by value

    getch();
  }

void input(struct record **rr)       //input has input argument of pointer type
  {
    printf("\n\n\t\tPlease enter the age....");
    scanf("%d",(*rr)->age);

    printf("\t\tPlease enter the salary....");
    scanf("%d",&(*rr)->sal);

    printf("\t\tPlease enter the month....");
    scanf("%d",&(*rr)->doj->mm);

    printf("\t\tPlease enter the day....");
    scanf("%d",(*rr)->doj->dd);

    printf("\t\tPlease enter the year....");
    scanf("%d",&(*rr)->doj->yy);
  }

void display(struct record *rrr)
  {
    printf("\n\n\t\tSo the entered age is %d....",*rrr->age);
    printf("\n\t\tSo the entered salary is %d....",rrr->sal);
    printf("\n\t\tSo the entered month is %d....",rrr->doj->mm);
    printf("\n\t\tSo the entered day is %d....",*rrr->doj->dd);
    printf("\n\t\tSo the entered year is %d....",rrr->doj->yy);
  }

void output(struct record pppp)
  {
    printf("\n\n\t\tSo the entered age is %d....",*pppp.age);
    printf("\n\t\tSo the entered salary is %d....",pppp.sal);
    printf("\n\t\tSo the entered month is %d....",pppp.doj->mm);
    printf("\n\t\tSo the entered day is %d....",*pppp.doj->dd);
    printf("\n\t\tSo the entered year is %d....",pppp.doj->yy);
  }







