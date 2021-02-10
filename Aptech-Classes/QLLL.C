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
void delfront();
void display();
void empty();
clrscr();
while(s!=5)
{
clrscr();
printf("\n\t\t*******************MAIN MENU***********************");
printf("\n\t\t1>> I N S E R T   A T   R E A R  ");
printf("\n\t\t2>> D E L E T E   A T   F R O N T  ");
printf("\n\t\t3>> D I S P L A Y   O P E R A T I O N  ");
printf("\n\t\t3>> E M P T Y   O P E R A T I O N  ");
printf("\n\t\t4>> E X I T  P R O G R A M  ");
printf("\n\n\t\t Enter Your Choice:- ");
scanf("%d",&s);
if (s < 1 || s > 5)
{
printf("\n\n\t\tEntry Not Allowed.....");
getch();
exit();
}

switch(s)
{
case 1: insrear();
	break;
case 2: delfront();
	break;
case 3: display();
	break;
case 4: empty();
	break;
case 5: printf("\n\n\t\tExit From The Program.......");
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



void delfront()
{
int x;
node *t,*q;
t=front;
if(t==NULL)
{
printf("\n\t\tQueue Underflow.....");
getch();
}
else
{
x=t->data;
front=t->next;
free(t);
printf("\n\n\t\tThe Deleted Item Is....%d",x);
getch();
}
}



void display()
{
node *q;
q=front;
while(q!=NULL)
{
printf("\n\t\t The Data Is....%d",q->data);
q=q->next;
}
getch();
}



void empty()
{
node *q;
q=front;
if(q==NULL)
{
printf("\n\t\tThe Queue Is Empty....");
getch();
}
else
{
printf("\n\t\tThe Queue Is Non-Empty....");
getch();
}
}