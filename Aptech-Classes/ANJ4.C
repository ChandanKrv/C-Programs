/*demostration of array calculation*/
 main()
 {
 int mar[30];
 int i;
 float s=0;
 float p,bs,cs;
 clrscr();
 for(i=1;i<=3;i++)
 {
 printf("\nEnter the salary of the employees");
 scanf("%d",&mar[i]);
 s=(s+mar[i]);
 }
 printf("\nThe total amount of the employee is=Rs%f",s);
 p=(s<65000?.10:.20);
 printf("\nThe profit is=%f",p);
 cs=(s*p);
 bs=(s+cs);
 printf("\nThe Basic Amount of the employee is=Rs%f",bs);
 getch();
 }
