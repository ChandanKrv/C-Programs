#include<math.h>
#include<alloc.h>
struct hman
{
float fr;
char ch[2];
struct hman *father;
int sign;
};

typedef struct hman node;
node *h1,*h2,nd[100];
void buble();
int i1,n;

	     /* MAIN FUNCTION */


void main()
{
node *pp,*h;
int i=3,p,root,count,rtnd,sym[100];
float x1,x,y,x2,tot;
clrscr();
printf("Enter The Number Of Terms :- ");
scanf("%d",&n);
for(i1=0;i1<n;i1++)
{
printf("\n\t\t Enter The Character You Want To Insert:- ");
scanf("%s",nd[i1].ch);
printf("\t\t Enter The No. You Want To Insert:- ");
scanf("%f",&nd[i1].fr);
tot+=nd[i1].fr;
}
if(tot!=1)
{
printf("\n\t\tProbality Must Be One....");
getch();
exit(1);
}
buble();
h1=&nd[n-1];
h2=&nd[n-2];
for(p=1;p<=(n-1);p++)
{
x=h1->fr;
y=h2->fr;
if (x<=y)
{
h1->sign=1;
h2->sign=0;
}
else
{
h2->sign=1;
h1->sign=0;
}
h=(node *)malloc(sizeof(node));
h->fr=(x+y);
h1->father=h;
h2->father=h;
h1=h;
h2=&nd[n-i];
i++;
}
h1->father=NULL;
x1=0;
x2=0;
			for(i=0;i<n;i++)
				{
				root=0;
				pp=&nd[i];
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
				//x2=-x2;
				printf("\n\n\t\tThe Avg. Length Is %f Bits/Symbol",x1);
				printf("\n\t\tThe Entropy Is %f Bits/Symbol",fabs(x2));
				printf("\n\t\tThe Redundancy Is %f Bits/Symbol",-(fabs(x2)-x1));
getch();
}

void buble()
{
int pass,fl,j;
float h;
char ch1[2];
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