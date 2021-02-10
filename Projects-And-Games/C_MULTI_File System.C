#include<stdio.h>
#include<conio.h>
void main()
{
   int choice;
   char cnt;
   void NewFile(void);
   void ReadFile(void);
   void AppendFile(void);
   void CopyFile(void);
   void MergeFile(void);
   clrscr();
   do{
    clrscr();
     printf("Select your Choice..\n\n");
     printf("1. Create New File \n");
     printf("2. Read Existing File\n");
     printf("3. Append to a File\n");
     printf("4. Copy Files Data\n");
     printf("5. Merge Files Data\n");
     printf("6. Exit \n\n");
     scanf("%d",&choice);
switch(choice){

case 1: NewFile();
	printf("\n\nEnter 11 to Continue..\n");
	scanf("%d",&cnt);
	break;
case 2: ReadFile();
	printf("\n\nEnter 11 to Continue..\n");
	scanf("%d",&cnt);
	break;
case 3: AppendFile();
	printf("\n\nEnter 11 to Continue..\n");
	scanf("%d",&cnt);
	break;
case 4: CopyFile();
	printf("\n\nEnter 11 to Continue..\n");
	scanf("%d",&cnt);
	break;
case 5: MergeFile();
	printf("\n\nEnter 11 to Continue..\n");
	scanf("%d",&cnt);
	break;
case 6: exit();
	break;
default: printf("Idiot Choose correct option and Try Again");
}
}while(cnt==11);
getch();
}

void NewFile()
{

FILE *fp;
char name[10],data[20];
clrscr();
printf("You Selected to Create New File\n\n");
printf("Enter the file name.. ");
scanf("%s",name);
fp=fopen(name,"w");
if(fp==NULL)
printf("File not Found");
printf("Enter The String.. ");
scanf("%s",data);
fprintf(fp,"%s",data);
printf("Done");
fclose(fp);

}

void ReadFile()
{
char stored[100];
char name[40];
FILE *fp;
clrscr();
printf("You Have Selected to Read Existing File\n\n");
printf("Enter your file name with extension.. ");
scanf("%s",name);
fp=fopen(name,"r");
if(fp==NULL)
printf("File Doesn't Exist");
fscanf(fp,"%s",&stored);
printf("%s",stored);
fclose(fp);
}

void AppendFile()
{
char stored[100],stored2[100];
char name[40];
FILE *fp;
clrscr();
printf("You Have Selected Append Mode\n\n");
printf("Enter your file name.. ");
scanf("%s",&name);
fp=fopen(name,"a+");
if(fp==NULL){
printf("File Doesn't Exist");
getch();
exit();}
fscanf(fp,"%s",&stored);
printf("%s\n",stored);
printf("Enter STRING to Append.. ");
scanf("%s",&stored2);
fprintf(fp,"%s",stored2);
printf("Appended Successfully");
fclose(fp);
}

void CopyFile()
{
FILE *fp,*fpn;
int choice;
char name[80],newname[80];
char data[100];
clrscr();
printf("How do you want to copy your File's Data\n");
printf("1. From EXISTING File\n");
printf("2. By Creating NEW File\n");
scanf("%d",&choice);
  switch(choice){

  case 1: printf("Enter Existing file name.. ");
	  scanf("%s",&name);
	  fp=fopen(name,"r");
	  if(fp==NULL)
	  {
	  printf("File Not Found");
	  getch();
	  exit();
	  }
	  printf("Enter a NEW File Name.. ");
	  scanf("%s",&newname);
	  fpn=fopen(newname,"w");
	  while(fgets(name,79,fp)!=NULL)
	  fputs(name,fpn);
	  fclose(fp);
	  fclose(fpn);
	  printf("Data Copied %s to new file called %s",name,newname);
	  break;
 case 2: printf("Enter New File Name");
	 scanf("%s",&name);
	 fp=fopen(name,"w");
	 printf("Enter a String");
	 scanf("%s",&data);
	 fprintf(fp,"%s",data);
	    printf("Enter another new File name");
	    scanf("%s",&newname);
	    fpn=fopen(newname,"w");
	    fprintf(fpn,"%s",data);
	 fclose(fp);
	 fclose(fpn);
	   printf("Data Copied %s to new file called %s",name,newname);
	break;
  }
  }

void MergeFile()
{ FILE *fp,*fpn,*fp2,*fpn2;
int choice;
char name[80],newname[80],name2[80],newname2[80];
char data[100],data2[100];
clrscr();
printf("How do you want to Merge Your File's Data\n\n");
printf("1. From BOTH EXISTING Files\n");
printf("2. By Creating a NEW FILE and Merge with an EXISTING\n");
scanf("%d",&choice);
  switch(choice){

  case 1: printf("Enter the FIRST file name.. ");
	  scanf("%s",&name);
	  fp=fopen(name,"r");
	  if(fp==NULL)
	  {
	  printf("File Not Found");
	  getch();
	  exit();
	  }
	  fscanf(fp,"%s",&data);
	  printf("Enter the SECOND file name.. ");
	  scanf("%s",&name2);
	  fp2=fopen(name2,"r");
	  if(fp2==NULL)
	  {
	  printf("File Not Found");
	  getch();
	  exit();
	  }
	  fscanf(fp2,"%s",&data2);

	  printf("What will the Name of MERGED File.. ");
	  scanf("%s",&newname);
	  fpn=fopen(newname,"w");
	  fprintf(fpn,"%s",data);
	  fprintf(fpn,"%s",data2);
	  fclose(fp);
	  fclose(fpn);
	  fclose(fp2);
	  printf("Data Merged Successfully");
	  break;
 case 2: printf("Enter the Name of EXISTING File.. ");
	 scanf("%s",&name);
	 fp=fopen(name,"r");
	 if(fp==NULL)
	 {
	 printf("File Not Found");
	 getch();
	 exit();
	 }
	 fscanf(fp,"%s",&data);
	    printf("Enter NEW File name.. ");
	    scanf("%s",&newname);
	    fpn=fopen(newname,"w");
	    printf("Enter the STRING.. ");
	    scanf("%s",&data2);
	 fprintf(fpn,"%s",data2);
	 printf("What will the name MERGED File..");
	 scanf("%s",&newname2);
	 fpn2=fopen(newname2,"w");

	 fprintf(fpn2,"%s",data);
	 fprintf(fpn2,"%s",data2);
	 fclose(fp);
	 fclose(fpn);
	 fclose(fp2);
	 fclose(fpn2);
	   printf("Data Merged Successfully");
	break;
  default : printf("Enter a Valid Input");

  }
  }