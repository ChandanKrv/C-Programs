#include<math.h>
#include<alloc.h>
struct hman
{
char ch[2];
float fr;
struct hman *father;
struct hman *left;
struct hman *right;
int sign;
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
node *pp,*h,*pp1,*pp2;
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
h2=h1->left;
for(p=0;p<(n-1);p++)
{
x=h1->fr;
y=h2->fr;
h=(node *)malloc(sizeof(node));
h->fr=(x+y);
h1->father=h;
h2->father=h;
pp=h2->left;
if (x<=y)
{
h1->sign=1;
h2->sign=0;
}
else
{
h2->sign=1;
h1->sign=0;
}
h->left=pp;
h1=h;
h2=pp;
}
h1->father=NULL;
pp1=head;
while(pp1!=NULL)
{
pp2=pp1;
root=0;
printf("\n");
printf("The Value Of %s Is ",pp1->ch);
while(pp2->father!=NULL)
{
sym[root]=pp2->sign;
pp2=pp2->father;
root++;
}
for(rtnd=root-1;rtnd>=0;rtnd--)
printf("%d",sym[rtnd]);
pp1=pp1->right;
}
getch();
}
void insrear()
{
float x;
char ch1[2];
node *t,*r;
t=(node *)malloc(sizeof(node));
printf("\t\tEnter The Character ");
scanf("%s",ch1);
printf("\t\tEnter The Frequency ");
scanf("%f",&x);
t->fr=x;
strcpy(t->ch,ch1);
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
char ch2[2];
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
     strcpy(ch2,r->ch);
     r->fr=r->right->fr;
     strcpy(r->ch,r->right->ch);
     r->right->fr=h;
     strcpy(r->right->ch,ch2);
    }
    r=r->right;
  }
}
}