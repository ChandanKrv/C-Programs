char x[50];
void main()
{
 char *name,*nm;
 int i,y,k=0,flag=0;
 void rev(char *);
 clrscr();
 puts("What is your name:");
 gets(name);
 y=strlen(name);
 rev(name);
 printf(" ");
 for(i=y;i>=0;i--)
 {
 printf("%c",x[i]);
 *(nm+k)=x[i];
 k++;
 }
 for(i=0;i<=y;i++)
 printf("%c",nm[i]);
 i=0;
 while(i<y)
 {
 if(*(nm+i)==*(name+i))
 flag=1;
 i++;
 }
 if(flag==0)
 printf("\n\t\tPalindrome........");
 else
 printf("\n\t\tNot Palindrome........");
 getch();
 }

 void rev(char *n)
    {
      int i=-1;
      if(*n=='\x0')
      return;
      else
      rev(n+1);
/* printf("%c",*n);*/
printf("%c",*n);
*(x+i)=*n;
i++;
}