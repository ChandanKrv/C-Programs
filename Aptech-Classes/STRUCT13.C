struct book
{
char name[30];
int cno;
};
void main()
{
void disp(struct book );
struct book b1={"Let Us C",101};
clrscr();
disp(b1);
}
void disp(struct book b11)
{
printf("\n%s\n%d",b11.name,b11.cno);
getch();
}