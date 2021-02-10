#include<alloc.h>
struct nodes
{
int info;
struct nodes *link;
};
typedef struct nodes node;
void *createnode();
void main()
{
int cho,i,j,k;
node *start=NULL;
void insert(node **);
void delet(node **);
void display(node *);
void reverse(node **);
clrscr();
 while(cho!=5)
  {
    clrscr();
    printf("\n\n\t\t~~~~~~~~~~~~~~~~~MAIN MENU~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t1>>~~~~~~~~~~~~~CREATION OF NODES~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t2>>~~~~~~~~~~~~~DELETION OF NODES~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t3>>~~~~~~~~~~~~~DISPLAYING NODES~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t4>>~~~~~~~~~~~~~REVERSING OF LISTS~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t5>>~~~~~~~~~~~~~EXIT FROM PROGRAM~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t   Enter Your Choice Number....................");
    scanf("%d",&cho);
    if(cho<1||cho>5)
     {
      printf("\n\n\t\tWrong Choice Entered...........");
      getch();
      exit();
     }
      switch(cho)
	{
		case 1:insert(&start);
		       break;

		case 2:delet(&start);
		       break;

		case 3:display(start);
		       break;

		case 4:reverse(&start);
		       break;

		case 5:printf("\n\n\t\t\t\tOK!TA TA BYE BYE!!!!!!!");
		       getch();
		       exit();
	}
  }
}


void insert(node **nd)
{
node *p,*q;
int x;
clrscr();
printf("\n\t\t*********CREATION OF A SINGLE NODE**************");
printf("\n\t\t################################################");
printf("\n\n\t\tEnter The Element To Be Inserted........");
scanf("%d",&x);
if(*nd==NULL)
{                  /*CREATION OF THE FIRST NODE*/
printf("\n\t\tCreation Of The First Node.....");
getch();
*nd=createnode();
(*nd)->info=x;
(*nd)->link=NULL;
}
else               /*INSERTION AT THE END OF THE NODE*/
{
q=*nd;
while(q->link!=NULL)
q=q->link;
p=createnode();
p->info=x;
(p)->link=NULL;
q->link=p;
printf("\n\n\t\tThe Node %d Inserted After Node %d",x,q->info);
getch();
}
}


void delet(node **nd)
{
node *p,*next;
int x;
clrscr();
printf("\n\t\t*********DELETION OF A SINGLE NODE**************");
printf("\n\t\t################################################");
printf("\n\n\t\tEnter The Element To Be deleted........");
scanf("%d",&x);
if((*nd)->info==x)
{
printf("\n\t\tDeletion Of First Node....");
getch();
p=*nd;
(*nd)=(*nd)->link;
free(p);
}
else
{
p=*nd;
next=(*nd)->link;
while(next->info!=x&&next->link!=NULL)
{
p=p->link;
next=next->link;
}
   if(next->link==NULL)
     {
      if(next->info!=x)
	{
	  printf("\n\t\tInvalid Search........");
	  getch();
	}
      else
       {
	 printf("\n\t\tThe Element %d After %d Deleted Successfully...",x,p->info);
	 getch();
	 p->link=NULL;
	 free(next);
       }
     }
   else
     {
       printf("\n\t\tThe Element %d After %d Deleted Successfully...",x,p->info);
       getch();
       p->link=next->link;
       free(next);
     }
}
}

void *createnode()
{
node *p;
(node *)p=(node *)malloc(sizeof(node));
return(p);
}

void display(node *ptr)
{
node *p;
int c=0;
clrscr();
p=ptr;
printf("\n\n\t\tDisplay And Count Events.............");
while(p->link!=NULL)
{
printf("\n");
printf("\n\t\tThe Value At Pos. %d Is %d " ,c+1,p->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,p,p->link);
c++;
p=p->link;
}
if(p->link==NULL)
{
printf("\n");
printf("\n\t\tThe Value At Node %d Is %d " ,c+1,p->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,p,p->link);
c++;
}
printf("\n\n\t\tThe Total Number Of Node Is....%d",c);
getch();
}


/*void reverse(node **p)
{
node *q=NULL,*s,*r;
s=*p;
clrscr();
while(s!=NULL)
{
r=s->link;
s->link=q;
q=s;
s=r;
}
*p=q;
while((*p)->link!=NULL)
{
printf("\n");
printf("\n\t\tThe Value Is %d " ,(*p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(*p),(*p)->link);
(*p)=(*p)->link;
}
if((*p)->link==NULL)
{
printf("\n");
printf("\n\t\tThe Value At Node %d Is %d " ,(*p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(*p),(*p)->link);
}
getch();
}*/

void reverse(node **plist)
{
node *q=NULL,*p,*r=NULL;
p=*plist;
clrscr();
while(p!=NULL)
{
r=q;
q=p;
p=p->link;
q->link=r;
}
p=q;
while((p)->link!=NULL)
{
printf("\n");
printf("\n\t\tThe Value Is %d " ,(p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(p),(p)->link);
(p)=(p)->link;
}
if((p)->link==NULL)
{
printf("\n");
printf("\n\t\tThe Value At Node %d Is %d " ,(p)->info);
printf("\n\t\tThe Address %u And Next Address %u  " ,(p),(p)->link);
}
getch();
}