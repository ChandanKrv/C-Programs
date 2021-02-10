#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
	{
	char c;
	float info;
	int left;
	struct node *father;
	};
struct record		 {
		  struct node *ptr;
		  struct record *next;
		 };
typedef struct record pqueue;
void insafter(pqueue **,struct node *);
void push(pqueue **,struct node *);
void place(pqueue **,struct node*);
struct node * pop(pqueue **);
int empty(pqueue **);
void main()
	{
	struct node *ptr,*p1,*p2,*p3;
	pqueue *top;
	int n,i,flag=1,j,k,a[20];
	float f;
	char c1;
	clrscr();
	top=NULL;
	printf("nter the number of alphabate=");
	scanf("%d",&n);
	ptr=(struct node *)malloc(n * sizeof(struct node));
	for (i=0;i<n;i++)
		{
		printf("nter the prob & character==");
		 scanf("%f %c",&f,&c1);
		 (ptr + i)->c=c1;
		 (ptr + i)->info=f;
		 (ptr + i)->left=1;
		 (ptr + i)->father=NULL;
		 place(&top,(ptr + i));
		}
	while(flag)
		{
		 p1=pop(&top);
		 p2=pop(& top);
		 f=p1->info + p2->info;
		 if(f==1)
			flag=0;
		 p3=(struct node *)malloc(sizeof(struct node));
		 p3->info=f;
		 p3->left=1;
		 p3->father=NULL;
		 if(p1->info <= p2->info)
			p1->left=0;
		 else
			p2->left=0;
		 p1->father=p3;
		 p2->father=p3;
		 place(&top,p3);
		}
	 for(i=0;i<n;i++)
		{ j=0;
		 p3=(ptr + i);
		 printf("%c :: %0.2f ==",(ptr+i)->c,(ptr + i)->info);
		 while(p3->father != NULL)
			{
			  a[j]=p3->left;
			  p3=p3->father;
			  j++;
			}
		  for(k=j-1;k>=0;k--)
		  printf("%d",a[k]);
		  printf("\n");
		}
	}
void place(pqueue **p,struct node *pt)
{
 pqueue *q,*temp;
 q=NULL;
 //printf("\nPlacing element %d in stack",x);
 for(temp=*p;temp!=NULL && (pt->info) >= ((temp->ptr)->info);temp=temp->next)
	  q=temp;
 if(q==NULL)
	 push(p,pt);
 else
	 insafter(&q,pt);
}
void insafter(pqueue **p,struct node *pt)
{
 pqueue *q;
 if(*p==NULL)
	{
	 printf("\nVoid Insertion");
	 exit(0);
	}
 q=(pqueue*)malloc(sizeof(pqueue));
 q->ptr=pt;
 q->next=(*p)->next;
 (*p)->next=q;
}
void push(pqueue **p,struct node *n)
{
 pqueue *temp;
 temp=(pqueue*)malloc(sizeof(pqueue));
 temp->ptr=n;
 temp->next=*p;
 *p=temp;
}
struct node * pop(pqueue **p)
{
 struct node * val;
 pqueue *temp;
 temp=*p;
 val=temp->ptr;
 *p=temp->next;
 free(temp);
 return(val);
 getch();
}
int empty(pqueue **p)
{
 return(*p==NULL);
}