void main()
{
char str1[50],str2[50];
clrscr();
printf("\n\n\n\t\tEnter The Strings......\n\n");
scanf("\n%s\n%s",&str1,&str2);
strcpy(str2,str1);
printf("\n\n\tThe New string is \n\t\t\t%s",str2);
getch();
}