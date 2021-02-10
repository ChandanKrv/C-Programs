#include<alloc.h>
#include<math.h>
struct nodetype
	{
	char s;
	float pr;
	int code;
	struct nodetype *father;
	};
struct pr_queue
	{
	  struct nodetype *ptr;
	  struct pr_queue *next;
	};
typedef struct  pr_queue pq;
typedef struct  nodetype node;
void insafter(pq **,node *);
void add(pq **,node *);
void insert(pq **,node*);
node * mindel(pq **);
int empty(pq **);
void main()
	{
	node *ptr,*n1,*n2,*n3;
	pq *top;
	int n,i,fl=1,j,k,cd[20],count;
	float p,L=0,H=0;
	char c;
	clrscr();
	top=NULL;
	printf("Enter the number of terms:-");
	scanf("%d",&n);
	ptr=(node *)malloc(n * sizeof(node));
	for (i=0;i<n;i++)
		{
		printf("\n\tEnter the symbol and probability:-");
		 scanf("%s %f",&c,&p);
		 (ptr + i)->s=c;
		 (ptr + i)->pr=p;
		 (ptr + i)->code=0;
		 (ptr + i)->father=NULL;
		 insert(&top,(ptr + i));
		}
	while(fl)
		 {
		 n1=mindel(&top);
		 n2=mindel(& top);
		 p=n1->pr + n2->pr;
		 if(p==1)
		 fl=0;
		 n3=(node *)malloc(sizeof( node));
		 n3->pr=p;
		 n3->code=0;
		 n3->father=NULL;
		 if(n1->pr < n2->pr)
			n1->code=1;
		 else
			n2->code=1;
		 n1->father=n3;
		 n2->father=n3;
		 insert(&top,n3);
		 }
	 for(i=0;i<n;i++)
		{
		 j=0;
		 n3=(ptr + i);
		 printf("\n\tcode for %c of probability %f is :\t ",(ptr+i)->s,(ptr + i)->pr);
		 while(n3->father != NULL)
			{
			  cd[j]=n3->code;
			  n3=n3->father;
			  j++;
			}
		count=j;
		L+=(float)(count*(ptr+i)->pr);
		H+=(float)((ptr+i)->pr*(log((ptr+i)->pr)/log(2)));
	       for(k=j-1;k>=0;k--)
		  printf("%d",cd[k]);
	       }

	 H=-H;
	printf("\n\n\t\tThe Avg. Length Is %f Bits/Symbol",L);
	printf("\n\t\tThe Entropy Is %f Bits/Symbol",H);
	printf("\n\t\tThe Redundancy Is %f Bits/Symbol",-(H-L));
	getch();
	}
void insafter(pq **p, node *nd)
	{
	 pq *q;
	 if(*p==NULL)
		{
		 exit(0);
		}
	 q=(pq*)malloc(sizeof(pq));
	 q->ptr=nd;
	 q->next=(*p)->next;
	 (*p)->next=q;
	}
void add(pq **p,node *nd)
	{
	 pq *temp;
	 temp=(pq*)malloc(sizeof(pq));
	 temp->ptr=nd;
	 temp->next=*p;
	 *p=temp;
	}
void insert(pq **p, node *nd)
	{
	 pq *q,*temp;
	 q=NULL;
	for(temp=*p;temp!=NULL && (nd->pr) >= ((temp->ptr)->pr);temp=temp->next)
		   q=temp;
	 if(q==NULL)
		 add(p,nd);
	 else
		 insafter(&q,nd);
	}
node * mindel(pq **p)
	{
	 node * data;
	 pq *temp;
	 temp=*p;
	 data=temp->ptr;
	 *p=temp->next;
	 free(temp);
	 return(data);
	 }
int empty(pq **p)
	{
	 return(*p==NULL);
	}