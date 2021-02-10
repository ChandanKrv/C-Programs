/*program listing of data-str\linklst.c
To construct a single linked list using structure and pointer conception.*/
#include <alloc.h>
 struct nodes
  {
    int info;
    struct nodes *next;
  };
 typedef struct nodes node;
node *get_node();
void free_node(void *);
void main()
  {
    node *start=NULL;
    int choice=0;
    int menu();
    void insert(node **);
    void delete(node **);
    void display(node *);
    void reverse(node **);
    void exit();
    while(choice!=5)
      {
	choice=menu();
	switch(choice)
	  {
	    case 1:		/*Insert option....*/
	      insert(&start);
	      break;
	    case 2:		/*Deletion option....*/
	      delete(&start);
	      break;
	    case 3:		/*Display option....*/
	      display(start);
	      break;
	    case 4:reverse(&start);  /*Reverse A Linked List*/
		   break;
	    case 5:printf("\n\n\n\t\tH A V E  A  N I C E  D A Y ! ! ! !");
		   getch();
		   exit();			 }

      }
  }
void delete(node **st)
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
		//free_node(ptrnext);
		free(ptrnext);
	      }
	  }
      }
    printf("\n\n\t\tDELETE option has been completed successfully....");
  }
void insert(node **st)
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
void display(node *st)
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
     printf("\n\t\tNode address = %u, Node info = %d and Node link = %u...."
					,ptr,ptr->info,ptr->next);
	    ptr=ptr->next;
	  }
      }
    printf("\n\n\t\tDISPLAY option has been completed successfully....");
  }

void reverse(node **plist)
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
getch();
}

node *get_node()
  {
    node *new_node;
    /* allocate memory for new node */
    ((node *) new_node = (node *) malloc(sizeof(node)));
    return(new_node);
  }


void free_node(void *ptr)
  {
    free(ptr);
  }


/*void exit()
  {
    printf("\n\n\n\t\tH A V E  A  N I C E  D A Y ! ! ! !");
    getch();
    exit();
  }*/


int menu()
  {
    int ch;
    ch=0;
    while(ch<1 || ch>5)
      {
	clrscr();
	printf("\n\n\t\tM A I N  M E N U....");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t\t1 > I N S E R T  O P T I O N ....");
	printf("\n\n\t\t2 > D E L E T E  O P T I O N ....");
	printf("\n\n\t\t3 > D I S P L A Y  O P T I O N ....");
	printf("\n\n\t\t4 > R E V E R S E  O P T I O N ....");
	printf("\n\n\t\t5 > E X I T  O P T I O N ....");
	printf("\n\n\t\tPlease enter the choice number....");
	scanf("%d",&ch);
      }
    return(ch);
  }