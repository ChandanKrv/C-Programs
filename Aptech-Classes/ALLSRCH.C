#include<stdio.h>
#include<conio.h>
int comp=0,*a,n;
void main()
{
void seqsear();
void mseqsear(int,int);
void binsear(int,int);
void intsear(int,int);
int n,i,k,ch;
clrscr();
printf("\n\t enter the no.do you want to insert:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\t enter no.:- ");
scanf("%d",&a[i]);
}
printf("\n\t enter the no. is to be search:- ");
scanf("%d",&k);
printf("\n\t\t Sequential Search");
printf("\n\t\t Modified Sequential Search");
printf("\n\t\t Binary Search");
printf("\n\t\t Interpolation Search");
printf("\n\t\t Enter Your Choice");
scanf("%d",&ch);
switch(ch)
{
case 1: seqsear();
	break;
case 2: mseqsear();
	break;
case 3: binsear();
	break;
case 4: intsear();
	break;
case 5: exit();
}
getch();
}


void seqsear()
{
int i,k,fl;
clrscr();
for(i=1;i<=n;i++)
{
comp++;
if(a[i]!=k)
{
i++;
}
if(a[i]==k)
{
printf("\n\t %d",i);
}
}
printf("\n\t\t%d",comp);
getch();
}

void mseqsear()
{
int a[500],i,n,k,q;
clrscr();
printf("\n\t enter the no.of terms do you want to insert:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\t enter no.:- ");
scanf("%d",&a[i]);
}
printf("\n\t enter the no.do you want to search:- ");
scanf("%d",&k);
i=1;
while((a[i]<k)&&(i<n))
{
comp++;
q=1;
i=i+1;
}
if((i>n)||(a[i]>k))
{
q=0;
}
if(q==1)
{
printf("\n\t %d",i);
}
else
{
printf("\n\t not found");
}
printf("\n\t\t%d",comp);
getch();
}

void binsear()
{
int a[500],i,n,k,mid,lower,upper,index=0;
clrscr();
printf("\n\t enter the no.s to be inserted:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n enter the no.");
scanf("%d",&a[i]);
}
printf("\n\t enter the no. to be search:- ");
scanf("%d",&k);
lower=1;
upper=n;
while(lower<=upper)
{
mid=(upper+lower)/2;
comparison++;
if(a[mid]==k)
{
index=1;
break;
}
else
{
if(k<a[mid])
upper=mid-1;
else
lower=mid+1;
}
}
if(index==1)
{
printf("\n\t%d",mid);
}
else
{
printf("\n\t not found ");
}
printf("\n\t\t%d",comparison);
getch();
}


void intsear()
{
int a[500],i,n,k,mid,lower,upper,index=0;
clrscr();
printf("\n\t enter the no.s to be inserted:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n enter the no.");
scanf("%d",&a[i]);
}
printf("\n\t enter the no. to be search:- ");
scanf("%d",&k);
lower=1;
upper=n;
while(lower<=upper)
{
mid=lower+(((k-a[lower])/(a[upper]-a[lower]))*(upper-lower));
comp++;
if(a[mid]==k)
{
index=1;
break;
}
else
{
if(k<a[mid])
upper=mid-1;
else
lower=mid+1;
}
}
if(index==1)
{
printf("\n\t%d",mid);
}
else
{
printf("\n\t not found ");
}
printf("\n\t\t%d",comp);
getch();
}