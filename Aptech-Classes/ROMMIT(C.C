/* void main ()
 {
long int r,b,i,a,x,n,c;
 a=0;
 b=1;
 i=1;
 clrscr();
 printf("\nEnter The Number Of Terms :");
 scanf("%ld",&n);
 while(i<=(n-2))
   {
     r=0;
     c=a+b;
			  if(c==2)
			   {
			    printf("\n%ld is prime number",c);
			    //getch();
			  }
if(c!=1||c!=2)
{
for(x=2;x<=(c-1);x++)
{
r=c%x;
if(r==0)
break;
}
if(r!=0)
printf("\n%ld is a prime number ",c);
}
     a=b;
     b=c;
     i++;
     }
    getch();
} */
//merging of arrays
void main()
{
int i,j,a[35],b[35],c[70],m,n,k;
clrscr();
printf("how many number you want to input ");
scanf ("%d",&m);
printf("how many number you want to input ");
scanf ("%d",&n);
for (i=0;i<m;i++)
{
printf ("input the number please --");
scanf ("%d",&a[i]);
}
for (j=0;j<n;j++)
{
printf ("input the number --");
scanf ("%d",&b[j]);
}
k=0;
for(i=0;i<m;i++)
{
c[k]=a[i];
k++;
}
for(j=0;j<n;j++)
{
c[k]=b[j];
k++;
}
for(k=0;k<(m+n);k++)
printf("\n %d",c[k]);
getch();
}