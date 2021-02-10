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
//void mindel();
void display();
clrscr();
while(s!=3)
{
clrscr();
printf("\n\t\t*******************MAIN MENU***********************");
printf("\n\t\t1>> I N S E R T   A T   R E A R  ");
printf("\n\t\t2>> D E L E T E   M I N I M U M  E L E M E N T  ");
printf("\n\t\t3>> D I S P L A Y   O P E R A T I O N  ");
printf("\n\t\t4>> E X I T  P R O G R A M  ");
printf("\n\n\t\t Enter Your Choice:- ");
scanf("%d",&s);
if (s < 1 || s > 3)
{
printf("\n\n\t\tEntry Not Allowed.....");
getch();
exit();
}

switch(s)
{
case 1: insrear();
	break;
/*case 2: mindel();
	break;*/
case 2: display();
	break;
case 3: printf("\n\n\t\tExit From The Program.......");
	getch();
	exit();
}
}
}

void insrear()
{
int x;
node *t,*r,*s,*p=NULL;
s=front;
t=(node *)malloc(sizeof(node));
printf("\n\t\t Enter The No. You Want To Insert:- ");
scanf("%d",&x);
t->data=x;
for(r=front;r!=NULL && x>(r)->data;r=r->next)
p=r;
if(p==NULL)
{
p=t;
front=p;
p->next=NULL;
}
else
{
while(s->next!=p)
s=s->next;
t->next=s->next;
s->next=t;
}
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
