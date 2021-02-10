/*Program name :- day-5\queue.c*/
/*
QUEUE - FIRST IN FIRST OUT (FIFO) / LAST IN LAST OUT (LILO) DATA STRUCTURE
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fig     Location numbers
No.   1  2  3  4  5  6  7  8       front   rear   action/comment
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1.                                   0      0     initialization
2.    11 22 33                       1      3     insert 11, 22 and 33
3.    11 22 33 44 55 66              1      6     insert 44, 55 and 66
4.          33 44 55 66              3      6     delete 11 and 22
5.          33 44 55 66 77 88        3      8     insert 77 and 88
6.    99    33 44 55 66 77 88        3      1     insert 99
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Algorithm for the queue insert operation :-
-------------------------------------------
   QUEUE_INSERT(QUEUE,FORNT,REAR,ITEM,MAXQUEUE)
1. IF ((FRONT=1 AND REAR=MAXQUEUE) OR (FRONT=REAR+1))
   THEN PRINT "OVERFLOW" AND EXIT.
2. IF FRONT=NULL THEN FRONT=1 AND REAR=1
		 ELSE
   IF REAR=MAXQUEUE THEN REAR=1
   ELSE REAR=REAR+1
3. QUEUE[REAR]=ITEM
4. EXIT
Algorithm for the queue delete operation :-
-------------------------------------------
    QUEUE_DELETE(QUEUE,FRONT,REAR,ITEM,MAXQUEUE)
 1. IF FRONT=NULL THEN PRINT "UNDERFLOW" and EXIT
 2. ITEM=QUEUE[FRONT]
 3. IF FRONT=REAR THEN FRONT=NULL
   ELSE IF FRONT=MAXQUEUE THEN FRONT=1
   ELSE FRONT=FRONT+1
 4. EXIT
 */
#include <stdio.h>
#include <conio.h>
void main(void)
  {
    int queue[11],maxq,front,rear,choice,i;
    void initialize(int *,int *,int *,int *);
    void q_insert(int [],int,int *,int *);
    void q_delete(int [],int,int *,int *);
    void q_display(int [],int,int,int);
    void q_exit(void);
    int menu(void);
    initialize(&front,&rear,&choice,&maxq);
    while(choice!=4)
      {
	choice=menu();
	switch(choice)
	  {
	    case 1:					/*INSERT option....*/
	      q_insert(queue,maxq,&front,&rear);
	      break;
	    case 2:					/*DELETE option....*/
	      q_delete(queue,maxq,&front,&rear);
	      break;
	    case 3:					/*DISPLAY option....*/
	      q_display(queue,maxq,front,rear);
	      break;
	    case 4:					/*EXIT option....*/
	      q_exit();
	      break;
	  }
	getch();
      }
  }
void q_display(int q[],int maxq,int fr,int re)
  {
    int limit,i;
    if (fr==NULL)
      {
	printf("\n\n\t\tNo data to display....");
      }
    else
      if (fr==re)
	printf("\n\n\t\tOnly a single data in the queue....");
      else
	{
	  if (fr<=re)
	    limit=re;
	  else
	    limit=maxq;
	  for(i=fr;i<=limit;i++)
	    {
	      printf("\n\t\tLocation No. = %d and data = %d....",i,q[i]);
	    }
	  if (fr>re)
	    for(i=1;i<=re;i++)
	      printf("\n\t\tLocation No. = %d and data = %d....",i,q[i]);
	  printf("\n\n\t\tDisplay has been completed successfully....");
	}
  }
void q_insert(int q[],int maxq,int *fr,int *re)
  {
    int item;
    if ((*fr==1 && *re==maxq) || (*fr==*re+1))
      {
	printf("\n\n\t\tO V E R F L O W ! ! ! ");
      }
    else
      {
	printf("\n\n\t\tPlease enter the item to be inserted....");
	scanf("%d",&item);
	if(*fr==NULL) printf("\n\n\t\tInserting first data in the queue....");
	if (*fr==NULL) {*fr=1; *re=1;}
	else if (*re==maxq) *re=1;
	else ++*re;
	q[*re]=item;
	printf("\n\n\t\tItem = %d inserted successfully at location = %d....",
							   item,*re);
      }
  }
void q_delete(int q[],int maxq,int *fr,int *re)
  {
    int item;
    if (*fr==NULL)
      {
	printf("\n\n\t\tU N D E R F L O W ! ! ! ");
      }
    else
      {
	item=q[*fr];
	if(*fr==*re) printf("\n\n\t\tDeleteing Last data of the queue....");
	if (*fr==*re) *fr=NULL;
	else if (*fr==maxq) *fr=1;
	else ++*fr;
	printf("\n\n\t\tItem = %d deleted successfully....",item);
      }
  }
int menu(void)
  {
    int ch=0;
    while(ch<1 || ch>4)
      {
	clrscr();
	printf("\n\n\t\tM A I N  M E N U ....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t\t1 >  I N S E R T  O P T I O N ....");
	printf("\n\n\t\t2 >  D E L E T E  O P T I O N ....");
	printf("\n\n\t\t3 >  D I S P L A Y  O P T I O N ....");
	printf("\n\n\t\t4 >  E X I T   O P T I O N ....");
	printf("\n\n\t\tPlease enter your option number....");
	scanf("%d",&ch);
      }
    return(ch);
  }
void q_exit(void)
  {
    clrscr();
    printf("\n\n\n\n\n\n\t\t\tG O O D  B Y E ! ! ! ! ");
  }
void initialize(int *fr,int *re,int *ch,int *maxq)
  {
    *fr=0;
    *re=0;
    *ch=0;
    *maxq=10;
  }