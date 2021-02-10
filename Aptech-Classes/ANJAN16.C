/* A PROGRAM TO FIND THE REVERSE OF A STRING.........*/
/* A PROGRAM TO CHECK THE PALINDROME OF A STRING......*/
void main()
 {
 char *p;
 int m,n,i,j=0,x=0,k=0;
 clrscr();
 printf("\n\n\tEnter The String.......");
 gets(p);
 m=strlen(p);
 n=m;
 x=(n-1);
 printf("\n\n\t\t The Length Of The String Is....%d",n);
 delay(1000);
 printf("\n\n\t\t");
 printf("\n\n\t\t The Reverse String Is....\t");
 for(i=n-1;i>=0;i--)
 {
 printf("%c",p[i]);
 }
 delay(1000);
 printf("\n\n\t\t");
 printf("\n\n\t\t The Actual String Is....\t");
 for(i=0;i<n;i++)
 {
 printf("%c",p[i]);
 }
 delay(1000);
 while(p[j]!='\0')
  {
  if(p[k]!=p[x])
   {
    printf("\n\n\t\tThe Character Is Not A Palindrome.....");
    delay(1000);
    exit(1);
   }
  else
   {
    j++;
    x--;
    k++;
   }
  }
  printf("\n\n\t\tThe Character Is A Palindrome........");
  delay(1000);
 }