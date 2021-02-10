void main()
{
char *nm,*n,*n2="you",*nm1;
int i=0,j=0,l;
clrscr();
printf("\n\tenter the name:- ");
gets(nm);
printf("\n\t enter the char.:- ");
gets(n);
for(i=0;i<strlen(nm);i++)
{
if(*(nm+i)!=' ')
{
*(nm1+j)=*(nm+i);
j++;
}
 if(*(nm+i)==' ')
  {
   *(nm1+j)=' ';
   j++;
   i--;
   i--;
     if(*(nm+i)==' ')
	 {
	   i++;
	   if(*(nm+i)==*n)
	    {
	    j--;
	    j--;
	    *(nm1+j)=' ';
	    j++;
	    for(l=0;l<3;l++)
	    {
	    *(nm1+j)=*(n2+l);
	    j++;
	    }
	    *(nm1+j)=' ';
	    j++;
	    }
	    i++;
	 }
     else
       {
	 i++;
	 i++;
       }
  }
}
nm1[j]='\0';
printf("\n\n\t\t%s",nm1);
getch();
}