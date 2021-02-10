#include<alloc.h>
struct stud
{
int info;
struct stud *next;
};
typedef struct stud node;
node *head=NULL;
void main()
{
int s;
void append();
void insf();
void cnd();
void ins();
void del();
void rev();
clrscr();
while(s!=7)
{
clrscr();
printf("************************  MAIN   MENU  **************************");
printf("\n-----------------------------------------------------------------");
printf("\n\t\t1>> A P P E N D  ");
printf("\n\t\t2>> I N S E R T   A T  F R O N T  ");
printf("\n\t\t3>> C O U N T   A N D   D I S P L A Y  ");
printf("\n\t\t4>> I N S E R T  ");
printf("\n\t\t5>> D E L E T I O N  ");
printf("\n\t\t6>> R E V E R S E  ");
printf("\n\t\t7>> E X I T ");
printf("\n\n\t\t Enter Your Choice:- ");
scanf("%d",&s);
switch(s)
{
case 1: append();
	break;
case 2: insf();
	break;
case 3: cnd();
	break;
case 4: ins();
	break;
case 5: del();
	break;
case 6: rev();
	break;
case 7: printf("\n\n\t\tOK !!! TA TA BYE BYE");
	getch();
	exit();
}
}
}


void append()
{
node *t1,*t2;
int info;
printf("\n\n\t\t Enter The No. To Be Appended:- ");
scanf("%d",&info);
t1=(node *)malloc(sizeof(node));
t1->info=info;
if(head==NULL)
{
head=t1;
t1->next=t1;
}
else
{
t2=head;
t1->next=t2->next;
t2->next=t1;
head=t1;
}
}

void insf()
{
node *t1;
int info;
printf("\n\t\t Enter The No. You Want To Insert....");
scanf("%d",&info);
t1=(node *)malloc(sizeof(node));
t1->info=info;
t1->next=head->next;
head->next=t1;
}



void cnd()
{
node *p;
int count=1;
p=head;
if(p==NULL)
{
printf("\n\n\t\tThere Is No Node In The List.....");
getch();
}
else
{
p=p->next;
while(p!=head)
{
count++;
printf("\n\t\tData Is %d......",p->info);
p=p->next;
}
printf("\n\t\tData Is %d......",p->info);
 printf("\n\n\t\tThe Number Of Nodes In The List Is....%d",count);
getch();
}
}


void ins()
{
node *t1,*t2;
int info,n,i=1;
t2=head->next;
printf("\n\t\tEnter The No. To Be Inserted:- ");
scanf("%d",&info);
printf("\n\t\tEnter The No.Of Position :- ");
scanf("%d",&n);
t1=(node *)malloc(sizeof(node));
t1->info=info;
while(i!=n)
{
t2=t2->next;
i ++;
}
t1->next=t2->next;
t2->next=t1;
}


void del()
{
node *t1,*t2;
int x,info,i=1;
t1=head->next;
if(t1==NULL)
{
printf("\n\n\t\tThere Is No Node In The List.....");
getch();
}
else
{
if(t1->next==t1)
{
printf("\n\n\t\tThere Is Only A Single Node.....");
printf("\n\t\tThe Number Deleted Is........%d",t1->info);
getch();
free(t1);
head=NULL;
}
else
{
printf("\n\t\tEnter The Position To Be Deleted:- ");
scanf("%d",&info);
t2=t1->next;
while(i<=(info-1))
{
t1=t1->next;
t2=t2->next;
i++;
}
x=t2->info;
printf("\n\t\tThe Number Deleted Is........%d",x);
getch();
t1->next=t2->next;
if(t2==head)
head=t1;
free(t2);
}
}
}


void rev()
{
node *t=(head->next)->next,*q=head,*r=head,*p=head->next;
clrscr();
while(p!=head)
{
r=q;
q=p;
p=p->next;
q->next=r;
}
p->next=q;
head=t->next;
while((p)!=head)
{
printf("\n");
printf("\n\t\tThe Value Is %d " ,(p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(p),(p)->next);
(p)=(p)->next;
}
printf("\n");
printf("\n\t\tThe Value Is %d " ,(p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(p),q);
getch();
}