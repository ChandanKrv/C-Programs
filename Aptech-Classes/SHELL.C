int i;
#include<stdio.h>
void main()
{
FILE *fp;
int n,a,*incr,num,*a1;
//void shell(int *,int,int *,int);
clrscr();
/*printf("\n\t enter the no.do you want to insert...... ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\t enter the no...... ");
scanf("%d",&a[i]);
}*/
fp=fopen("file1.dat","ab+");
if(fp==NULL)
{
printf("\n\t\tWrong File Name.....");
getch();
exit();
}
i=0;
while(!feof(fp))
{
fscanf(fp,"%d",&a);
a1[i]=a;
printf("\n\t%d",a1[i]);
i++;
}
fclose(fp);
n=i;
printf("\n\t\tThe Number Of Elements Is...%d",n);
printf("\n\t enter the no.of elements in the incr array...... ");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("\n\t enter the no...... ");
scanf("%d",&incr[i]);
}
shell(a1,n,incr,num);
}
   shell(int *a,int n,int *incr,int num)
	    {
	     int inc,j,k,span,y,xy;
	     for(inc=0;inc<num;inc++)
	       {
		   span=incr[inc];
		   for(j=span;j<n;j++)
		     {
		       y=a[j];
		       for(k=j-span;k>=0&&y<a[k];k=k-span)
			 {
			   a[k+span]=a[k];
			 }
		       a[k+span]=y;
		     }
	    printf("\n\n\t***************************************************");
	    printf("\n\n\t The Elements Are After Pass %d....",inc);
	    for(xy=0;xy<n;xy++)
	    printf("\n\n\tThe Element In Position %d Is.....%d",xy,a[xy]);
	    getch();
	    }
	    }