#include<alloc.h>
struct btreenode
{
struct btreenode *lchild;
int data;
struct btreenode *rchild;
};
typedef struct btreenode node;
node *bt=NULL;
void insert(node **,int);
void inorder(node *);
void main()
{
int a[20];
int i,n;
clrscr();
printf("enter the no. of elements of array");
scanf("%d",&n);
printf("\nenter the elements of the array to be sorted");
for(i=0;i<n;i++)
{
		scanf("%d",&a[i+1]);
}
printf("\nthe elements before sorting");
for(i=0;i<n;i++)
{
printf(" %d",a[i+1]);
}


for(i=0;i<n;i++)
insert(&bt,a[i+1]);
printf("\n\ninorder traversal of binary tree");
inorder(bt);
getch();
}




void insert(node **t,int n)
{
if(*t==NULL)
{
*t=malloc(sizeof(node));
(*t)->lchild=NULL;
(*t)->data=n;
(*t)->rchild=NULL;
}
else
{
if(n<(*t)->data)
insert(&((*t)->lchild),n);
else
insert(&((*t)->rchild),n);
}
}



void inorder(node *t)
{
if(t!=NULL)
{
inorder(t->lchild);
printf(" %d",t->data);
inorder(t->rchild);
}
}