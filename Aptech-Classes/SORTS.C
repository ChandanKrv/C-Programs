/*program listing of data-str\quicksor.c*/
/*To sort "N" numbers in ascending order using QUICK SORT algorithm.*/
#define maxloc 10
#define NULL 0
void main()
  {
    int arr[11],n;
    int anjan(void);
    void quick_sort(int [],int);
    void display(int [],int);
    void array_initialize(int [],int);
    n=anjan();
    array_initialize(arr,n);
    quick_sort(arr,n);
    display(arr,n);
    getch();
  }
void array_initialize(int a[],int nn)
  {
    int i;
    printf("\n\n\t\tPlease enter the data for the array....\n");
    for(i=1;i<=nn;i++)
      {
	printf("\t\tEnter data for location number\t%d --> ",i);
	scanf("%d",&a[i]);
      }
  }
void stk_push(int l_stk[],int u_stk[],int *tt,int l_data,int u_data)
  {
    if (*tt==maxloc)
      {
	printf("\n\n\t\tO V E R F L O W !!!!");
      }
    else
      {
	++*tt;
	l_stk[*tt]=l_data;
	u_stk[*tt]=u_data;
      }
  }
void stk_pop(int l_stk[],int u_stk[],int *tt,int *l_data,int *u_data)
  {
    if (*tt==NULL)
      {
	printf("\n\n\t\tU N D E R F L O W !!!!");
      }
    else
      {
	*l_data=l_stk[*tt];
	*u_data=u_stk[*tt];
	--*tt;
      }
  }
void quick(int qa[],int qbeg,int qend,int *qloc)
  {
    int left,right;
    void interchange(int [],int,int);
    left=qbeg;
    right=qend;
    *qloc=qbeg;
    while(1)
      {
	while(qa[*qloc]<=qa[right] && *qloc!=right)
	  right--;
	if (*qloc==right)
	  return;
	 if (qa[*qloc]>qa[right])
	  {
	    interchange(qa,*qloc,right);
	    *qloc=right;
	  }
	while(qa[left]<=qa[*qloc] && *qloc!=left)
	  left++;
       if (*qloc==left)
	  return;
	if (qa[left]>qa[*qloc])
	  {
	    interchange(qa,*qloc,left);
	    *qloc=left;
	  }
      }
  }
void interchange(int array[],int loc1,int loc2)
  {
    int temp;
    temp=array[loc1];
    array[loc1]=array[loc2];
    array[loc2]=temp;
  }
void quick_sort(int a[],int nn)
  {
    int u_stack[11],l_stack[11],top,beg,end,loc;
    void stk_push(int [],int [],int *,int,int);
    void stk_pop(int [],int [],int *,int *,int *);
    void quick(int [],int,int,int *);
    top=NULL;
    if (nn>1)
      stk_push(l_stack,u_stack,&top,1,nn);
    while(top!=NULL)
     {
	stk_pop(l_stack,u_stack,&top,&beg,&end);
	quick(a,beg,end,&loc);
	printf("\n\t\tbeg = %d, end = %d & loc = %d....",beg,end,loc);
	if (beg<loc-1)
	stk_push(l_stack,u_stack,&top,beg,loc-1);
	if (loc+1<end)
	  stk_push(l_stack,u_stack,&top,loc+1,end);
      }
  }
void display(int a[],int nn)
  {
    int i;
    printf("\n\n\t\tThe current content of the array is....\n\n\t\t");
    for(i=1;i<=nn;i++)
      {
	printf("%4d",a[i]);
      }
    printf("\n");
  }
int anjan(void)
  {
    int nn;
    clrscr();
    printf("\n\n\t\tPlease enter the number of numbers....");
    scanf("%d",&nn);
    return(nn);
}