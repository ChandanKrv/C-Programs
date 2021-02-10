/*calculation of if statement*/
void main()
{
float s,r,gs;
clrscr();
printf("\nEnter The Basic Pay");
scanf("\n%f",&s);
if (s>10000)
{
printf("\nThe HRA Is 10%");
r=(s*.10);
printf("\nThe HRA Is =Rs %f",r);
getch();
}
else
{
printf("\n\n\n\tthe hra is 15%");
r=(s*.15);
printf("\n\n\n\tthe hra is =Rs %f",r);
getch();
}
gs=(s+r);
printf("\n\n\tThe Gross Salary Is=Rs %f",gs);
getch();
}