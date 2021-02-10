			// ARITHMATIC CODING
struct arith{
char x[2];
float f;
};

void main()
{
struct arith a[10];
static int i1,i2,k;
int ind3[16],ind1[16],ind2[16],i,n,rem,j=1;
char *s;
unsigned long int n1,n2;
float tot=0.0,cd[16],tag,tag1,u[16],l[16],u1[16],l1[16],f[20],ctag=0.0;
clrscr();
printf("\n\tEnter The Number Of Terms :- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
printf("\tEnter The Character :- ");
scanf("%s",a[i].x);
printf("\tEnter The Probability :- ");
scanf("%f",&a[i].f);
tot=tot+a[i].f;
}
if(tot!=1.0)
{
printf("\n\t\tProbability Must Be 1....");
getch();
exit(1);
}
f[0]=0.0;
for(i2=1;i2<=n;i2++)
{
f[i2]=f[i2-1]+a[i2].f;
}
if(i2>n)
f[i2]=f[n];
printf("\n\tEnter The Sequence :- ");
scanf("%ld",&n1);
n2=n1;
while(n2>0)
{
rem=n2%10;
if(rem>n)
{
printf("\n\tWrong Value Entered..");
getch();
exit(1);
}
ind1[j]=rem;
j++;
n2/=10;
}
j-=1;
for(i=1;i<=j;i++)
ind2[i]=ind1[j-i+1];
printf("\n\tThe Length Of The Symbol Is => %d",j);
u[0]=1.0;
l[0]=0.0;
for(i1=1;i1<=j;i1++)
{
l[i1]=l[i1-1]+((u[i1-1]-l[i1-1])*f[ind2[i1]-1]);
u[i1]=l[i1-1]+((u[i1-1]-l[i1-1])*f[ind2[i1]]);
}
i1-=1;
tag=(u[i1]+l[i1])/2;
printf("\n\tThe Value Of Tag Is = %f ",tag);
printf("\n\tThe Binary Equivalent Is = >> ");
tag1=tag*2;
for(i=1;i<24;i++)
{
if(tag1<1)
printf("0");
else
{
printf("1");
tag1=tag1-1;
}
tag1=tag1*2;
}

		      // DECODING PROCEDURE //
printf("\n\n\t------------- Decoding Procedure----------" );
l1[0]=0.0;
u1[0]=1.0;
s[0]='\0';
i=1;
while(ctag!=tag)
{
for(k=1;k<=n;k++)
{
l1[k]=l[i-1]+((u[i-1]-l[i-1])*f[k-1]);
u1[k]=l[i-1]+((u[i-1]-l[i-1])*f[k]);
if(tag<=u1[k] && tag>=l1[k])
{
ind3[i]=k;
break;
}
}
l[i]=l1[k];
u[i]=u1[k];
ctag=(l[i]+u[i])/2;
printf("\nLower Range =%f    Upper Range =%f  Decoded Symbol =%s",l[i],u[i],a[k].x);
strcat(s,a[k].x);
i+=1;
}
printf("\n\tThe Final Lower Range Of Tag= %f",l1[k]);
printf("\n\tThe Final Upper Range Of Tag= %f",u1[k]);
printf("\n\n\t\tTherefore The Final Decoded String Is = >> %s",s );
getch();
}

linkfloat()
{
float a=0,*b;
b=&a;
a=*b;
}