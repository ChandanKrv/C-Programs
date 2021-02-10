void main()
{
 char *s1,*s2;
 int i,j1,j2,len1,len2,k,index,max;
 int pm(char *,char *,int,int);
 clrscr();
 printf("\n\n\t\tE N T E R  T H E   S T R I N G  :=>");
 gets(s1);
 printf("\n\n\t\tE N T E R   P A T T E R N :=>");
 gets(s2);
 len1=strlen(s1);
 len2=strlen(s2);
 index=pm(s1,s2,len1,len2);
 if(index==-1)
   printf("\n\n\t\tPATTERN NOT FOUND");
 getch();
}
int pm(char* s1,char* s2,int len1,int len2)
 {
   int i,j1,j2,flag=-1;
   if(len1<len2)
    {
      printf("\n\n\t\tPATTERN SIZE MUST BE LESS THAN STRING SIZE");
      getch();
      exit();
    }
   for(i=0;i<=len1;i++)
    {
     j1=i;
     j2=0;
     while(j2<=len2)
      {
       if(s1[j1]==s2[j2])
	{
	 j1++;
	 j2++;
	}
       else
	if(j2==len2)
	  {
	   printf("\n\n\t\tTHE PATTERN OCCURS ON THE %d-TH POSITION OF THE STRING",i+1);
	   flag=1;
	   break;
	  }
	else
	   break;
      }
    }
    return(flag);
  }