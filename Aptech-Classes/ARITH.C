			// ARITHMATIC CODING

void main()
{
static int x,y,k;
int C[20],A[20],B[20],i,n,n1,n2,rem,j=1;
float T=0,P[20],tag,u[20],l[20],u1[20],l1[20],f[20],ctag=0;
char ch[20][20],*ch1;
clrscr();
ch1[0]='\0';
printf("\n\tEnter The Number Of Terms :- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\tEnter The symbol :- ");
scanf("%s",ch[i]);
printf("\n\tEnter The Probability :- ");
scanf("%f",&P[i]);
T=T+P[i];
}
if(T>1.0||T<1.0)
{
printf("\n\t\tPlease Try Again....");
getch();
exit(1);
}
for(i=1;i<=n;i++)
{
printf("\n %s",ch[i]);
}
f[0]=0.0;
for(y=1;y<=n;y++)
{
f[y]=f[y-1]+P[y];
}
if(y>n)
f[y]=f[n];
printf("\n\tEnter The Sequence :- ");
scanf("%d",&n1);
n2=n1;
while(n2>0)
{
rem=n2%10;
A[j]=rem;
j++;
n2/=10;
}
j-=1;
for(i=1;i<=j;i++)
B[i]=A[j-i+1];
printf("\n\tThe Length Of The Symbol Is => %d",j);
u[0]=1.0;
l[0]=0.0;
for(x=1;x<=j;x++)
{
l[x]=l[x-1]+((u[x-1]-l[x-1])*f[B[x]-1]);
u[x]=l[x-1]+((u[x-1]-l[x-1])*f[B[x]]);
printf("\n\tThe upper bound and lower bounds are  %f %f",u[x],l[x]);

}
x-=1;
tag=(u[x]+l[x])/2;
printf("\n\tThe Value Of Tag Field Is = %f ",tag);

		      // DECODING PROCEDURE //
printf("\n\t\tDecoding");
l1[0]=0.0;
u1[0]=1.0;
i=1;
while(ctag<tag||ctag>tag)
{
for(k=1;k<=n;k++)
{
l1[k]=l[i-1]+((u[i-1]-l[i-1])*f[k-1]);
u1[k]=l[i-1]+((u[i-1]-l[i-1])*f[k]);
if(tag<=u1[k] && tag>=l1[k])
{
C[i]=k;
printf("\n\tThe symbol Is = %s at index %d ",ch[k],C[i]);
strcat(ch1,ch[k]);
break;
}
}
l[i]=l1[k];
u[i]=u1[k];
ctag=(l[i]+u[i])/2;
i+=1;
}
printf("\nThe Decoded Sequence Is = >>" );
for(i=1;i<=j;i++)
printf(" %d",C[i]);
printf("\nThe Decoded symbol Sequence Is = >> %s",ch1 );
getch();
}