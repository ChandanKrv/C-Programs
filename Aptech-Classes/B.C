void main()
{
 char name[100];
 int i,j=0,l,k=0;
 clrscr();
 gets(name);
 l=strlen(name);
 for(i=0;i<l;i++)
 {
 j=j++;
  for(k=1;k<25;k++)
 {
  gotoxy(j,k); //gotoxy(column,row)
  textcolor(k);
  putch(name[i]);
  //sound(1000);
  delay(150);
  //nosound();
  //delay(75);
  if(k!=24)
  {
   gotoxy(j,k);
   cprintf(" ");
  }
  nosound();
 }
}
getch();
}