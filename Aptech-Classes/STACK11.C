		/*IMPLEMENTING ALL THE STACK OPERATIONS*/
int stack[10],top=-1,max=9;
void main()
{
int cho,i,j,k,l;
clrscr();
//void push(void);
//void sostk();
while(cho!=5)
{
clrscr();
printf("\n\t...............MAIN MENU.....................");
printf("\n\t1>>  STACK PUSH.....................");
printf("\n\t2>>  STACK POP......................");
printf("\n\t3>>  STACK TOP......................");
printf("\n\t4>>  STACK DISPLAY..................");
printf("\n\t5>>  EXIT...........................");
printf("\n\n\t\tEnter The Choice.....");
scanf("%d",&cho);
if(cho<1||cho>5)
{
printf("\n\t\tWrong Choice!!!");
getch();
exit();
}
switch(cho)
{
case 1:push();
       break;
case 2:i=pop();
       printf("\n\n\t\tThe Popped Element Is....%d",i);
       getch();
       break;
case 3:j=stktop();
       printf("\n\n\t\tThe Topmost Element Is....%d",j);
       getch();
       break;
case 4:sostk();
       break;
case 5:printf("\n\n\t\tOK BYE BYE....");
       getch();
       exit();

}
}
}





push()
{
int x;
if(top==max)
{
printf("\n\n\t\tSTACK OVERFLOW!!!");
getch();
exit();
}
printf("\n\n\t\tEnter The Element....");
scanf("%d",&x);
top++;
stack[top]=x;
printf("\n\n\t\tThe Element At Position %d Is %d....",top+1,x);
getch();
}



int pop()
{
int x;
if(top<0)
{
printf("\n\n\t\tSTACK UNDERFLOW!!!");
getch();
exit();
}
x=stack[top];
top--;
return(x);
}



int stktop()
{
int x;
if(top<0)
{
printf("\n\n\t\tSTACK UNDERFLOW!!!");
getch();
exit();
}
x=stack[top];
return(x);
}

sostk()
{
int i;
if(top<0)
printf("\n\t\tThere Are No Items In The Stack....");
for(i=0;i<=top;i++)
printf("\n\t\tThe Element At Position %d Is %d...",i+1,stack[i]);
getch();
}