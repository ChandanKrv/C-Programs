/*program listing of data-str\linklst.c
To construct a single linked list using structure and pointer conception.*/
#include <alloc.h>
typedef struct nodes
  {
    int info;
    struct nodes *next;
  }node;
node *get_node(void);
void free_node(node *);
void main(void)
  {
    node *start;
    int choice;
    int menu();
    void initialize(node **,int *);
    void ll_insert(node **);
    void ll_delete(node **);
    void ll_display(node *);
    void ll_count(node **);
    void ll_reverse(node **);
    void ll_exit();
    initialize(&start,&choice);
    while(choice!=6)
      {
	choice=menu();
	switch(choice)
	  {
	    case 1:		   /*Insert option....*/
	      ll_insert(&start);
	      break;
	    case 2:		   /*Deletion option....*/
	      ll_delete(&start);
	      break;
	    case 3:		   /*Display option....*/
	      ll_display(start);
	      break;
	    case 4:                /*Count option.....*/
	      ll_count(&start);
	      break;
	    case 5:                /*Reverse option....*/
	      ll_reverse(&start);
	      break;
	    case 6:		   /*Exit option......*/
	      ll_exit();
	      break;
	  }
	getch();
      }
  }

			/*INSERTION OF A NODE IN ANY POSITION*/

void ll_insert(node **st)
  {
    int search_item,item;
    node *ptr,*new_ptr;
    printf("\n\n\t\tPlease enter the new item value....");
    scanf("%d",&item);
    if (*st==NULL)
      {
	printf("\n\n\t\tThere is no node in the LINKED LIST....");
	printf("\n\n\t\tCreating the first node of the LINKED LIST....");
	*st=get_node();
	(*st)->info=item;
	(*st)->next=NULL;
      }
    else
      {
	printf("\n\n\t\tPlease enter the item value to be searched....");
	scanf("%d",&search_item);
	new_ptr=get_node();
	new_ptr->info=item;
	ptr=*st;
	while(ptr->info!=search_item && ptr!=NULL)
	  {
	    ptr=ptr->next;
	  }
	if (ptr==NULL)
	  {
	    printf("\n\n\t\tInvalid search....");
	    printf("\n\n\t\tPrepending as the first node of the LINKED LIST....");
	    new_ptr->next=(*st);
	    *st=new_ptr;
	  }
	else
	  {
	    printf("\n\n\t\tSuccessful searching....");
	    printf("\n\n\t\tInserting the node after %d....",search_item);
	    new_ptr->next=ptr->next;
	    ptr->next=new_ptr;
	  }
      }
    printf("\n\n\t\tINSERT option has been completed successfully....");
  }


		   /*DELETION OF ANY NODE FROM ANY POSITION*/

void ll_delete(node **st)
  {
    int search_item,item;
    node *ptr,*ptrnext;
    if (*st==NULL)
      {
	printf("\n\n\t\tThere is no node in the LINKED LIST....");
      }
    else
      {
	printf("\n\n\t\tPlease enter the item value to be searched....");
	scanf("%d",&search_item);
	if ((*st)->info==search_item)
	  {
	    printf("\n\n\t\tItem has been found in the first node....");
	    ptr=*st;
	    *st=(*st)->next;
	    free_node(ptr);
	  }
	else
	  {
	    ptr=*st;
	    ptrnext=(*st)->next;
	    while(ptrnext->info!=search_item && ptrnext!=NULL)
	      {
		ptr=ptr->next;
		ptrnext=ptrnext->next;
	      }
	    if (ptrnext==NULL)
	      {
		printf("\n\n\t\tInvalid search....");
	      }
	    else
	      {
		printf("\n\n\t\tSuccessful searching....");
		printf("\n\n\t\tDeleting the node after %d....",ptr->info);
		ptr->next=ptrnext->next;
		free_node(ptrnext);
	      }
	  }
      }
    printf("\n\n\t\tDELETE option has been completed successfully....");
  }


		 /*DISPLAY THE CONTENTS OF NODES OF A LINKED-LIST*/


void ll_display(node *st)
  {
    node *ptr;
    if (st==NULL)
      {
	printf("\n\n\t\tThere is no node in the LINKED LIST....");
      }
    else
      {
	if (st->next==NULL)
	  printf("\n\n\t\tOnly a single node in the LINKED LIST....");
	ptr=st;
	while(ptr!=NULL)
	  {
	    printf("\n\t\tNode address = %x, Node info = %d and Node link = %x...."
					,ptr,ptr->info,ptr->next);
	    ptr=ptr->next;
	  }
      }
    printf("\n\n\t\tDISPLAY option has been completed successfully....");
  }




			/*COUNT THE NUMBER OF NODES*/

void ll_count(node **st)
{
int i=0;
node *q;
q=*st;
while(q!=NULL)
{
i++;
(q)=(q)->next;
}
printf("\n\n\t\tThe Number Of Nodes in The List Is.....%d",i);
}




			   /*REVERSE A LINKED-LIST*/


void ll_reverse(node **plist)
{
node *q=NULL,*p,*r=NULL;
p=*plist;
clrscr();
while(p!=NULL)
{
r=q;
q=p;
p=p->next;
q->next=r;
}
p=q;
while((p)->next!=NULL)
{
printf("\n");
printf("\n\t\tThe Value Is %d " ,(p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(p),(p)->next);
(p)=(p)->next;
}
if((p)->next==NULL)
{
printf("\n");
printf("\n\t\tThe Value At Node %d Is %d " ,(p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(p),(p)->next);
}
}


			/*EXIT FROM PROGRAM*/


void ll_exit(void)
  {
    printf("\n\n\n\t\tH A V E  A  N I C E  D A Y ! ! ! !");
    getch();
    exit();
  }



		  /*CREATION OF A NODE IN MEMORY*/


node *get_node(void)
  {
    node *new_node;
    /* allocate memory for new node */
    if (((node *) new_node = (node *) malloc(sizeof(node))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
    return(new_node);
  }



		       /*DELETION OF A NODE FROM MEMORY*/

void free_node(node *ptr)
  {
    free(ptr);
  }


			 /*INITIALIZING THE FIRST NODE*/


void initialize(node **st,int *ch)
  {
    *st=NULL;
    *ch=0;
  }




		       /* MENU CREATION*/

int menu(void)
  {
    int ch;
    ch=0;
    while(ch<1 || ch>6)
      {
	clrscr();
	printf("\n\n\t\tM A I N  M E N U....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t\t1 > I N S E R T  O P T I O N ....");
	printf("\n\n\t\t2 > D E L E T E  O P T I O N ....");
	printf("\n\n\t\t3 > D I S P L A Y  O P T I O N ....");
	printf("\n\n\t\t4 > C O U N T  O P T I O N ....");
	printf("\n\n\t\t5 > R E V E R S E  O P T I O N ....");
	printf("\n\n\t\t6 > E X I T  O P T I O N ....");
	printf("\n\n\t\tPlease enter the choice number....");
	scanf("%d",&ch);
      }
    return(ch);
  }