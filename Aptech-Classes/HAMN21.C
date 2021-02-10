#include<math.h>
#include<alloc.h>
struct hman
{
float fr;
struct hman *father;
struct hman *left;
struct hman *right;
int sign;
int rem;
};

typedef struct hman node;
node *head=NULL,*h1,*h2;
void insrear();
void mindel();
void buble();
int i1,n;
	     /* MAIN FUNCTION */


void main()
{
node *pp,*h,*pp1,*pp2,*pp3,*pp4,*pp5,*pp6;
int i,p,root,rtnd,sym[100];
float x1,x,y;
clrscr();
printf("Enter The Number Of Terms :- ");
scanf("%d",&n);
for(i1=0;i1<n;i1++)
{
insrear();
}
buble();
h1=head;
while(h1->right!=NULL)
h1=h1->right;
pp3=h1;
h2=h1->left;
pp4=h2;
for(p=0;p<(n-1);p++)
{
				       x=h1->fr;
				       y=h2->fr;
				       h=(node *)malloc(sizeof(node));
				       h->fr=(x+y);
				       h->rem=0;
				       h1->father=h;
				       h2->father=h;
printf("\nX= %f   Y=%f    SUM=%f   Rem=%d   Head=",h1->fr,h2->fr,h->fr,h->rem);
				       getch();
				       while(pp4->fr<=h->fr && pp4!=NULL)
				       {
				       pp4=pp4->left;
				       pp3=pp3->left;
				       }
				       if(pp4==NULL)
				       {
				       pp3->left=h;
				       h->left=NULL;
				       h->right=pp3;
				       head=h;
				       }
				       else
				       {
				       pp4->right=h;
				       pp3->left=h;
				       h->left=pp4;
				       h->right=pp3;
				       }
					 h1->sign=1;
					 h2->sign=0;
				 printf("\nH1= %d   H2=%d ",h1->sign,h2->sign);
				       h1=h2->left;
				       pp3=h1;
				       h2=h1->left;
				       pp4=h2;
//				       printf("\nH1= %d   H2=%d ",h1->fr,h2->fr);
				       //getch();

}
h1->father=NULL;
h1->sign=1;
pp1=head;
while(pp1->left!=NULL)
pp1=pp1->left;
head=pp1;
printf("\nMagnitude Is =%f\t%d\t%d ",head->fr,head->rem,head->sign);
printf("\n\n");
while(head->right!=NULL)
{
head=head->right;
printf("\nMagnitude Is =%f\t%d\t%d ",head->fr,head->rem,head->sign);
}
//printf("\nMagnitude Is =%f\t%d\t%d ",pp1->fr,pp1->rem,pp1->sign);
//
//pp2=head;
/*while(pp2->father!=NULL || pp2->rem==1)
{
sym[root]=pp2->sign;
pp2=pp2->father;
root++;
}
for(rtnd=root-1;rtnd>=0;rtnd--)
printf("%d",sym[rtnd]);
pp1=pp1->right;*/
getch();
}









void insrear()
{
float x;
node *t,*r;
t=(node *)malloc(sizeof(node));
printf("\t\tEnter The Frequency ");
scanf("%f",&x);
t->fr=x;
t->rem=1;
if(head==NULL)
{
head->left=NULL;
head=t;
}
else
{
r=head;
     while(r->right!=NULL)
     r=r->right;
r->right=t;
t->left=r;
}
t->right=NULL;
}

void buble()
{
int pass,fl,j;
node *r;
float h;
for(pass=0;pass<(n-1);pass++)
{
  fl=0;
  r=head;
  for(j=0;j<(n-pass-1);j++)
   {
   if(r->fr<r->right->fr)
    {
     fl=1;
     h=r->fr;
     r->fr=r->right->fr;
     r->right->fr=h;
    }
    r=r->right;
  }
}
}