/*program listing of data-str\heapsort.c
To sort N numbers in ascending order using HEAP SORT algorithm.
****************************************************************************
ALGORITHM INSHEAP(TREE,N,ITEM) :-
****************************************************************************
A heap H with N elements is stored in the array TREE. and an ITEM of
information is given. This algorithm inserts ITEM as a new element of H. PTR
gives the location of ITEM as it rises in the tree, and PAR denotes the
location of the parent of ITEM.
1.  [Add new node to H and initialize PTR.]
    Set N=N+1 and PTR=N.
2.  [Find location to insert ITEM.]
    Repeat Steps 3 to 6 while PTR>1.
3.    Set PAR:=INT[PTR/2].      [Location of the parent node.]
4.    If ITEM<=TREE[PAR], then:
	Set TREE[PTR]:=ITEM, and Return.
      [End of If structure.]
5.  Set TREE[PTR]=TREE[PAR].	[Moves node down.]
6.  Set PTR:=PAR.               [Updates PTR.]
    [End of step 2 loop.]
7.  [Assign ITEM as the root of H.]
    Set TREE[1]=ITEM.
8.  Return.
ALGORITHM INSHEAP(TREE,N,ITEM)
A heap H with N elements is stored in the array TREE. This algorithm assigns
the root TREE[1] of H to the variable ITEM and then reheaps the remaining
elements. The variable LAST saves the value of the original last node of H.
The pointers PTR, LEFT and RIGHT give the locations of LAST and its left and
right children as LAST sinks in the tree.
1.  Set ITEM:=TREE[1].  	[Removes root of H.]
2.  Set LAST:=TREE[N] and N:=N-1.[Removes last node of H.]
3.  Set PTR:=1,LEFT:=2 and RIGHT:=3.[Initializes pointers.]
4.  Repeat Steps 5 to 7 while RIGHT<=N:
5.    If LAST>=TREE[LEFT] and LAST>=TREE[RIGHT], then:
      Set TREE[PTR]:=LAST and Return.
      [End of If structure.]
6.    If TREE[RIGHT]<=TREE[LEFT], then:
	Set TREE[PTR]:=TREE[LEFT] and PTR:=LEFT.
      ELse
	Set TREE[PTR]:=TREE[RIGHT] and PTR:=RIGHT.
      [End of If structure.]
7.    Set LEFT:=2*PTR and RIGHT:=LEFT+1.
    [End of Step 4 loop.]
8.  If LEFT=N and If LAST<TREE[LEFT], then:
    Set TREE[PTR]=TREE[LEFT] and PTR:=LEFT.
9.  Set TREE[PTR]:=LAST.
10. Return.
ALGORITHM HEAPSORT(A,N)
An array A with N elements is given. This algorithm sorts the elements of A.
1.  [Build a heap using INSHEAP algorithm.]
    Repeat for J = 1 to N-1;
      Call INSHEAP(A,J,A[J+!]);
    [End of loop.]
2.  [Sort A by repeatedly deleting the root of H, using DELHEAP algorithm.]
    Repeat while N>1:
      (a) Call DELHEAP(A,N,ITEM).
      (b) Set A[N+1]:=ITEM.
3.  Exit.
*/
#include <stdio.h>
void main()
  {
    int i,a[20],n;
    void display(int [],int);
    void heap_sort(int [],int);
    clrscr();
    printf("\n\n\t\tPlease enter the number of terms....");
    scanf("%d",&n);
    printf("\n\n\t\tNow prepare yourself for the new set of data....\n");
    for(i=1;i<=n;i++)
      {
	printf("\t\tEnter data for the location number %d ->> ");
	scanf("%d",&a[i]);
      }
    display(a,n);
    heap_sort(a,n);
    printf("\n\n\t\tPrinting final content of the array after heap sort....");
    display(a,n);
    getch();
  }
void display(int b[],int nn)
  {
    int ii;
    printf("\n\n\t\tThe current content of the array is....");
    for(ii=1;ii<=nn;ii++)  printf("\t%3d",b[ii]);
  }
void heap_sort(int b[],int nn)
  {
    int item,j,x;
    void ins_heap(int [],int,int);
    int del_heap(int[],int *);
    printf("\n\n\t\tExecuting the heap sort algorithm....");
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