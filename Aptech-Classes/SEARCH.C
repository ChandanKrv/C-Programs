#include<stdio.h>
void main()
{
int i,n=1,x,*a,cho;
void binsrch(int ,int , int *);
void rbinsrch(int ,int , int *);
void intsrch(int ,int , int *);
void linsrch(int ,int , int *);
void olinsrch(int ,int , int *);
FILE *fp;
clrscr();
fp=fopen("file1.dat","r");
if(fp==NULL)
 {
	 printf("\nFile does not exists");
	 getch();
	 delay(1100);
	 exit();
 }
while(fscanf(fp,"%d",&i)!=EOF)
 {
	 a[n]=i;
	 printf("\n\t\tThe Value At Position %d Is %d....",n,a[n]);
	 n++;
 }
 fclose(fp);
 printf("\n\t\t**************************************************");
 n=n-1;
 printf("\n\t\tThe The Number Of Elements Is %d....",n);
 printf("\n\t\t**************************************************");
 printf("\n\n\t\tEnter The Search Key Element......");
 scanf("%d",&x);
 clrscr();
 printf("\n\n\n\t\t****************MENU DRIVEN PROGRAM*********************");
 printf("\n\n\t\t1)BINARY SEARCH****************************");
 printf("\n\n\t\t2)RECURSIVE BINARY SEARCH******************");
 printf("\n\n\t\t3)INTERPOLATION SEARCH*********************");
 printf("\n\n\t\t4)LINEAR SEARCH****************************");
 printf("\n\n\t\t5)ORDERED SEQUENTIAL SEARCH****************");
 printf("\n\n\t\t******************END MENU********************************");

 printf("\n\n\t\tEnter Your Choice....................");
 scanf("%d",&cho);
 if(cho<1||cho>5)
  {
    printf("\n\n\n\t\t\tWrong Choice.............");
    getch();
    exit(1);
  }
 switch(cho)
  {
    case 1:binsrch(x,n,a);
	   break;

    case 2:rbinsrch(x,n,a);
	   break;

    case 3:intsrch(x,n,a);
	   break;

    case 4:linsrch(x,n,a);
	   break;

    case 5: olinsrch(x,n,a);

    }
}

			 /*Binary Search*/
void binsrch(int x,int n,int *a)
{
int i,f,l,mid,index=1,count=1;
clrscr();
printf("\n\n\t\t*******IT WILL PERFORM BINARY SEARCH METHOD***********");
sort(a,n);
f=1;
l=n;
while(f<=l)
{
mid=(f+l)/2;
if(x==a[mid])
{
index=0;
break;
}
else
{
if(x<a[mid])
{
l=(mid-1);
count++;
}
else
{
f=(mid+1);
count++;
}
}
}
printf("\n\n\t\tThe Total No. Of Comparison Is....%d",count);
if(index==0)
{
printf("\n\n\t\tThe Key %d Found At %d Position....",x,mid);
getch();
}
else
{
printf("\n\n\t\tThe Key %d Has Not Been Found....",x);
getch();
}
}


		  /*Recursive Binary Search*/

void rbinsrch(int x,int n,int *a)
{
int i,f,l,mid,aa;
clrscr();
printf("\n\n\t\t*******IT PERFORM RECURSIVE BINARY SEARCH METHOD***********");
sort(a,n);
f=1;
l=n;
rbinserch(a,f,l,x);
}


rbinserch(int *a,int low,int high,int y)
{
int index=1,mid,count=1;;
while(low<=high)
{
 mid=(low+high)/2;
 if(y==a[mid])
 {
 index=0;
 break;
 }
 else
 {
 if(y<a[mid])
 {
 rbinserch(a,low,mid-1,y);
 count++;
 }
 else
 {
 rbinserch(a,mid+1,high,y);
 count++;
 }
 }
}
  if(index==0)
   {
     printf("\n\n\t\tThe Number Of Comparison Is......%d",count);
     printf("\n\n\t\tThe Key %d Found At %d Position.....",y,mid);
     getch();
     exit(1);
   }
 else
    {
     printf("\n\n\t\tThe Number Of Comparison Is......%d",count);
     printf("\n\n\t\tThe Key %d Not Found.....",y);
     getch();
     exit(1);
    }
    return;
 }

		   /*Inter-Polation Search*/
void intsrch(int x,int n,int *a)
{
int i,f,l,mid,index=1,count=1;
clrscr();
printf("\n\n\t\t*******IT PERFORM INTERPOLATION SEARCH METHOD***********");
sort(a,n);
f=1;
l=n;
while(f<=l)
{
mid=(f+((l-f)*((x-a[f])/(a[l]-a[f]))));
if(x==a[mid])
{
index=0;
break;
}
else
{
if(x<a[mid])
{
l=(mid-1);
count++;
}
else
{
f=(mid+1);
count++;
}
}
}
printf("\n\n\n\t\t\tThe Total No. Of Comparison Is....%d",count);
if(index==0)
{
printf("\n\n\n\t\t\tThe Key %d Found At %d Position....",x,mid);
getch();
}
else
{
printf("\n\n\n\t\t\tThe Key %d Has Not Been Found....",x);
getch();
}
}


			  /*Linear Search*/
void linsrch(int x,int n,int *a)
{
int count=0,i,j=1,q=1;
clrscr();
printf("\n\n\t\t*******IT PERFORM LINEAR SEARCH METHOD***********");
while(j<=n)
{
count++;
if(a[j]==x)
{
q=0;
break;
}
j++;
}
printf("\n\n\n\t\t\tThe Total No. Of Comparison Is....%d",count);
if(q==0)
{
printf("\n\n\n\t\t\tThe Key %d Found At %d Position....",x,j);
getch();
}
else
{
printf("\n\n\n\t\t\tThe Key Has Not Been Found....");
getch();
}
}




		     /*Ordered Sequential Search*/
void olinsrch(int x,int n,int *a)
{
int count=0,i,j=1,q=1,aa;
clrscr();
printf("\n\n\t\t*******IT PERFORM ORDERED LINEAR SEARCH METHOD***********");
sort(a,n);
while((j<=n)&&(x>a[j]))
{
j++;
count++;
}
if(a[j]==x)
q=0;
if(j>n)
printf("\n\n\n\t\t\tThe No. Of Comparisons Is......%d",count);
else
printf("\n\n\n\t\t\tThe No. Of Comparisons Is......%d",count+1);
if(q==0)
printf("\n\n\n\t\t\tThe Key %d Found At %d Position....",x,j);
else
printf("\n\n\n\t\t\tThe Key %d Has Not Been Found....",x);
getch();
}

			/*SORTING METHOD*/
sort(int *a,int n)
{
int i,j,temp,k;
    for(i=1;i<n;i++)
      {
	for(j=1;j<=(n-i);j++)
	   if (a[j]>a[j+1])
	    {
	      temp=a[j];
	      a[j]=a[j+1];
	      a[j+1]=temp;
	    }
	}
    printf("\n\n\t\tSo the final sorted content of the array is....");
    for(i=1;i<=n;i++)
	printf("\n\t\tLocation no. = %d and data =  %d",i,a[i]);
	return;
     }