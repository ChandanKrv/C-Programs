#include<stdio.h>
  struct node
  {
   int data;
   struct node*link;
  };
  char menu()
  {
   char ch;
   printf("\n..... MENU......");
   printf("\n  1:create empty c_link list:");
   printf("\n  2:add node to list:");
   printf("\n  3:delete node from list:");
   printf("\n  4:traverse list:");
   printf("\n  5:exit:");
   printf("\n  enter your choice:1,2,3,4,5:=>");
   fflush(stdin);
   ch=getchar();
   return(ch);
  }
/* ******************************* */
 struct node* creat(struct node*h)
 {
  h=(struct node*)malloc(sizeof(struct node));
  h->link=h;
  return(h);
 }
/* ******************************* */
 void add(struct node* h)
 {
  struct node*x;
  x=(struct node*)malloc(sizeof(struct node));
  printf("\n enter the data:");
  scanf("%d",&x->data);
  x->link=h->link;
  h->link=x;
  return;
 }
/* ******************************* */
 void del(struct node*h)
 {
  struct node*x;
  x=(struct node*)malloc(sizeof(struct node));
  if(h->link==h)
    printf("\n the list is empty:");
  else
  {
   x=h->link;
   h->link=x->link;
   free(x);
  }
  return;
 }
/* ******************** */
 void traverse(struct node*h)
 {
  char ch;
  struct node*p;
  p=(struct node*)malloc(sizeof(struct node));
  p=h;
  printf("\n do you traverse?(y/n):");
  fflush(stdin);
  while((ch=getchar())!='n')
   {
    printf("\n%d",p->data);
    p=p->link;
    printf("\n do you traverse?(y/n)");
    fflush(stdin);
   }
 }
/* ********************* */
 void main()
 {
  char ch;
  struct node*h;
  clrscr();
  while((ch=menu())!='5')
  {
   switch(ch)
   {
    case '1':h=creat(h);
	     break;
    case '2':add(h);
	     break;
    case '3':del(h);
	     break;
    case '4':traverse(h);
	     break;
   }
  }
 }