int top=-1,n,stk[40],nn=0;
char *s,str[40],topsym;
void push(char);
char pop();
char stktop();
int prcd(char,char *);
#include<ctype.h>
void main()
{
int m;
clrscr();
printf("\n\n\t\tEnter The String In Infix Form....");
gets(s);
while(*s!='\x0')
{
n=toascii(*s);
if((n>=65&&n<=90)||(n>=97&&n<=122))
str[nn++]=*s;
else
{
while((top>-1)&&prcd(stktop(),s))
{
topsym=pop();
str[nn++]=topsym;
}
if(top<0||*s!=')')
push(*s);
else
topsym=pop();
}
s++;
}

while(top>-1)
{
topsym=pop();
str[nn++]=topsym;
}
printf("\n\n\t\tThe Postfix Form Is.....");
for(m=0;m<nn;m++)
printf("%c",str[m]);
getch();
}



void push(char c)
{
if(top==40)
{
printf("\n\tSTACK OVERFLOW!!!");
getch();
exit();
}
top++;
stk[top]=c;
}

char pop()
{
char x;
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


char stktop()
{
char x;
if(top<0)
{
printf("\n\n\t\tSTACK UNDERFLOW!!!");
getch();
exit();
}
x=stk[top];
return(x);
}



int prcd(char a,char *s)
{
if( (a=='+'&& *s=='+')||(a=='+' && *s=='-')||(a=='+' && *s==')' )||
(a=='-'&& *s=='+')||(a=='-' && *s=='-')||(a=='-' && *s==')' )||
(a=='*'&& *s=='*') ||(a=='*' && *s== '+') ||(a=='*' && *s== '-') ||
(a=='*'&& *s== ')') ||(a=='*'&& *s== '/' )||
(a=='/'&& *s=='*') ||(a=='/' && *s== '+') ||(a=='/' && *s== '-') ||
(a=='/'&& *s== ')') ||(a=='/'&& *s== '/' )||
(a=='$'&& *s=='*') ||(a=='$' && *s== '+') ||(a=='$' && *s== '-') ||
(a=='$'&& *s== ')') ||(a=='$'&& *s== '/' ))
return(1);
else
return(0);
}