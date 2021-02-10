#include <string.h>
void main()
{
char *i="RATHIKANTO",*j="arnabs",*k1,*k2,*k3;
int m,n,o,p,c;
clrscr();
printf("\n\n\t\tThe First String Is......\t");
puts(i);
printf("\n");
printf("\n\n\t\tThe Second String Is.......\t");
puts(j);
m=strlen(i);
n=strlen(j);
printf("\n\n\t\tThe Length Of 1st String......%d",m);
printf("\n\n\t\tThe Length Of 2nd String......%d",n);
printf("\n\n\t\tThe Starting & Ending Position Is.....");
scanf("%d,%d",&o,&p);
k1=(char *)malloc(sizeof(m));
k2=(char *)malloc(sizeof(n));
k3=(char *)malloc(sizeof(m));
for(c=0;c<o-1;c++)
{
*(k1+c)=*(i+c);
}
for(c=0;c<=n;c++)
{
*(k2+c)=*(j+c);
}
for(c=0;c<=m;c++)
{
*(k3+c)=*(i+c+p);     /*TO TAKE THE TOTAL STRING (I+C+O-1)*/
}
printf("\n\n\t\t");   /*TO TAKE THE OMMITED VALUE (I+C+P)*/
printf("%s",k1);
printf("%s",k2);
printf("%s",k3);
getch();
}