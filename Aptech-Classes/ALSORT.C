struct btreenode
{
struct btreenode *lchild;
int data;
struct btreenode *rchild;
};




#include<stdio.h>

int *a,n,ch,i;

void bubble();
void selection();
void insertion();
void shellso();
void merge();
void quickso();
void radixsort();
void heap();
void count();
void bintree();
int qq=0;
void main()
{
 int k,aa,ii=1;
 FILE *fp;
 fp=fopen("file1.dat","ab+");
 clrscr();
 if(fp==NULL)
  {
   printf("\n\t\tThe File Does Not Exists.....");
   getch();
   exit();
  }
 while(!feof(fp))
  {
   fscanf(fp,"%d",&aa);
   a[ii]=aa;
   printf("\n\t\tThe Value At Position %d Is....%d  ",ii,a[ii]);
   ii++;
  }
  printf("\n\t\t************************************************");
  getch();
  fclose(fp);
  n=ii-1;
  clrscr();

  printf("\n\t------------------MAIN MENU---------------------------");
  printf("\n\t1>>  BUBBLE SORT");
  printf("\n\t2>>  SELECTION SORT");
  printf("\n\t3>>  INSERTION SORT");
  printf("\n\t4>>  DIMINISHING INCREMENT SORT");
  printf("\n\t5>>  MERGE SORT");
  printf("\n\t6>>  QUICK SORT");
  printf("\n\t7>>  RADIX SORT");
  printf("\n\t8>>  HEAP SORT");
  printf("\n\t9>>  COUNTING SORT");
  printf("\n\t10>> BINARY TREE SORT");

  printf("\n\t Enter Your Choice:- ");
  scanf("%d",&ch);

  switch(ch)
   {
    case 1: bubble();
	    break;
    case 2: selection();
	    break;
    case 3: insertion();
	    break;
    case 4: shellso();
	    break;
    case 5: merge();
	    break;
    case 6: quickso();
	    break;
    case 7: radixsort();
	    break;
    case 8: heap();
	    break;
    case 9: count();
	    break;
    case 10: bintree();
	     break;
    }
}



void bubble()
{
int i,j,temp;
clrscr();
printf("\n\n\t---------- BUBBLE SORT PROGRAM------------------------");
for(i=1;i<=(n-1);i++)
   {
    for(j=1;j<=(n-i);j++)
     {
     if(a[j]>a[j+1])
		 {
		 qq++;
		 temp=a[j+1];
		 a[j+1]=a[j];
		 a[j]=temp;
		 }
     }
  }
printf("\n\t\t***************************************");
for(i=1;i<=n;i++)
printf("\n\t\tLocation number = %d and content = %d....",i,a[i]);
printf("\n\t\t***************************************");
printf("\n\t\tThe Total Number Of Comparison Is.....%d",qq);
printf("\n\t\t***************************************");
printf("\n\t\tEnd Of Program......");
getch();
}




void selection()
  {
    int i;
    void display(int [],int);
    void sel_sort(int [],int,int);
    clrscr();
    printf("\n\n\t---------- SELECTION SORT PROGRAM------------------------");
    for(i=1;i<=n-1;i++)
      {
	sel_sort(a,i,n); /*array,i=1,no. of elements*/
	display(a,n);
      }
    printf("\n\t\tThe Total Number Of Comparison Is.....%d",qq);
    printf("\n\t\t***************************************");
    printf("\n\n\t\tEnd of the program....");
    getch();
  }
void sel_sort(int b[],int ii,int nn)  /*array,i=1,no. of elements*/
  {
    int locmin,item,j;
    int minloc(int [],int,int);
    void swapdata(int [],int,int);
    locmin=minloc(b,ii,nn); /*array,i=1,no. of elements*/
    if (locmin!=ii)
    swapdata(b,ii,locmin);  /*array,i=1,current location*/
  }
int minloc(int c[],int iii,int nnn)  /*array,i=1,no. of elements*/
  {
    int loc,k;
    loc=iii;
    for(k=iii+1;k<=nnn;k++)
      {
	if(c[loc]>c[k])
	{
	  qq++;
	  loc=k;
	  }
      }
      return(loc);
  }
void swapdata(int c[],int loc2,int loc1)
  {
    int temp;
    temp=c[loc1];
    c[loc1]=c[loc2];
    c[loc2]=temp;
  }
void display(int b[],int nn)
  {
    int k;
    printf("\n\t\t***************************************");
    for(k=1;k<=nn;k++)
	printf("\n\t\tLocation number = %d and content = %d....",k,b[k]);
    getch();
    printf("\n\t\t***************************************");
}


void insertion()
  {
    int i,loc,item,j,k,flag;
    void disp(int [],int);
    void ins_sort(int [],int);
    clrscr();
    printf("\n\n\t---------- INSERTION SORT PROGRAM------------------------");
    /* n will return the value of numbers*/
    for(i=1;i<=n-1;i++)
      {
	ins_sort(a,i);
	disp(a,n);
      }
    printf("\n\t\tThe Total Number Of Comparison Is.....%d",qq);
    printf("\n\t\t***************************************");
    printf("\n\n\t\tEnd of the program....");
    getch();
  }


void ins_sort(int b[],int ii)
 {
    int loc,item,j;
    loc=ii+1;
    item=b[loc];
    for(j=ii;(b[j]>item && j>=1);j--)
      {
	qq++;
	b[loc]=b[j];
	loc=j;
	b[loc]=item;
      }
 }


void disp(int b[],int nn)
  {
    int k;
    printf("\n\t\t***************************************");
    for(k=1;k<=nn;k++)
	printf("\n\t\tLocation number = %d and content = %d....",k,b[k]);
	getch();
     printf("\n\t\t***************************************");
  }



void shellso()
{
int i,j,*incr,num;
void shell(int *,int,int *,int);
clrscr();
printf("\n\n\t---------- SHELL SORT PROGRAM------------------------");
printf("\n\t\tEnter The No.Of Elements In The Incr Array...... ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("\n\t Enter The Number..... ");
scanf("%d",&incr[i]);
}
shell(a,n,incr,num);
printf("\n\t***************************************************");
printf("\n\t\tEnd Of Program.....");
getch();
}
   void  shell(int *a,int n,int *incr,int num)
	    {
	     int inc,j,k,span,y,xy;
	     for(inc=1;inc<=num;inc++)
	       {
		   span=incr[inc];
		   for(j=span;j<=n;j++)
		     {
		       y=a[j];
		       for(k=j-span;k>=0&&y<a[k];k=k-span)
			    a[k+span]=a[k];
		       a[k+span]=y;
		     }
	    printf("\n\n\t***************************************************");
	    printf("\n\t\tThe Elements Are After Pass %d....",inc);
	    for(xy=1;xy<=n;xy++)
	    printf("\n\t\tLocation number = %d and content = %d....",xy,a[xy]);
	    getch();
	    }
	    }




void merge()
{
int xx,i,j,k,*aux,l1,l2,size,u1,u2;
clrscr();
size=1;
printf("\n\n\t---------- MERGE SORT PROGRAM------------------------");
for(xx=0;xx<n;xx++)
a[xx]=a[xx+1];
while(size<n)
{
l1=0;
k=0;
      while(l1+size<n)
	{
	 l2=l1+size;
	 u1=l2-1;
	 u2=(l2+size-1<n)?l2+size-1:n-1;
	  for(i=l1,j=l2;i<=u1 && j<=u2;k++)
	    if(a[i]<=a[j])
	      aux[k]=a[i++];
	    else
	      aux[k]=a[j++];
	for(;i<=u1;k++)
	  aux[k]=a[i++];
	for(;j<=u2;k++)
	  aux[k]=a[j++];
	l1=u2+1;
	}
  for(i=l1;k<n;i++)
   aux[k++]=a[i];
  for(i=0;i<n;i++)
   a[i]=aux[i];
  size*=2;
  printf("\n\n");
  printf("\n\t***************************************************");
  for(xx=1;xx<=n;xx++)
    printf("\n\t\tLocation number = %d and content = %d....",xx,a[xx-1]);
  getch();
}
 printf("\n\t***************************************************");
 printf("\n\t\tEnd Of Program.....");
 getch();
}




void quickso()
{
int i;
void quick(int *,int,int);
clrscr();
printf("\n\n\t---------- QUICK SORT PROGRAM------------------------");
quick(a,1,n);
printf("\n\t***************************************************");
for(i=1;i<=n;i++)
printf("\n\t\tLocation number = %d and content = %d....",i,a[i]);
printf("\n\t***************************************************");
printf("\n\t\tEnd Of Program.....");
getch();
}
void quick(int a[],int lower, int upper)
{
int i;
if(upper>lower)
 {
 i=partition(a,lower,upper);
 quick(a,lower,i-1);
 quick(a,i+1,upper);
 }
}
int partition(int a[],int lower, int upper)
{
int p,q,i,temp;
p=lower+1;
q=upper;
i=a[lower];
while(q>=p)
{
 while(a[p]<i)
 p++ ;
 while(a[q]>i)
 q--;
 if(q>p)
 {
  temp=a[p];
  a[p]=a[q];
  a[q]=temp;
 }
}
temp=a[lower];
a[lower]=a[q];
a[q]=temp;
return q;
}




void radixsort()
{
int i;
void radix(int *,int);
clrscr();
printf("\n\n\t---------- RADIX SORT PROGRAM------------------------");
radix(a,n);
}
   void radix(int *a,int n)
	    {
	    int xy,bucket[10][15],buck[10];
	    int i,j,k,l,num,div,large,passes;
	    div=1,num=0,large=a[1];
	    for(i=1;i<=n;i++)
	    {
	    if(a[i]>large)
	    large=a[i];
	    }
	    while(large>0)
	    {
	    num++;
	    large/=10;
	    }
	    for(passes=0;passes<num;passes++)
	    {
	    for(k=0;k<10;k++)
	    buck[k]=0;
	    for(i=1;i<=n;i++)
	    {
	    l=(a[i]/div)%10;
	    bucket[l][buck[l]]=a[i];
	    buck[l]++;
	    }
	    i=1;
	    for(k=0;k<10;k++)
	    {
	    for(j=0;j<buck[k];j++)
	    {
	    a[i]=bucket[k][j];
	    i++;
	    }
	    }
	    printf("\n\n\t***************************************************");
	    printf("\n\n\t\tThe Elements Are After Pass %d....",passes);
	    for(xy=1;xy<=n;xy++)
	    printf("\n\t\tLocation number = %d and content = %d....",xy,a[xy]);
	    getch();
	    div=div*10;
	    }
	    printf("\n\t***************************************************");
	    printf("\n\t\tThe Total Number Of Comparison Is.....%d",qq);
	    printf("\n\t\t***************************************");
	    printf("\n\t\tEnd Of Program.....");
	    getch();
	    }




void heap()
  {
    int i;
    void disply(int [],int);
    void heap_sort(int [],int);
    clrscr();
    printf("\n\n\t---------- HEAP SORT PROGRAM------------------------");
    disply(a,n);
    heap_sort(a,n);
    printf("\n\n\t\tPrinting final content of the array after heap sort....");
    disply(a,n);
    printf("\n\t\tThe Total Number Of Comparison Is.....%d",qq);
    printf("\n\t\t***************************************");
    printf("\n\t\tEnd Of Program.....");
    getch();
  }
void disply(int b[],int nn)
  {
    int ii;
    printf("\n\n\t\tThe Current Content Of The Array Is....");
    printf("\n\t***************************************************");
    for(ii=1;ii<=nn;ii++)
    printf("\n\t\tLocation number = %d and content = %d....",ii,b[ii]);
    printf("\n\t***************************************************");
   }
void heap_sort(int b[],int nn)
  {
    int item,j,x;
    void ins_heap(int [],int,int);
    int del_heap(int[],int *);
    printf("\n\n\t\tExecuting The HEAP SORT Algorithm....");
    for(j=1;j<=(nn-1);j++)
      {
       ins_heap(b,j,b[j+1]);
      }
    for(x=1;x<=nn;x++) printf("%3d",b[x]);
    while(nn>1)
      {
	item=del_heap(b,&nn);
	b[nn+1]=item;
      }
  }
void ins_heap(int c[],int count,int data)
  {
    int ptr,par;
    count++;
    ptr=count;
    while(ptr>1)
      {
	par=(int)(ptr/2);
	if (data<=c[par])
	  {
	    qq++;
	    c[ptr]=data;
	    return;
	  }
	else
	  {
	    c[ptr]=c[par];
	    ptr=par;
	  }
      }
    c[1]=data;
  }
int del_heap(int c[],int *nnn)
  {
    int item,last,left,right,ptr;
    item=c[1];
    last=c[*nnn];
    --*nnn;
    ptr=1;
    left=2;
    right=3;
    while(right<=*nnn)
      {
	if (last>=c[left] && last>=c[right])
	  {
	    c[ptr]=last;
	    return(item);
	  }
	if (c[right]<=c[left])
	  {
	    c[ptr]=c[left];
	    ptr=left;
	  }
	else
	  {
	    c[ptr]=c[right];
	    ptr=right;
	  }
	left=2*ptr;
	right=left+1;
      }
    if (left==*nnn && last<c[left])
      {
	c[ptr]=c[left];
	ptr=left;
      }
    c[ptr]=last;
    return(item);
}


void count()
{
 int i,max=a[1],*temp,*new_arr;
 clrscr();
 printf("\n\n\t---------- COUNTING SORT PROGRAM------------------------");
 for(i=0;i<n;i++)
	 {
	  if(max<a[i+1])
		  max=a[i+1];
	 }
 for(i=0;i<=max;i++)
	  temp[i+1]=0;
 for(i=0;i<n;i++)
	  temp[a[i+1]]=temp[a[i+1]]+1;
 for(i=1;i<=max;i++)
	  temp[i+1]=temp[i]+temp[i+1];
 for(i=0;i<n;i++)
	  new_arr[i+1]=0;
 for(i=0;i<=n;i++)
	 {
	  new_arr[temp[a[i+1]]-1]=a[i+1];
	  temp[a[i+1]]=temp[a[i+1]]-1;
	 }
 for(i=0;i<n;i++)
	  a[i]=new_arr[i];
 printf("\n\t***************************************************");
 for(i=0;i<n;i++)
     printf("\n\t\tLocation number = %d and content = %d....",i+1,a[i]);
  printf("\n\t***************************************************");
  printf("\n\t\tThe Total Number Of Comparison Is.....%d",qq);
  printf("\n\t\t***************************************");
  printf("\n\t\tEnd Of Program......");
  getch();
}






void bintree()
{
int i;
void insert(struct btreenode **,int);
void inorder(struct btreenode *);
struct btreenode *bt;
bt=NULL;
clrscr();
printf("\n\n\t---------- BINARY TREE SORT PROGRAM------------------------");
for(i=0;i<n;i++)
insert(&bt,a[i+1]);
printf("\n\n\t\tInorder Traversal Of Binary Tree");
printf("\n\t***************************************************");
inorder(bt);
printf("\n\t***************************************************");
printf("\n\t\tEnd Of Program......");
getch();
}


void insert(struct btreenode **t,int n)
{
if(*t==NULL)
{
*t=(struct btreenode *)malloc(sizeof(struct btreenode));
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


void inorder(struct btreenode *t)
{
if(t!=NULL)
{
inorder(t->lchild);
printf("\n\t\tContent Is = %d....",t->data);
inorder(t->rchild);
}
}