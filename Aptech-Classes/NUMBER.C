#include<math.h>
#include<string.h>
void main()
{
long n,k;
int l,x,y,z,w,p;
char a[20][10]={" ","One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ","Sixteen ","Seventeen ","Eighteen ","Nineteen "};
char *b;
clrscr();
printf("\n\n\tEnter A Number Ranged From 1 To 99999....\t");
scanf("%ld",&n);
l=(log10(n)+1);
if(l<1||l>5)
{
printf("\n\n\tThe Number Is Out Of Range....");
getch();
exit(1);
}
else
printf("\n\n\tThe Length Of The Number Is...%d\t",l);
getch();
printf("\n\n\t\t");
(char*)b=(char*)calloc(100,sizeof(char));
switch(l)
{
case 1:
  k=n;
  anjan1:
  strcat(b,a[k]);
  printf("\t%s",b);
  getch();
  break;
case 2:
   k=n;
   anjan2:
   if(k>9&&k<=19)
   strcat(b,a[k]);
   else
   if(k>=20&&k<30)
   strcat(b,"Twenty ");
   else
   if(k>=30&&k<40)
   strcat(b,"Thirty ");
   else
   if(k>=40&&k<50)
   strcat(b,"Forty ");
   else
   if(k>=50&&k<60)
   strcat(b,"Fifty ");
   else
   if(k>=60&&k<70)
   strcat(b,"Sixty ");
   else
   if(k>=70&&k<80)
   strcat(b,"Seventy ");
   else
   if(k>=80&&k<90)
   strcat(b,"Eighty ");
   else
   if(k>=90&&k<=99)
   strcat(b,"Ninety ");
   if(k>19)
   {
    x=(k%10);
    strcat(b,a[x]);
    }
    printf("%s",b);
    getch();
    break;
case 3:
   k=n;
   anjan3:
   y=k/100;
   strcat(b,a[y]);
   strcat(b,"Hundred ");
   k%=100;
   if(k>19)
   goto anjan2;
   else
   goto anjan1;
case 4:
  k=n;
  z=k/1000;
  strcat(b,a[z]);
  strcat(b,"Thousand ");
  k%=1000;
  if(k>99)
  goto anjan3;
  else
  if(k>19)
  goto anjan2;
  else
  goto anjan1;
case 5:
  k=n;
  w=k/1000;
  if(w>9&&w<=19)
  strcat(b,a[w]);
  else
  if(w>=20&&w<30)
  strcat(b,"Twenty ");
  else
  if(w>=30&&w<40)
  strcat(b,"Thirty ");
  else
  if(w>=40&&w<50)
  strcat(b,"Forty ");
  else
  if(w>=50&&w<60)
  strcat(b,"Fifty ");
  else
  if(w>=60&&w<70)
  strcat(b,"Sixty ");
  else
  if(w>=70&&w<80)
  strcat(b,"Seventy ");
  else
  if(w>=80&&w<90)
  strcat(b,"Eighty ");
  else
  if(w>=90&&w<=99)
  strcat(b,"Ninety ");
  if(w>19)
  {
  p=w%10;
  strcat(b,a[p]);
  }
  strcat(b,"Thousands ");
  k%=1000;
  if(k>99)
  goto anjan3;
  else
  if(k>19&&k<=99)
  goto anjan2;
  else
  goto anjan1;
 }
 }