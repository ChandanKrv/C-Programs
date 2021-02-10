void main()
{
 void rev(char *);
 char name[80];
 clrscr();
 puts("What is your name:");
 gets(name);
 rev(name);
 getch();
 }

void rev(char *n)
 {
 if(*n=='\x0')
 return;
 else
 rev(n+1);
 printf("%c",*n);
 }