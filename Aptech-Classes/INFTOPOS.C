#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int maxcol=80,true=1,false=0;
void postfix(char *, char *);
int isoperand(char);
void popntest(struct stack *,char *,int *);
int prcd(char,char);
void push(struct stack *,char);
char pop(struct stack *);

void main()
{
char infix[80];
char postr[80];
int pos=0;
clrscr();
while((infix[pos++]=getchar())!='\n');
infix[--pos]='\0';
printf("\n\t\t%s%s","The Original Infix Expression Is:- ",infix);
postfix(infix,postr);
printf("%s\n",postr);
getch();
}

struct stack
{
int top;
char item[80];
};

void postfix(char infix[],char postr[])
{
int position,und;
int outpos=0;
char topsymb='+';
char symb;
struct stack opstk;
opstk.top=-1;
for(position=0;(symb=infix[maxcol])!='\0';position++)
if(isoperand(symb))
postr[outpos++]=symb;
else
   {
   popntest(&opstk,&topsymb,&und);
   while(!und&&prcd(topsymb,symb))
	{
	postr[outpos++]=topsymb;
	popntest(&opstk,&topsymb,&und);
	}
   if(!und)
     push(&opstk,topsymb);
   if(und||(symb!=')'))
     push(&opstk,symb);
   else
     topsymb=pop(&opstk);
   }
while(!empty(&opstk))
postr[outpos++]=pop(&opstk);
postr[outpos]='\0';
return;
}