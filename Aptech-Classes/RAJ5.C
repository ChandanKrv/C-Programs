void main()
{
struct sturesult
{
   int roll;
   char name[5];
   int m1;
   int m2;}
   ;
   typedef struct sturesult sr;
   sr s[15];
   int i;
   clrscr();
   for(i=0;i<=2;i++)
   {
   printf("enter the name:");
   scanf("%s",s[i].name);
   printf("enter the roll:");
   scanf("%d",&s[i].roll);
   printf("enter the paper 1:");
   scanf("%d",&s[i].m1);
   printf("enter the paper 2:");
   scanf("%d",&s[i].m2);
   }
   printf("\n");
   for(i=0;i<=2;i++)
   {
   printf("\nenter the name: %s",s[i].name);
   printf("\nenter the roll: %d",s[i].roll);
   printf("\nenter the paper 1: %d",s[i].m1);
   printf("\nenter the paper 2: %d",s[i].m2);
   getch();
   }
   }