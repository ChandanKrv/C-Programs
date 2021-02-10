void main()
{
 char name[80];
 clrscr();
 puts("What is your name:");
 gets(name);
 rev(name);
 printf("%s",name);
 getch();
 }

 rev(char *namee)
 {
 int l, i;
 char temp,*tt;
 l=strlen(namee);
 tt=namee+l-1;
 for(i=1;i<=l/2;i++)
 {
  temp=*namee;
  *namee=*tt;
  *tt=temp;
  namee++;
  tt--;
 }
}