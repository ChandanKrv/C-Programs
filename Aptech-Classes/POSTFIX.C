#define max 25
void push(int);
int pop();
int stack[max],top=-1;
void main()
{
 char str[max],*s;
 int n1,n2,n3,nn;
 clrscr();
 printf("Enter the postfix expression to be evaluated:");
 gets(str);
 s=str;
 while(*s!='\x0')
 {
  if(*s>=48 && *s<=57)
  {
    nn=*s-'0';
    push(nn);
  }
  else
  {
    n1=pop();
    n2=pop();
    switch(*s)
    {
     case '+':
	n3=n2+n1;
	break;
      case '-':
	n3=n2-n1;
	break;
      case '*':
	n3=n2*n1;
	break;
      case '/':
	n3=n2/n1;
	break;
      default:
	 printf("\nUnknown operator.....");
	 getch();
	 exit();
    }
    push(n3);
  }
  s++;
 }
 printf("\nResult Is.....%d",pop());
 getch();
}
void push(int item)
{
 if(top==max)
   printf("\nStack is full....");
 else
 {
  top=top+1;
  stack[top]=item;
 }
}
int pop()
{
 int item;
 if(top==-1)
 {
  printf("\nStack is empty....");
  return(-1);
 }
 else
 {
  item=stack[top];
  top--;
  return(item);
 }
}