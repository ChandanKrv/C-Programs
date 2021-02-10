		    /* Reverse of a string using stack */
char stack[40],top=-1;
int n;
char *a,b;
void main()
{
int i=0;
char pop();
void push(char *,char);
clrscr();
printf("\n\n\t\t Enter The String:- ");
gets(a);
printf("\n\n\t\t The Reverse Of The String Is......");
n=strlen(a);
while(i<n)
{
push(stack,a[i]);
i++;
}
i--;
while(i>=0)
{
printf("%c",pop());
i--;
}
getch();
}


void push(char stack[],char c)
{
if(top>=40)
{
printf("\n\t\tStack Overflow...");
getch();
exit();
}
top++;
stack[top]=c;
}


char pop()
{
char x;
if(top==-1)
{
printf("\n\t\tStack Underflow....");
getch();
exit();
}
x=stack[top];
top--;
return(x);
}