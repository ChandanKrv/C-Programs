#include<alloc.h>
struct stack
{
int data;
struct stack *next;
};
typedef struct stack node;
node *head=NULL;
void main()
{
int s;
void push();
void pop();
void display();
void empty();
clrscr();
while(s!=5)
{
clrscr();
printf("\n\t\t*******************MAIN MENU***********************");
printf("\n\t\t1>> P U S H   O P E R A T I O N  ");
printf("\n\t\t2>> P O P   O P E R A T I O N  ");
printf("\n\t\t3>> D I S P L A Y   O P E R A T I O N  ");
printf("\n\t\t4>> E M P T Y   O P E R A T I O N  ");
printf("\n\t\t5>> E X I T  P R O G R A M  ");
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
case 1: push();
	break;
case 2: pop();
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

void push()
{
int x;
node *t,*r;
t=(node *)malloc(sizeof(node));
printf("\n\t\t Enter The No. You Want To Insert:- ");
scanf("%d",&x);
t->data=x;
if(head==NULL)
head=t;
else
t->next=head->next;
head->next=t;
}

void pop()
{
int x;
node *t,*r;
t=head;
if(t==NULL)
{
printf("\n\t\tStack Underflow.....");
getch();
}
else
{
 r=t->next;
 x=r->data;
   if(r==t)
     {
	head=NULL;
	printf("\n\t\tOnly Single Node In The List.....");
     }
    else
 t->next=r->next;
 free(r);
 printf("\n\n\t\tThe Deleted Item Is....%d",x);
 getch();
}
}



void display()
{
node *p,*q;
p=head;
q=p->next;
if(p==NULL)
{
printf("\n\n\t\tNo Data Item In The List...");
getch();
}
 while(q!=p)
   {
     printf("\n\t\t The Content Is:- %d",q->data);
     q=q->next;
   }
 printf("\n\t\t The Content Is:- %d",q->data);
 getch();
}



void empty()
{
node *q;
q=head;
 if(q==NULL)
  {
    printf("\n\t\tThe Stack Is Empty....");
    getch();
  }
 else
 {
  printf("\n\t\tThe Stack Is Non-Empty....");
  getch();
 }
}