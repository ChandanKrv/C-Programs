void main()
{
char *s1,*s2;
int k,l;
clrscr();
printf("\n\t\tEnter The 1st String........");
gets(s1);
printf("\n\t\tEnter The 2nd String........");
gets(s2);
strnlen(s2);
strncat(s1,s2);
strncpy(s1,s2);
strncmp(s1,s2);
strnrev(s1);
}

strnlen(char *t1)
{
int i=0;
while(*t1!='\x0')
{
t1++;
i++;
}
printf("\n\t\tThe Length Of 1st String Is....%d",i);
getch();
}

strncpy(char *t1,char *t2)
{
int i=0,j;
j=strlen(t2);
while(i<=j)
{
*(t1+i)=*(t2+i);
i++;
}
printf("\n\t\tThe Copied String Is.....");
puts(t1);
getch();
}

strncat(char *t1,char *t2)
{
int i,j=0,k=strlen(t2);
i=strlen(t1);
while(j<=k)
{
*(t1+i+j)=*(t2+j);
j++;
}
printf("\n\t\tThe Concatenated String Is.....");
puts(t1);
getch();
}

strnrev(char *t1)
{
int i,j;
i=strlen(t1);
printf("\n\t\tThe Reverse String Is.....");
for(j=i;j>=0;j--)
printf("%c",t1[j]);
getch();
}

strncmp(char *t1,char *t2)
{
int h=0,i,j,k;
j=strlen(t1);
k=strlen(t2);
for(i=0;i<=j&&i<=k&&h==0;i++)
h=*(t1+i)-*(t2+i);
printf("\n\t\tThe Compared Result Is..%d", h);
getch();
}