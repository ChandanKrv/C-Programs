void main()
/*{
 int a,b,i,c,n;
 a=0;
 b=1;
 i=1;
 clrscr();
 printf("\nEnter The Number Of Terms :");
 scanf("%d",&n);
 printf("\n%d",a);
 printf("\n%d",b);
 while(i<=(n-2))
   { c=a+b;
     a=b;
     b=c;
     i=i++;
	  printf("\n%d",c);
    }
    getch();
 }*/
 {
 int b=1,s=1,c,d=1;
 clrscr();
 printf("how many terms you want to continue --");
 scanf("%d",&c);
 while(d<=(c-1))
 {
  b=b+d;
  s=s+b;
  d++;
 }
 printf ("the sesult is--%d",s);
 getch();
 }