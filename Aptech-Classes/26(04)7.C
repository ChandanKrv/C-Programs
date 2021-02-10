void main()
{
char *p[]={"anjan","ranjan","palash","debarshee"};
char s,*ss;
int t=0,iii,ii,i,j,k,count;
clrscr();
//printf("\n\tEnter The String......");
//gets(p);
for(iii=0;iii<=4;iii++)
t+=strlen(p[iii]);
iii=0;
for(ii=0;ii<=4;ii++)
{
for(i=0;i<strlen(p[ii]);i++)
{
*(ss+iii)=*(p[ii]+i);
iii++;
}
}
*(ss+t)='\0';
puts(ss);
for(i=0;i<t;i++)
 {
   count=0;
   s=ss[i];
   if(s!=' ')
   {
    for(ii=0;ii<t;ii++)
     {
       if(s==ss[ii])
	{
	 count++;
	 ss[ii]=' ';
	}
     }
   printf("\n\t\tThe Character %c Occurs %d Times...",s,count);
   }
 }
  getch();
}