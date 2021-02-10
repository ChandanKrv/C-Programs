#define HELLO printf("\n\t\tHello Students, how r u ?")
#define HALLO printf("\n\t\tHello Boys, where r u ?")
void main()
{
int x;
clrscr();
printf("\n\tFirst Number==>> ");
scanf("%d",&x);
if(x>20)
HELLO;
else
HALLO;
getch();
}