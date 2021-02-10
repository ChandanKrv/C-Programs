#include<alloc.h>
struct node
{
int data;
struct node *next;
};
void add(struct node **);
void disp(struct node *);
int pop(struct node **);
void main()
{
struct node *list;
int r,x,i;
list=NULL;

clrscr();
while(1)
{
clrscr();
printf("\n\t\t---------------M A I N  M E N U ------------------------");
printf("\n\t\t*********************************************************");
printf("\n\t\t1>> APPEND  A NODE");
printf("\n\t\t2>> DISPLAY THE NODES");
printf("\n\t\t3>> REMOVE  A NODE");
printf("\n\t\t4>> EXIT FROM THE PROGRAM");

printf("\n\n\t\tEnter Your Choice.....");
scanf("%d",&r);
if( r < 1 || r > 4 )
{
printf("\n\t\tWrong Choice Entry....");
getch();
exit(1);
}

else
{
switch(r)
{
case 1:
	add(&list);
	break;
case 2:
	disp(list);
	break;
case 3:
	i=pop(&list);
	printf("\n\t\tThe Deleted Item Is.....%d",i);
	getch();
	break;
case 4:
	printf("\n\t\tOK! TA TA BYE BYE");
	getch();
	exit(1);
 }
 }
}
}


void add(struct node **p)
{
int x;
struct node *temp=*p;
struct node *r;
printf("\n\t\tEnter The Data To Be Inserted....");
scanf("%d",&x);
r=(struct node *)malloc (sizeof(struct node));
r->data=x;
if(*p==NULL||(*p)->data<x)
{
*p=r;
(*p)->next=temp;
}
else
 {
  while(temp!=NULL)
  {
    if(temp->data>=x &&(temp->next->data<x||temp->next==NULL))
    {
     r->next=temp->next;
     temp->next=r;
     return;
    }
   temp=temp->next;
  }
 }
}

void disp(struct node *p)
{
 int count=1;
 if(p==NULL)
  {
    printf("\n\t\tQueue Is Empty");
    getch();
    exit(1);
  }
 else
 {
 while(p!=NULL)
 {
 printf("\n\t\tThe Element In Position %d Is %d",count,p->data);
 count++;
 p=p->next;
 }
 getch();
}
}


int pop(struct node **p)
{
int i;
struct node *temp;
if(*p==NULL)
{
printf("\n\t\tQueue Is Empty");
getch();
exit();
}
temp=*p;
i=temp->data;
*p=(*p)->next;
free(temp);
return(i);
}