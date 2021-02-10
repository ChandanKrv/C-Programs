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
   sr s,*s1;
   s1=&s;
  // int i;//
   clrscr();
  // for(i=0;i<=2;i++)//

   printf("enter the name:");
   scanf("%s",s1->name);
   printf("enter the roll:");
   scanf("%d",&s1->roll);
   printf("enter the paper 1:");
   scanf("%d",&s1->m1);
   printf("enter the paper 2:");
   scanf("%d",&s1->m2);
   //}
   printf("\n");
   //for(i=0;i<=2;i++)
   //{
   printf("\n the name: %s",s1->name);
   printf("\n the roll: %d",s1->roll);
   printf("\n the paper 1: %d",s1->m1);
   printf("\n the paper 2: %d",s1->m2);
   printf("\n the paper 2: %d",(s1->m2+s1->m1));
   getche();
   getch();
      //}
   }