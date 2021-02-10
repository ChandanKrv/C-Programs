/*program listing of data-str\linklIst.c
/*To construct a linked list using parallel arrays
/*
LINKED LIST
===========
Linked list is a collection of several nodes. Where each and every node will
contain two fields - info and link. The info field will contain information
(e.g. name, sex, age etc) and the link field contain the address of the next
node to which it is pointing.
To store several data we use to use array. The main disadvantage of using an
array is that if we want to perform insertion or deletion in an array then it
will involve lateral movement of physical data, which is time consuming.
Let us suppose that the array contains N number of data. If we want to insert
data at location number LOC then all data from location LOC to N are to be
shifted to LOC+1 to n places. On the other hand in case of deletion of a data
from location LOC from the array can easily be accomplished by moving data
from location N to LOC+1 to location N-1 to LOC.
But on the other hand in case of a linked list just performing link updation
we can easily perform insertion and deletion, without moving any data. So
linked list - this DATA STRUCTURE is very much useful in those applications
where we are suppose to perform rapid and frequent insertions and deletions.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	NODE
	ADDR.  INFO  LINK
	(NUM).
	-----------------
	   1      N     6
	_________________
	   2      I     9   START = 4
	_________________   AVAIL = 3
	   3            5
	_________________   STRING = "INDIA"
	   4      I     1
	_________________
	   5            8
	_________________
	   6      D     2
	_________________
	   7           10
	_________________
	   8            7
	_________________
	   9      A     0
	_________________
	   10           6
	 _________________
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    LL_INSERT(INFO,LINK,LOC,ITEM,START,AVAIL)
    /* insertion of a node with info=item after node having node number=loc
1.  PTR=START
2.  WHILE(PTR<>LOC AND PTR<>NULL) PTR=LINK[PTR]
3.  IF PTR=NULL THEN PRINT "INVALID ADDRESS":EXIT
4.  IF AVAIL=NULL THEN PRINT "OVERFLOW":EXIT.
5.  PTR=AVAIL:AVAIL=LINK[AVAIL]
6.  INFO[PTR]=ITEM
7.  LINK[PTR]=LINK[LOC]
8.  LINK[LOC]=PTR
9.  EXIT.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    LL_DELETE(INFO,LINK,LOC,ITEM,START,AVAIL)
    /* deletion of a node after the node having node number=loc
1.  PTR=START:IF START=NULL THEN PRINT "UNDERFLOW":EXIT
2.  WHILE(PTR<>LOC AND PTR<>NULL) PTR=LINK[PTR]
3.  IF PTR=NULL THEN PRINT "INVALID ADDRESS":EXIT
4.  PTR=LINK[LOC]
5.  ITEM=INFO[PTR]
6.  LINK[LOC]=LINK[PTR]
7.  LINK[PTR]=AVAIL
8.  AVAIL=PTR
9.  EXIT.
============================================================================
*/
#define NULL 0
void main()
  {
    int info[11],link[11],start,avail,choice;
    void ll_initialize(int [],int *,int *,int *);
    void ll_insert(int [],int [],int *,int *);
    void ll_delete(int [],int [],int *,int *);
    void ll_display(int [],int [],int,int);
    void ll_goodbye(void);
    int menu(void);
    ll_initialize(link,&start,&avail,&choice);
    while(choice!=4)
      {
	choice=menu();
	switch(choice)
  {
	    case 1:		/* INSERT  option */
	      ll_insert(info,link,&start,&avail);
	      break;
	    case 2:		/* DELETE  option */
	      ll_delete(info,link,&start,&avail);
	      break;
	    case 3:		/* DISPLAY option*/
	      ll_display(info,link,start,avail);
	      break;
	    case 4:		/* EXIT    option*/
	      ll_goodbye();
	      break;
	  }
	getch();
      }
  }
void ll_insert(int in[],int ll[],int *st,int *av)
  {
    int loc,item,flag,ptr;
    int ll_test(int [],int,int);
    if(*av==NULL)
      {
	printf("\n\n\t\tO V E R  F L O W ! ! ! ");
      }
    else
      {
	printf("\n\n\t\tPlease enter the previous node address....");
	scanf("%d",&loc);
	printf("\n\t\tPlease enter the item value....");
	scanf("%d",&item);
	flag=ll_test(ll,*st,loc);
	ptr=*av;
	*av=ll[ptr];
	in[ptr]=item;
	if (flag==0)
	  {
	    printf("\n\n\t\tInvalid address has been provided....");
	    ll[ptr]=*st;
	    *st=ptr;
    printf("\n\n\t\tNode %d has been prepended successfully....",ptr);
	  }
	else
	  {
	    printf("\n\n\t\tValid address....");
	    ll[ptr]=ll[loc];
	    ll[loc]=ptr;
	    printf("\n\n\t\tNode %d has been inserted successfully....",ptr);
	  }
      }
  }
void ll_display(int in[],int ll[],int st,int av)
  {
    int ptr;
    printf("\n\n\t\tDisplay of the MAIN LINKED LIST....");
    if (st==NULL)
      printf("\n\n\t\tThere is no node in the main linked list....");
    else
      {
	ptr=st;
	while(ptr!=NULL)
	  {
	    printf("\n\t\tNode address = %d, info = %d and link = %d",ptr,in[ptr],ll[ptr]);	    ptr=ll[ptr];
	 }
      }
    printf("\n\n\t\tDisplay of the AVAIL LINKED LIST....");
    if (av==NULL)
      printf("\n\n\t\tThere is no node in the avail linked list....");
    else
      {
	ptr=av;
	while(ptr!=NULL)
	  {
	    printf("\n\t\tNode address = %d and link = %d",ptr,ll[ptr]);
	    ptr=ll[ptr];
	  }
      }
    printf("\n\n\t\tEnd of DISPLAY....");
  }
void ll_delete(int in[],int ll[],int *st,int *av)
  {
    int loc,item,flag,ptr;
    int ll_test(int [],int,int);
    if (*st==NULL)
      {
	printf("\n\n\t\tU N D E R  F L O W ! ! ! ");
      }
    else
      {
	printf("\n\n\t\tPlease enter the previous node address....");
	scanf("%d",&loc);
	flag=ll_test(ll,*st,loc);
	if (flag==0)
	  {
	    printf("\n\n\t\tInvalid address has been provided....");
	    item=in[*st];
	    ptr=*st;
	    *st=ll[*st];
	    ll[ptr]=*av;
	    *av=ptr;
	    printf("\n\n\t\tFirst node %d has been deleted successfully....",ptr);
	  }
	else
	  {
	    printf("\n\n\t\tValid address....");
	    ptr=ll[loc];
	    item=in[ptr];
	    ll[loc]=ll[ptr];
	    ll[ptr]=*av;
	    *av=ptr;
	    printf("\n\n\t\tThe node %d has been deleted successfully....",ptr);
	  }
      }
  }
int ll_test(int ll[],int st,int loc)
  {
    int ptr;
    ptr=st;
    while(ptr!=NULL && ptr!=loc) ptr=ll[ptr];
    if (ptr==NULL) return(0);
    else return(1);
  }
void ll_initialize(int ll[],int *st,int *av,int *ch)
  {
    int i;
    for(i=1;i<=9;i++) ll[i]=i+1;
    ll[10]=NULL;
    *st=NULL;
    *av=1;
    *ch=NULL;
  }
void ll_goodbye(void)
  {
    clrscr();
    printf("\n\n\n\n\n\n\n\n\t\t\t\tG O O D  B Y E ! ! !");
  }
int menu()
  {
    int ch=0;
    while(ch<1 || ch>4)
      {
	clrscr();
	printf("\n\t\tM A I N  M E N U ....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t\t1 > I N S E R T  O P T I O N ....");
	printf("\n\n\t\t2 > D E L E T E  O P T I O N ....");
	printf("\n\n\t\t3 > D I S P L A Y  O P T I O N ....");
	printf("\n\n\t\t4 > E X I T  O P T I O N ....");
	printf("\n\n\t\tPlease enter the choice number....");
	scanf("%d",&ch);
      }
    return(ch);
  }