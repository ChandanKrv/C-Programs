#include<alloc.h>
struct queue
{
int data;
struct queue *next;
};
typedef struct queue node;
node *front=NULL,*rear=NULL;
void main()
{
int s;
void insrear();
void mindel();
void display();
clrscr();
while(s!=4)
{
clrscr();
printf("\n\t\t*******************MAIN MENU***********************");
printf("\n\t\t1>> I N S E R T   A T   R E A R  ");
printf("\n\t\t2>> D E L E T E   M I N I M U M  E L E M E N T  ");
printf("\n\t\t3>> D I S P L A Y   O P E R A T I O N  ");
printf("\n\t\t4>> E X I T  P R O G R A M  ");
printf("\n\n\t\t Enter Your Choice:- ");
scanf("%d",&s);
if (s < 1 || s > 4)
{
printf("\n\n\t\tEntry Not Allowed.....");
getch();
exit();
}

switch(s)
{
case 1: insrear();
	break;
case 2: mindel();
	break;
case 3: display();
	break;
case 4: printf("\n\n\t\tExit From The Program.......");
	getch();
	exit();
}
}
}

void insrear()
{
int x;
node *t,*r;
t=(node *)malloc(sizeof(node));
printf("\n\t\t Enter The No. You Want To Insert:- ");
scanf("%d",&x);
t->data=x;
t->next=NULL;
if(front==NULL)
front=t;
else
rear->next=t;
rear=t;
}


void display()
{
node *q;
q=front;
if(q==NULL)
printf("\n\n\t\tThere Is No Item In The List....");
while(q!=NULL)
{
printf("\n\t\t The Data Is....%d",q->data);
q=q->next;
}
getch();
}

void mindel()
{
node *p,*q,*r,*ptr,*ptrnext;
int min;
p=front;
min=p->data;
p=p->next;
while(p!=NULL)
{
if(min > p->data)
min=p->data;
p=p->next;
}


      if ((front)->data==min)
	  {
	    printf("\n\n\t\tItem Has Been Found In The First Node....");
	    ptr=front;
	    front=(front)->next;
	    free(ptr);
	  //front=NULL;
	  }
	else
	  {
	    ptr=front;
	    ptrnext=(front)->next;
	    while(ptrnext->data!=min && ptrnext!=NULL)
	      {
		ptr=ptr->next;
		ptrnext=ptrnext->next;
	      }
		printf("\n\n\t\tDeleting The Node After %d....",ptr->data);
		ptr->next=ptrnext->next;
		free(ptrnext);
	  }
printf("\n\n\t\tThe Minimum Element That Is Returned Is...%d",min);
getch();
}