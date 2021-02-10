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
node *h1,*h2,*h3,*h4,nd[100];
void buble();
int i1,n;
	     /* MAIN FUNCTION */
void main()
{
node *pp,*h;
int i,x11,terms,x21,md,md1,p,root,count,rtnd,sym[100];
float z,x1,x,y,x2,md2=0,x3,y3,z3;
clrscr();
printf("Enter The Number Of Terms :- ");
scanf("%d",&n);
for(i1=0;i1<n;i1++)
{
printf("\n\t\t Enter The Character You Want To Insert:- ");
scanf("%s",&nd[i1].ch);
printf("\t\t Enter The No. You Want To Insert:- ");
scanf("%f",&nd[i1].fr);
}
buble();
x11=(n%2);
for(x21=2;x21<=3;x21++)
{
if((x21%2)==x11)
{
md=x21;
break;
}
}
for(md1=1;md1<=md;md1++)
{
h3=&nd[n-md1];
md2+=h3->fr;
}
i=md+3;
h=(node *)malloc(sizeof(node));
h->fr=md2;
for(md1=1;md1<=md;md1++)
nd[n-md1].father=h;
if(md==2)
{
terms=(n-1)/2;
if(nd[n-1].fr<=nd[n-2].fr)
{
nd[n-1].sign=1;
nd[n-2].sign=0;
}
else
{
nd[n-1].sign=0;
nd[n-2].sign=1;
}
}
if(md==3)
{
terms=(n-3)/2;
h1=&nd[n-1];
h2=&nd[n-2];
x3=h1->fr;
y3=h2->fr;
z3=h->fr;
if(x3<y3)
{
if(y3<z3)
{
       h1->sign=2;
       h2->sign=1;
       h->sign=0;

}
if(y3==z3)
{
h1->sign=2;
h2->sign=1;
h->sign=0;
}
if(y3>z3)
{
h2->sign=0;
	if(z3<x3)
	 {
	 h1->sign=1;
	 h->sign=2;
}
	if(z3==x3)
	 {
	 h1->sign=2;
	 h->sign=1;
	 }
	if(z3>x3)
	 {
	 h1->sign=2;
	 h->sign=1;
	 }
}
}

if(x3==y3)
{
if(y3<z3 || y3==z3)
{
	 h1->sign=2;
	 h2->sign=1;
	 h->sign=0;
}
if(y3>z3)
{
      h->sign=2;
      h1->sign=1;
      h2->sign=0;
}
}

}
h1=&nd[n-md-1];
h2=&nd[n-md-2];
h4=h;
for(p=1;p<=terms;p++)
{
x=h1->fr;
y=h2->fr;
z=h4->fr;
if(x<y)
{
if(y<z)
{
       h1->sign=2;
       h2->sign=1;
       h4->sign=0;

}
if(y==z)
{
h1->sign=2;
h2->sign=1;
h4->sign=0;
}
if(y>z)
{
h2->sign=0;
	if(z<x)
	 {
	 h1->sign=1;
	 h4->sign=2;
}
	if(z==x)
	 {
	 h1->sign=2;
	 h4->sign=1;
	 }
	if(z>x)
	 {
	 h1->sign=2;
	 h4->sign=1;
	 }
}
}

if(x==y)
{
if(y<z || y==z)
{
	 h1->sign=2;
	 h2->sign=1;
	 h4->sign=0;
}
if(y>z)
{
      h4->sign=2;
      h1->sign=1;
      h2->sign=0;
}
}
h=(node *)malloc(sizeof(node));
h->fr=(x+y+z);
h1->father=h;
h2->father=h;
h4->father=h;
h4=h;
h1=&nd[n-i];
h2=&nd[n-i-1];
i+=2;
}
h4->father=NULL;
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
getch();
}
void buble()
{
char ch1[2];
int pass,fl,j;
float h;
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