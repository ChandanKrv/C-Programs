



/*program listing of data-str\bintree.c*/
/*Programs on binary tree => To demonstrate all operations on binary tree*/
#include <stdio.h>
#define NULL 0
typedef struct nodes
  {
    struct nodes *llink;
    int info;
    struct nodes *rlink;
  }node;
typedef struct stknodes
  {
    node *data;
    int status;
    struct stknodes *next;
  }stknode;
node *bst_getnode(void);
void bst_freenode(node *);
stknode *stk_getnode(void);
void stk_freenode(stknode *);
void bst_push(stknode **,node *);
node *bst_pop(stknode **);
void bst_stat_push(stknode **,int);
int bst_stat_pop(stknode *);
void main(void)
  {
    node *root,*flag;
    int choice,data;
    void bst_initialize(node **,int *);
    void bst_insert(node **);
    node *bst_search(node *,int);
    void bst_delete(node **);
    void bst_inorder_nr(node *);
    void bst_preorder_nr(node *);
    void bst_postorder_nr(node *);
    void bst_inorder_r(node *);
    void bst_preorder_r(node *);
    void bst_postorder_r(node *);
    void bst_exit(void);
    int bst_menu(void);
    bst_initialize(&root,&choice);
    while(choice!=10)
      {
	choice=bst_menu();
	switch(choice)
	  {
	    case 1: 		/*insertion option....*/
	      bst_insert(&root);
	      break;
	    case 2: 		/*search option....*/
	      if (root==NULL)
		{
		  printf("\n\n\tThe tree is empty....");
		}
	      else
		{
		  printf("\n\n\tPlease enter the data to be searched....");
		  scanf("%d",&data);
		  flag=bst_search(root,data);
		  if (flag==NULL)
		    {
		      printf("\n\n\tSearching is successful....");
		    }
		  else
		    {
		      printf("\n\n\tSearching is unsuccessful....");
		    }
		}
	      printf("\n\n\tSearching option has been completed successfully....");
	      break;
	    case 3: 		/*deletion option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		bst_delete(&root);
	      break;
	    case 4: 	        /* inorder-nonrecursive traversal option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		{
		  bst_inorder_nr(root);
		  printf("\n\n\tInorder-non-recursive option has been completed successfully....");
		}
	      break;
	    case 5: 		/*preorder-nonrecursive traversal option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		{
		  bst_preorder_nr(root);
		  printf("\n\n\tPreorder-non-recursive option has been completed successfully....");
		}
	      break;
	    case 6: 		/*postorder-nonrecursive traversal option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		{
		  bst_postorder_nr(root);
		  printf("\n\n\tPostorder-non-recursive option has been completed successfully....");
		}
	      break;
	    case 7: 		/*inorder-recursive traversal option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		{
		  bst_inorder_r(root);
		  printf("\n\n\tInorder-recursive option has been completed successfully....");
		}
	      break;
	    case 8: 		/*preorder-recursive traversal option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		{
		  bst_preorder_r(root);
		  printf("\n\n\tPreorder-recursive option has been completed successfully....");
		}
	      break;
	    case 9: 		/*postorder-recursive traversal option....*/
	      if (root==NULL)
		printf("\n\n\tThe tree is empty....");
	      else
		{
		  bst_postorder_r(root);
		  printf("\n\n\tPostorder-recursive option has been completed successfully....");
		}
	      break;
	    case 10: 		/*exit option....*/
	      bst_exit();
	      break;
	  }
	getch();
      }
  }
void bst_initialize(node **rt,int *ch)
  {
    *rt=NULL;
    *ch=0;
  }
void bst_insert(node **rt)
  {
    int item;
    node *newnode,*ptr;
    node *bst_search(node *,int);
    ptr=NULL;
    printf("\n\n\tPlease enter the item value....");
    scanf("%d",&item);
    if (*rt!=NULL)
      ptr=bst_search(*rt,item);
    if (ptr==NULL && *rt!=NULL)
      {
	printf("\n\n\tThe item is pre-existing in the binary tree....");
	printf("\n\n\tDuplicate data insertion is not possible....");
      }
    else
      {
	newnode=bst_getnode();
	newnode->info=item;
	newnode->llink=NULL;
	newnode->rlink=NULL;
	if (*rt==NULL)
	  {
	    printf("\n\n\tThe Tree is empty....");
	    printf("\n\n\tInserting the node as the first node....");
	    *rt=newnode;
	  }
	else
	  {
	    if (ptr->info>item)
	      {
		ptr->llink=newnode;
		printf("\n\n\t%d is inserted as left child of %d....",item,ptr->info);
	      }
	    else
	      {
		ptr->rlink=newnode;
		printf("\n\n\t%d is inserted as right child of %d....",item,ptr->info);
	      }
	  }
      }
    printf("\n\n\tThe INSERT option has been completed successfully....");
  }
node *bst_getnode(void)
  {
    node *ptr;
    /* allocate memory for node ptr */
    if (((node *)ptr = (node *) malloc(sizeof(node))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
    return(ptr);
  }
void bst_freenode(node *ptr)
  {
    free(ptr);
  }
stknode *stk_getnode(void)
  {
    stknode *ptr;
    /* allocate memory for node ptr */
    if (((stknode *)ptr = (stknode *) malloc(sizeof(stknode))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
    return(ptr);
  }
void stk_freenode(stknode *stkptr)
  {
    free(stkptr);
  }
node *bst_search(node *rt,int item)  /*returns NULL for successful searching*/
  {                                  /*otherwise returns parent node address*/
    int flag=1;
    while(flag==1)
      {
	if (rt==NULL)
	  return(NULL);
	else if (rt->info==item)
	  flag=0;
	else
	  {
	    if (rt->info>item)
	      {
		if (rt->llink!=NULL)
		  rt=rt->llink;
		else
		  flag=0;
	      }
	    else
	      {
		if (rt->rlink!=NULL)
		  rt=rt->rlink;
		else
		  flag=0;
	      }
	  }
      }
    if (rt->info==item)
      return(NULL);
    else
      return(rt);
  }
void bst_exit(void)
  {
    printf("\n\n\tG O O D - B Y E !!!!");
  }
int bst_menu(void)
  {
    int ch;
    ch=0;
    while(ch<1 || ch>10)
      {
	clrscr();
	printf("\n\tM A I N  M E N U !!!!");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t1 > I N S E R T  O P T I O N ....");
	printf("\n\t2 > S E A R C H  O P T I O N ....");
	printf("\n\t3 > D E L E T E  O P T I O N ....");
	printf("\n\t4 > I N - O R D E R - N R  O P T I O N ....");
	printf("\n\t5 > P R E - O R D E R - N R  O P T I O N ....");
	printf("\n\t6 > P O S T - O R D E R - N R  O P T I O N ....");
	printf("\n\t7 > I N - O R D E R - R  O P T I O N ....");
	printf("\n\t8 > P R E - O R D E R - R  O P T I O N ....");
	printf("\n\t9 > P O S T - O R D E R - R  O P T I O N ....");
	printf("\n\t10 > E X I T  O P T I O N ....");
	printf("\n\n\tPlease enter the choice number....");
	scanf("%d",&ch);
      }
    return(ch);
  }
void bst_inorder_r(node *rt)
  {
    if (rt!=NULL && rt->llink!=NULL)
      bst_inorder_r(rt->llink);
    if (rt!=NULL)
      printf("\n\tNode no = %4x, l-link = %4x, info = %4d & r-link = %4x....",
				    rt,rt->llink,rt->info,rt->rlink);
   if (rt!=NULL && rt->rlink!=NULL)
      bst_inorder_r(rt->rlink);
  }
void bst_preorder_r(node *rt)
  {
    if (rt!=NULL)
      printf("\n\tNode no = %4x, l-link = %4x, info = %4d & r-link = %4x....",
				    rt,rt->llink,rt->info,rt->rlink);

    if (rt!=NULL && rt->llink!=NULL)
      bst_preorder_r(rt->llink);
    if (rt!=NULL && rt->rlink!=NULL)
      bst_preorder_r(rt->rlink);
  }
void bst_postorder_r(node *rt)
  {
    if (rt!=NULL && rt->llink!=NULL)
      bst_postorder_r(rt->llink);
    if (rt!=NULL && rt->rlink!=NULL)
      bst_postorder_r(rt->rlink);
    if (rt!=NULL)
      printf("\n\tNode no = %4x, l-link = %4x, info = %4d & r-link = %4x....",
				    rt,rt->llink,rt->info,rt->rlink);
  }
int bst_stat_pop(stknode *tt)
  {
    if (tt==NULL)
      {
	printf("\n\n\tU N D E R F L O W !!!!");
	return(0);
      }
    else
      return(tt->status);
  }
node *bst_pop(stknode **tt)
  {
    node *temp;
    stknode *delnode;
    temp=NULL;
    if (*tt==NULL)
      {
	printf("\n\n\tU N D E R F L O W !!!!");
      }
    else
      {
	temp=(*tt)->data;
	delnode=(*tt);
	(*tt)=(*tt)->next;
	stk_freenode(delnode);
      }
    return(temp);
  }
void bst_stat_push(stknode **tt,int stat)
  {
    (*tt)->status=stat;
  }
void bst_push(stknode **tt,node *insnode)
  {
    stknode *newnode;
    newnode=stk_getnode();
    newnode->data=insnode;
    if (*tt==NULL)
      {
	(*tt)=newnode;
	(*tt)->next=NULL;
      }
    else
      {
	newnode->next=(*tt);
	(*tt)=newnode;
      }
 }
/***************************************
INORDER (INFO,LEFT,RIGHT,ROOT)
 1> [PUSH NULL ONTO STACK & INITIALIZE PTR]
   SET TOP = 1, STACK[1] = NULL AND PTR = ROOT
2> REPEAT WHILE PTR!= NULL [PUSHES LEFT-MOST PATH ONTO STACK]
  a> SET TOP =TOP+1 & STACK[TOP]=PTR[SAVES NODE]
  b> SET PTR =LEFT[PTR] [UPDATES PTR]
 [END OF LOOP]
3> SET PTR=STACK[TOP] & TOP = TOP-1[POPS NODE FROM STACK]
4> REPEAT STEPS 5 TO 7 WHILE PTR != NULL [BACKTRACKING]
5> APPLY PROCESS TO INFO[PTR]
6> WHILE PTR!=NULL THEN
  a> SET PTR=RIGHT[PTR]
  b> GOTO STEP 2
7> SET PTR = STACK[TOP] and TOP=TOP-1
8> EXIT
*****************************************/
void bst_inorder_nr(node *rt)
  {
    node *ptr;
    stknode *top;
    top=NULL;
    bst_push(&top,NULL);
    ptr=rt;
    again:
    while(ptr!=NULL)
      {
	bst_push(&top,ptr);
	ptr=ptr->llink;
      }
    ptr=bst_pop(&top);
    while(ptr!=NULL)
      {
	printf("\n\tNode no = %4x, l-link = %4x, info = %4d & r-link = %4x....",
				ptr,ptr->llink,ptr->info,ptr->rlink);
	if (ptr->rlink!=NULL)
	  {
	    ptr=ptr->rlink;
	    goto again;
	  }
	ptr=bst_pop(&top);
      }
  }
/***************************************
 PREORDER (INFO,LEFT,RIGHT,ROOT)
1 > [INITIALLY push NULL onto STACK, & initialize PTR]
   SET TOP = 1,STACK[1] = NULL & PTR = ROOT
 2 > REPEAT STEPS 3 TO 5 WHILE PTR != NULL
 3 > APPLY PROCESS TO INFO[PTR]
 4 > [RIGHT CHILD?]
  IF RIGHT[PTR]!=NULL,THEN [push on STACK]
  SET TOP =TOP + 1 , & STACK[TOP]=RIGHT[PTR].
  [END OF structure]
 5 >  [LEFT CHILD ?]
   IF LEFT[PTR]!=NULL THEN
    SET PTR =LEFT[PTR]
   ELSE [POP FROM STACK]
 SET PTR = STACK[TOP] & TOP = TOP - 1
  [END OF STRUCTURE]
 [END OF LOOP]
 6 > EXIT.
***************************************/
void bst_preorder_nr(node *rt)
  {
    node *ptr;
    stknode *top;
     top=NULL;
     bst_push(&top,NULL);
     ptr=rt;
    while(ptr!=NULL)
      {
	printf("\n\tNode no = %4x, l-link = %4x, info = %4d & r-link = %4x....",
				ptr,ptr->llink,ptr->info,ptr->rlink);
	if (ptr->rlink!=NULL)
	bst_push(&top,ptr->rlink);
	if (ptr->llink!=NULL)
	  ptr=ptr->llink;
	else
	  ptr=bst_pop(&top);
      }
  }
void bst_postorder_nr(node *rt)
  {
    node *ptr;
    stknode *top;
    int status;
    top=NULL;
    bst_push(&top,NULL);
    bst_stat_push(&top,0);
    ptr=rt;
    again:
    while(ptr!=NULL)
      {
	bst_push(&top,ptr);
	bst_stat_push(&top,1);
	if (ptr->rlink!=NULL)
	  {
	    bst_push(&top,ptr->rlink);
	    bst_stat_push(&top,-1);
  }
	ptr=ptr->llink;
      }
    status=bst_stat_pop(top);
    ptr=bst_pop(&top);
    while(status>0)
      {
	printf("\n\tNode no = %4x, l-link = %4x, info = %4d & r-link = %4x....",
				ptr,ptr->llink,ptr->info,ptr->rlink);
	status=bst_stat_pop(top);
	ptr=bst_pop(&top);
      }
    if(status<0)
      goto again;
  }
void bst_delete(node **rt)
  {
    int item;
    node *loc,*par;
    void del_func1(node **,node *,node *);
    void del_func2(node **,node *,node *);
    printf("\n\n\tPlease enter the item value to be deleted....");
    scanf("%d",&item);
    if ((*rt)->info==item)
      {
	par=NULL;
	loc=(*rt);
      }
    else
      {
	par=(*rt);
	if ((*rt)->info>item)
	  loc=(*rt)->llink;
	else
	  loc=(*rt)->rlink;
	while(loc!=NULL && loc->info!=item)
	  {
	    par=loc;
	    if (loc->info>item)
	      loc=loc->llink;
	    else
	      loc=loc->rlink;
	  }
      }
    if (loc==NULL)
      {
	printf("\n\n\t\tThe %d is not in the tree....",item);
      }
    else
      {
	if (loc->llink!=NULL && loc->rlink!=NULL)
	  del_func2(rt,loc,par);
	else
	  del_func1(rt,loc,par);
      }
    bst_freenode(loc);
    printf("\n\n\tDeletion option has been completed successfully....");
  }
void del_func1(node **rtt,node *locc,node *parr)
  {
    /*Here locc has got one or zero child....*/
    node *child;
    if (locc->llink==NULL && locc->rlink==NULL)
      child=NULL;
    else if (locc->llink!=NULL)
      child=locc->llink;
    else
      child=locc->rlink;
    if (parr!=NULL)
      {
	if (parr->llink==locc)
	  parr->llink=child;
	else
	  parr->rlink=child;
      }
    else
      {
	(*rtt)=child;
      }
  }
void del_func2(node **rtt,node *locc,node *parr)
  {
    /*Here locc has got two children....*/
    node *suc,*parsuc,*ptr,*save;
    ptr=locc->rlink;
    save=locc;
    while(ptr->llink!=NULL)
      {
	save=ptr;
	ptr=ptr->llink;
      }
    suc=ptr;
    parsuc=save;
    del_func1(rtt,suc,parsuc);
    if (parr!=NULL)
      {
	if (locc==parr->llink)
	  parr->llink=suc;
	else
	  parr->rlink=suc;
      }
    else
      {
	(*rtt)=suc;
      }
    suc->llink=locc->llink;
    suc->rlink=locc->rlink;
}