#include<math.h>
int top=-1,max=20,stk[20];
char *s;
void push(int);
void main()
{
int n,n1,n2,n3;
clrscr();
printf("\n\n\t\tEnter The Postfix Expr. To Be Evaluated...");
gets(s);
while(*s!='\x0')
{
if(*s>=48&&*s<=57)
{
n=*s-'0';
push(n);
}
else
{
n1=pop();
n2=pop();
if(*s=='+')
n3=n2+n1;
else if(*s=='-')
n3=n2-n1;
else if(*s=='*')
n3=n2*n1;
else if(*s=='/')
n3=n2/n1;
else if(*s=='$')
n3=pow(n2,n1);
else
{
printf("\n\t\tUnknown Operator.....");
getch();
exit();
}
push(n3);
}
s++;
}
printf("\n\n\t\tThe Result Is......%d",pop());
getch();
}

void push(int n)
{
if(top==max)
{
printf("\n\tSTACK OVERFLOW!!!");
getch();
exit();
}
top++;
stk[top]=n;
}

pop()
{
int x;
if(top==-1)
{
printf("\n\t\tSTACK UNDERFLOW!!!");
getch();
exit();
}
x=stk[top];
top--;
return(x);
}