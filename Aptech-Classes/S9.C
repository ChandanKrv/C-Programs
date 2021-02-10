#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j=0,k=0,l=0;
clrscr();
gotoxy(36,12);
_setcursortype(_NOCURSOR);
printf("%d:%d:%d:%d",i,j,k,l);
printf("\n press any key");
getch();
for(i=0;i<=23;i++){
for(j=0;j<=59;j++){
for(k=0;k<=59;k++){
for(l=0;l<=99;l++){
clrscr();
gotoxy(36,12);
printf("%d:%d:%d:%d",i,j,k,l);
delay(10);
if(kbhit())
{
goto aa;
}
}
}
}
}
aa:
getch();
getch();
}