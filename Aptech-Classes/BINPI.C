#include<stdio.h>
char menu();
struct node *create();
void inorder(struct node*);
void pre(struct node*);
void post(struct node*);
 struct node
 {
  struct node *lchild;
  int data;
  struct node *rchild;
 };
void main()
{
  struct node *h;
  char choice;
  clrscr();
  printf("Creating The Binary Tree.........");
  h=create();
  while((choice=menu())!='4')  //while(1)
  {
	switch(choice)
	{
	  case '1':printf("\n\n\t Inorder Traversal of binary tree as follows.......\n\n\n\t");
		   inorder(h);
		   printf("\n\n\n\t Traversal Complete");
		   getch();
		   break;
	  case '2':printf("\n\n\t Preorder Traversal of binary tree as follows......\n\n\n\t");
		   pre(h);
		   printf("\n\n\n\t Traversal Complete");
		   getch();
		   break;
	  case '3':printf("\n\n\t Postorder Traversal of binary tree as follows.....\n\n\n\t");
		   post(h);
		   printf("\n\n\n\t Traversal Complete");
		   getch();
		   break;
	}
  }
}
/******** MENU ********/
char menu()
{
 char ch;
 clrscr();
 printf("        M E N U    ");
 printf("\n...................\n");
 printf("\n1> I N O R D E R");
 printf("\n2> P R E O R D E R");
 printf("\n3> P O S T O R D E R");
 printf("\n4> E X I T");
 printf("\n\n\n\tEnter Your Choice:");
 scanf("%c",&ch);
 return(ch);
}
/********* INORDER **************/
  void inorder(struct node *t1)
  {
  if(t1!=NULL)
	{
	 inorder(t1->lchild);
	 delay(1000);
	 printf(" %d ",t1->data);
	 inorder(t1->rchild);
	}
   return;
  }
/* ******* PREORDER ************/
 void pre(struct node*t5)
  {
   if(t5!=NULL)
	{
	 delay(1000);
	 printf(" %d ",t5->data);
	 pre(t5->lchild);
	 pre(t5->rchild);
	}
	return;
  }
/************ POSTORDER ****************/
  void post(struct node*t6)
  {
   if(t6!=NULL)
   {
	post(t6->lchild);
	post(t6->rchild);
	delay(1000);
	printf(" %d ",t6->data);
   }
   return;
  }
/******* CREATION OF BINARY TREE *********/
  struct node *create()
   {
	 struct node *t,*x;
	 char ch2,ch1;
	 int i;
	 x=(struct node*)malloc(sizeof(struct node));
	 t=x;
	 printf("\n\n\tENTER THE DATA.......=>");
	 scanf("%d",&t->data);
	 printf("\n left child:(y/n)");
	 fflush(stdin);
	 scanf("%c",&ch1);
	 if(ch1=='y')
	  {
	   printf("\ncreating left child");
	   t->lchild=create();
	  }
	 else
	   t->lchild=NULL;
	 fflush(stdin);
	 printf("\n right child:(y/n)");
	 scanf("%c",&ch2);
	 if(ch2=='y')
	  {
	   printf("\ncreating right child");
	   t->rchild=create();
	  }
	 else
	   t->rchild=NULL;
	 return(t);
 }