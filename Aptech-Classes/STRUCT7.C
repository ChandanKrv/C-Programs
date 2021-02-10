//Program name :- day-7\struct7.c

//Program on pointer-structure....

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct
  {
    int mm;
    int *dd;
    int yy;
  }date;

typedef struct
  {
    int age;
    int *sal;
    date *doj;
  }record;

void main(void)
  {
    record *p;
    void input(record **);
    void display(record *);
    void output(record);

    clrscr();

    /* allocate memory for mother variable */
    if ((p = (record *) malloc(sizeof(record))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for salary */
    if ((p->sal = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for doj */
    if ((p->doj = (date *) malloc(sizeof(date))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    /* allocate memory for date */
    if ((p->doj->dd = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }

    input(&p);
    display(p);
    output(*p);

    getch();
  }

void input(record **pp)
  {
    printf("\n\t\tPlease enter the age ....");
    scanf("%d",&(*pp)->age);

    printf("\t\tPlease enter the salary ....");
    scanf("%d",(*pp)->sal);

    printf("\t\tPlease enter the month ....");
    scanf("%d",&(*pp)->doj->mm) ;

    printf("\t\tPlease enter the date ....");
    scanf("%d",(*pp)->doj->dd);

    printf("\t\tPlease enter the year ....");
    scanf("%d",&(*pp)->doj->yy);
  }

void display(record *ppp)
  {
    printf("\n\n\n\t\tSo the entered age is %d....",ppp->age);
    printf("\n\t\tSo the entered salary is %d....",*ppp->sal);
    printf("\n\t\tSo the entered month is %d....",ppp->doj->mm);
    printf("\n\t\tSo the entered date is %d....",*ppp->doj->dd);
    printf("\n\t\tso the entered year is %d....",ppp->doj->yy);
  }

void output(record pppp)
  {
    printf("\n\n\n\t\tSo the entered age is %d....",pppp.age);
    printf("\n\t\tSo the entered salary is %d....",*pppp.sal);
    printf("\n\t\tSo the entered month is %d....",pppp.doj->mm);
    printf("\n\t\tSo the entered date is %d....",*pppp.doj->dd);
    printf("\n\t\tSo the entered year is %d....",pppp.doj->yy);
  }