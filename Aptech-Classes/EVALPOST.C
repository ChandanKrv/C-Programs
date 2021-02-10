#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int maxcol=80,true=1,false=0;
double eval(char[]);
double pop(struct stack *);
void push(struct stack *,double);
int empty(struct stack *);
int isdigit(char);
double oper(int,double,double);

void main()
{
char expr[80];
int position=0;
while((expr[position++]=getchar())!='\n')
;
expr[--position]='\0';
printf("%s%s\n\t","The Original Postfix Expression Is:- ",expr);
printf("%s%f\n\t","Value Is:- ",eval(expr));
}

struct stack
{
int top;
double item[80];
};
double eval(char expr[])
{
int c,position;
double opnd1,opnd2,value;
struct stack opndstk;
opndstk.top=-1;
for(position=0;(c=expr[position])!='\0';position++)
if(isdigit(c))
push(&opndstk,(double)(c-'0'));
else
{
opnd2=pop(&opndstk);
opnd1=pop(&opndstk);
value=oper(c,opnd1,opnd2);
push(&opndstk,value);
}
return(pop(&opndstk));
}

int isdigit(char symb)
{
return(symb>='0'&&symb<='9');
}

double oper(int symb,double op1, double op2)
{
switch(symb)
{
case '+' : return(op1+op2);
case '-' : return(op1-op2);
case '*' : return(op1*op2);
case '/' : return(op1/op2);
case '$' : return(pow(op1,op2));
default  : printf("%s","Illegal Operation");
	   exit(1);
}


}