#include<alloc.h>
struct nodes
{
int info;
struct nodes *link;
};
typedef struct nodes node;
node *p;
void *getnode();
void main()
{
int i,j,k,l,cho;
node *q;
//p=NULL;
void append(node *);
/*void insbeg(node *);
void count(node *);
void disp(node );
void inscount(node *);
void delcount(node *);
void reverse(node *);*/
clrscr();
p=NULL;
  //while(cho!=8)
   //{
    printf("\n\n\t\t*******************MAIN MENU***************************");
    printf("\n\t\t1>>Append A Node............");
    printf("\n\t\t2>>Add A Node To The Front............");
    printf("\n\t\t3>>Count The Number Of Nodes............");
    printf("\n\t\t4>>DIsplay The Nodes............");
    printf("\n\t\t5>>Insert After A Specific Count Of Node............");
    printf("\n\t\t6>>Delete After A Specific Count Of Node............");
    printf("\n\t\t7>>Reverse A Linked-List....................");
    printf("\n\t\t8>>Exit From The Program............");
    printf("\n\n\t\tEnter Your Choice.....");
    scanf("%d",&cho);
	  if(cho<1||cho>8)
	  {
	    printf("\n\n\t\tU Made A Wrong Choice......");
	    getch();
	    exit();
	  }
	  append(p);
      /*	switch(cho)
	 {
		case 1:append(p);
		       break;
		case 2:insbeg(p);
		       break;
		case 3:count(p);
		       break;
		case 4:disp(p);
		       break;
		case 5:inscount(p);
		       break;
		case 6:delcount(p);
		       break;
		case 7:reverse(p);
		       break;
		case 8:printf("\n\n\t\tOK| TA TA BYE BYE...........");
		       getch();
		       exit();
	 }
    }   */
}

void append(node *ptr)
{
  node *ptr1,*ptr2;
  int x;
  printf("\n\t\tEnter The Data To Be Inserted..");
  scanf("%d",&x);
  ptr1=(node *)malloc(sizeof(node));
  ptr1->info=x;
  ptr1->link=NULL;
  if(ptr==NULL)
  {
  printf("\n\t\tCreation Of The First Node...");
  ptr=ptr1;
  }
  else
  {
  while(ptr2->link!=NULL)
  ptr2=ptr2->link;
  ptr2->link=ptr1;
  }
}