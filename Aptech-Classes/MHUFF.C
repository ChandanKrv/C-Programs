#include<math.h>
#include<alloc.h>
struct hman
{
float fr;
char ch[2];
struct hman *father;
int sign;
int rem;
};

typedef struct hman node;
node *h1,*h2,nd[100];
void buble();
int i1,n;

	     /* MAIN FUNCTION */


void main()
{
node *pp,*h;
static int m;
char q[2],r[2],tmp[2]="x";
int y3,y4,h11,iii,ll,ll1,ll2,ll3,ll4,i=3,jj,kk,p,root,count,rtnd,sym[100];
float x1,x,y,x2,y1,y2,f1;
clrscr();
printf("Enter The Number Of Terms :- ");
scanf("%d",&n);
m=n;
iii=n-i;
for(i1=0;i1<n;i1++)
{
printf("\n\t\t Enter The Character You Want To Insert:- ");
scanf("%s",nd[i1].ch);
printf("\t\t Enter The No. You Want To Insert:- ");
scanf("%f",&nd[i1].fr);
}
buble();
for(ll=0;ll<n;ll++)
nd[ll].rem=1;
h1=&nd[n-1];
h2=&nd[n-2];
for(p=1;p<=(n-1);p++)
{
x=h1->fr;
y=h2->fr;
h1->sign=1;
h2->sign=0;
h=(node *)malloc(sizeof(node));
h->fr=(x+y);
h->rem=0;
strcpy(h->ch,tmp);
for(jj=0;jj<m;jj++)
{
	if(h->fr>=nd[jj].fr)
	  {
	    y1=nd[jj].fr;
	    strcpy(q,nd[jj].ch);
	    y3=nd[jj].rem;
	    ll3=nd[jj].sign;
	    nd[jj].fr=h->fr;
	    nd[jj].rem=h->rem;
	    nd[jj].sign=h->sign;
	    strcpy(nd[jj].ch,h->ch);
		 for(kk=jj+1;kk<=m;kk++)
		   {
			y2=nd[kk].fr;
			y4=nd[kk].rem;
			ll4=nd[kk].sign;
			strcpy(r,nd[kk].ch);
			nd[kk].fr=y1;
			nd[kk].rem=y3;
			nd[kk].sign=ll3;
			strcpy(nd[kk].ch,q);
			y1=y2;
			y3=y4;
			ll3=ll4;
			strcpy(q,r);
		   }
	    break;
	  }
}
printf("\n");
m++;
h2=&nd[iii];
h1=&nd[iii+1];
iii--;
}
nd[0].father=NULL;
for(ll=(2*n-2);ll>=0;ll=ll-1)
{
ll1=ll;
f1=nd[ll1].fr+nd[ll1-1].fr;
for(ll2=ll1-1;ll2>=0;ll2--)
{
if(nd[ll2].rem==0 && nd[ll2].fr==f1)
{
nd[ll1].father=&nd[ll2];
nd[ll1-1].father=&nd[ll2];
break;
}
}
}
x1=0;
x2=0;


			for(i=0;i<(2*n-1);i++)
				{
				pp=&nd[i];
				if(pp->rem==1)
				{
				root=0;
				printf("\n\n\t\tThe Code For %s Is ",pp->ch);
				while(pp->father!=NULL)
					{
					sym[root]=pp->sign;
					pp=pp->father;
					root++;
					}
				count=root;
				x1+=(float)(count*nd[i].fr);
				x2+=(float)(nd[i].fr*(log(nd[i].fr)/log(2)));
				for(rtnd=root-1;rtnd>=0;rtnd--)
				printf("%d",sym[rtnd]);
				}
				}
				x2=-x2;
				printf("\n\n\t\tThe Avg. Length Is %f Bits/Symbol",x1);
				printf("\n\t\tThe Entropy Is %f Bits/Symbol",x2);
				printf("\n\t\tThe Redundancy Is %f Bits/Symbol",-(x2-x1));

getch();
}

void buble()
{
int pass,fl,j,h11;
float h;
char ch1;
for(pass=0;pass<(n-1);pass++)
{
  fl=0;
  for(j=0;j<(n-pass-1);j++)
   {
   if(nd[j].fr<nd[j+1].fr)
    {
     fl=1;
     h=nd[j].fr;
     strcpy(ch1,nd[j].ch);
     nd[j].fr=nd[j+1].fr;
     strcpy(nd[j].ch,nd[j+1].ch);
     nd[j+1].fr=h;
     strcpy(nd[j+1].ch,ch1);
    }
  }
}
}