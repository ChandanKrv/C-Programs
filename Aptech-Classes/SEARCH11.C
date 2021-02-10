#include<stdio.h>
int wd=0;
void main()
{
 int a[50],i,j,ch,key,n=0,index,f,l;
 char *file,con='y';
 FILE *fp;
/*Function Prototype are declare here*/
 void menu(void);
 int sequencial_search(int *,int,int);
 int modified_search(int *,int,int);
 int binary_iterative(int *,int,int);
 int binary_recursive(int *,int,int,int);
 int interpolation_search(int *,int,int);
/* For file manupulation i.e the data read from file*/
 clrscr();
 printf("\nEnter the file name:");
 scanf("%s",file);
 fp=fopen(file,"r");
 if(fp==NULL)
 {
	 printf("\nFile does not exists");
	 delay(1100);
	 exit();
 }
 while(fscanf(fp,"%d",&i)!=EOF)
 {
	 a[n]=i;
	 printf(" %d",i);
	 n++;
 }
 fclose(fp);
  /*Search Key is taken here*/
  printf("\nEnter the key value for searching in the file %s:",file);
  scanf("%d",&key);


 while(con=='y'||con=='Y')
 {
    /*Display the menu for searching algorithm*/
   clrscr();
   printf("Now,choose what searching algorithm you will use...");
   menu();
   printf("\nEnter the your choice:");
   scanf("%d",&ch);
   clrscr();
   switch(ch)
   {

     case 1:
	  index=sequencial_search(a,n,key);
	  if(index>=0)
	  {
		   printf("\nThe key %d exists in the file",key);
		   printf("\nAnd the index is %d",index);

	  }
	  else
		   printf("\nKey is not exists in the file");
	  break;


     case 2:
	 index=modified_search(a,n,key);
	 if(index>=0)
	 {
		   printf("The key %d exists in the file",key);
		   printf("\n And index value is:%d",index);
	 }
	  else
		   printf("Key is not exists in the file");

	  break;


     case 3:
	 index=binary_iterative(a,n,key);
	 if(index>=0)
	 {
		   printf("The key %d exists in the file",key);
		   printf("\n And index is:%d",index);
	 }
	 else
		   printf("Key is not exists in the file");

	 break;


     case 4:
	 f=0;
	 l=n-1;
	 index=binary_recursive(a,f,l,key);
	 if(index>=0)
	 {
		   printf("The key %d exists in the file",key);
		   printf("\nAnd index value is:%d",index);
	  }
	  else
		   printf("Key is not exists in the file");
	 break;


     case 5:
	 index=interpolation_search(a,n,key);
	 if(index>=0)
	 {
		   printf("\nThe key %d exists in the file",key);
		   printf("\nAnd the index is:%d",index);
	 }
	 else
		   printf("\nKey is not exists in the file");
	  break;


     case 6:
	   exit();


     default:
	 printf("\nInvalid chioce");
	 delay(3000);
	 con='y';
	 clrscr();
	 continue;
   }
  printf("\nWORK DONE:%d",wd);
  printf("\nDo you search the key by Another algorithm(y/n)?");
  con=getch();
 }
}


 void menu(void)
 {
   printf("\n1.Sequencial search");
   printf("\n2.Modified seach");
   printf("\n3.Binary search(iterative)");
   printf("\n4.Binary search(Recuesive)");
   printf("\n5.Interpolation search");
   printf("\n6.Exit");
 }


 int sequencial_search(int *a,int n,int key)
 {
   int index=0;
   wd=1;
   while(index<=n-1 && *(a+index)!=key)
   {
     index++;
     wd++;
   }
   if(index>n-1)
       return(-1);
   else
       return(index);
  }


 int modified_search(int *a,int n,int key)
 {
  int index=0;
  wd=1;
  while(*(a+index)<key && index<=n-1)
  {
    index++;
    wd++;
  }
  if(index>n-1 || *(a+index)>key)
     return(-1);
  else
     return(index);

  }


 int binary_iterative(int *a,int n,int key)
 {
  int f,l,tag=0,index;
  f=0;
  l=n-1;
  wd=1;
  while(f<=l && tag!=1)
  {
      index=(f+l)/2;
      if(key==*(a+index))
      {
	 tag=1;
	 return(index);
      }
      else if(key<*(a+index))
      {
	 l=index-1;
	 wd++;
      }
      else
      {
	 f=index+1;
	 wd++;
      }
    }
    if(tag==0)
	return(-1);
    return(index);
 }


 int binary_recursive(int *a,int f,int l,int key)
 {
   int mid,index;
   wd=1;
   if(l<f)
       return(-1);
   else
   {
       mid=(f+l)/2;
       if(key==*(a+mid))
	   index=mid;
       else if(key<*(a+mid))
       {
	   index=binary_recursive(a,f,mid-1,key);
	   wd++;
       }
       else
       {
	   index=binary_recursive(a,mid+1,l,key);
	   wd++;
       }
     }
   return index;
 }

 int interpolation_search(int *a,int n,int key)
 {
   int l,f,mid,d,index=-1;
   f=0;
   l=n-1;
   wd=1;
   if(*(a+f)<=key && key<=*(a+l))
   {
      while(f<l && index==-1)
      {
	 d=*(a+l)-*(a+f);
	 if(d==0)
		mid=f;
	else
		mid=f+((key-*(a+f))/d)*(l-f);
	if(key==*(a+mid))
		index=mid;
	else if(key<*(a+mid))
	{
		l=mid-1;
		wd++;
	}
	else
	{
		f=mid+1;
		wd++;
	}
      }
    }
   return(index);
  }