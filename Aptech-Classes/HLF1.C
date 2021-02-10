#include<stdlib.h>
struct node
{
float info;
int s;
char ch[2];
struct node *father;
struct node *next;
};
void add(struct node **,float,char * );
float gt(struct node *);
struct node *p=NULL;
void main()
{
int n,i1,b[100],k,j,fl=1;
float f,x,p11,p12;
char ch1[2];
struct node *pt,*p4,*p6,*p7,*p8;
clrscr();
printf("Enter the number of alphabate = ");
scanf("%d",&n);
for(i1=0;i1<n;i1++)
{
printf("enter the prob : ");
scanf("%f",&f);
printf("enter the char : ");
scanf("%s",ch1);

add(&p,f,ch1);
}
pt=p;
p7=p;
		for(i1=0;i1<n-1;i1++)
		{
		 p11=gt(p7);
		 p=p->father;
		 p12=gt(p);
		 x=p11+p12;
		 p4=(struct node *)malloc(sizeof(struct node));
		 p4->info=x;
		 if(p11<=p12)
		 {
			p7->s=1;
			p->s=0;
			}
		 else
		 {
			p->s=1;
			p7->s=0;
			}
		 p7->next=p4;
		 p->next=p4;
		 p7=p4;
		 }
		p4->next=NULL;
		for(i1=0;i1<n;i1++)
		{
		 j=0;
		 printf("\n%s ==",(pt)->ch);
		 p6=pt;
		       while(p6->next != NULL)
			{
			 b[j]=p6->s;
			  p6=p6->next;
			  j++;
			}
		  for(k=j-1;k>=0;k--)
		  printf("%d",b[k]);
		  pt=pt->father;
		  }
getch();
}
void add(struct node **p1,float f,char *c)
{
struct node *p2,*t;
t=*p1;
p2=(struct node *)malloc(sizeof(struct node));
p2->info=f;
strcpy(p2->ch,c);
if(*p1==NULL||(*p1)->info>f)
{
*p1=p2;
(*p1)->father=t;
}
else
{
while(t!=NULL)
{
if(t->info<=f && (t->father->info>f || t->father==NULL))
{
p2->father=t->father;
t->father=p2;
return;
}
t=t->father;
}
}
}
float gt(struct node *p1)
{
float a;
struct node *t;
t=p1;
if(t==NULL)
exit(0);
else
{
a=t->info;
return(a);
}
}