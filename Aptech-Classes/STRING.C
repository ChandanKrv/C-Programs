/*Program name :- day-8\string.c*/
/*String processing....*/
#include <string.h>
void my_display(char *);	 /*to display a string*/
int my_strlen(char *);           /*to print the length of a string*/
char * my_strupr(char *);        /*to convert a string to upper case*/
char *my_strcpy(char *,char *);  /*to copy a string to another*/
void my_strcpy1(char **,char *); /*to copy a string to another(other version)*/
char * my_strcat(char *,char *); /*to concatenate two strings*/
int my_strcmp(char *,char *);    /*to compare two strings*/
void main(void)
  {
    char *st1="anjandada",*st2="partho",*st3;
    clrscr();
   my_display(st1);
    printf("\n\t\tThe length of the string is %d....",my_strlen(st1));
    printf("\n\n\t\tThe difference value is %d....",my_strcmp(st1,st2));
    printf("\n\n\t\tThe difference value is %d....",strcmp(st1,st2));
    printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    st1=my_strcat(st1,st2);
    my_display(st1);
    my_strcpy1(&st3,st1);
    my_display(st3);
    st3=my_strcpy(st3,st1);
    my_display(st3);
    printf("\n\t\tThe string in the upper case is %s....",my_strupr(st1));
    getch();
  }
int my_strcmp(char *str1,char *str2)
  {
    int count,str1_len,str2_len,diff;
    str1_len=my_strlen(str1);
    str2_len=my_strlen(str2);
    diff=0;
    for(count=0;count<=str1_len && count<=str2_len && diff==0;count++)
      {
	diff=*(str1+count)-*(str2+count);
      }
    return(diff);
  }
char * my_strcat(char *dest,char *src)
  {
    int count,src_len,dest_len;
    char *temp;
    src_len=my_strlen(src);
    dest_len=my_strlen(dest);
    /* allocate memory for destination string */
    if (((char *) temp = (char *) malloc(src_len+dest_len+1)) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
    temp=my_strcpy(temp,dest);
    for(count=0;count<=src_len;count++)
      {
	*(temp+dest_len+count)=*(src+count);
      }
    return(temp);
  }
void my_strcpy1(char **dest,char *src)
  {
    int count,src_len;
    src_len=my_strlen(src)+1;
    /* allocate memory for destination string */
    if (((char *) *dest = (char *) malloc(src_len)) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
    for(count=0;count<src_len;count++)
      {
	*(*dest+count)=*(src+count);
      }
  }
char * my_strcpy(char *dest,char *src)
  {
    int count,src_len;
    src_len=my_strlen(src)+1;
    /* allocate memory for destination string */
    if(((char*)dest=(char*)malloc(src_len))==NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
    for(count=0;count<src_len;count++)
      {
	*(dest+count)=*(src+count);
      }
    return(dest);
  }
char * my_strupr(char *st)
  {
    int count;
    char ch;
    count=0;
    while(*(st+count)!='\0')
      {
	ch=*(st+count);
	if (ch>=97 && ch<=122)
	  ch-=32;
   *(st+count)=ch;
	count++;
      }
    return(st);
  }
int my_strlen(char *st)
  {
    int count;
    count=0;
    while(*(st+count)!='\x0')
      count++;
    return(count);
}
void my_display(char *st)
  {
    printf("\n\t\tThe string is %s....",st);
  }