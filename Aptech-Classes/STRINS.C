#include<stdio.h>
#include<conio.h>
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
void insert();
void delet();
//void count(node *);
void print();
clrscr();
while(s!=6)
{
printf("\n append");
printf("\n insert");
printf("\n delete");
//printf("\n count");
printf("\n print");
printf("\n Exit");
printf("\n\t enter your choice:- ");
scanf("%d",&s);
switch(s)
{
case 1: append();
	break;
case 2: insert();
	break;
case 3: delet();
	break;
/*case4: count();
       break;*/
case 4: print();
       break;
case 5: exit();
}
}
}


void append()
{
node *t1,*t2;
int info;
printf("enter the no. to be append:- ");
scanf("%d",&info);
t1=(node *)malloc(sizeof(node));
t1->info=info;
t1->next=NULL;
if(head==NULL)
head=t1;
else
{
t2=head;
while(t2->next!=NULL)
t2=t2->next;
t2->next=t1;
}
}

void print()
{
node *p;
p=head;
while(p!=NULL)
{
printf("\n\t\tData Is %d......",p->info);
p=p->next;
}
}


void insert()
{
node *t1,*t2;
int info,n,i=1;
t2=head;
printf("enter the no. to be insert:- ");
scanf("%d",&info);
printf("enter the no.of position after which the node is inserted :- ");
scanf("%d",&n);
t1=(node *)malloc(sizeof(node));
t1->info=info;
while(i!=n)
{
t2=t2->next;
i++;
}
t1->next=t2->next;
t2->next=t1;
}

void delet()
{
node *t1,*t2;
int info;
printf("\n\t enter the no. to be delete:- ");
scanf("%d",&info);
if(head->info==info)
{
t1=head;
head=head->next;
free(t1);
}
else
{
t1=head;
t2=t1->next;
while(t2->info!=info&&t2->next!=NULL)
{
t2=t2->next;
t1=t1->next;
}
if(t2->next==NULL)
  {
    if(t2->info==info)
     {
      printf("data valid");
      t1->next=NULL;
      free(t2);
     }
    else
     {
      printf("data invalid");
     }
  }
else
  {
   t1->next=t2->next;
   free(t2);
  }
}
}