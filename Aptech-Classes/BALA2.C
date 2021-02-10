#define LOOP 100
#define ACC 0.0001
void main()
{
int n;
float x,term,sum=0;
clrscr();
printf("Input value of x: ");
scanf("%f",&x);
for(term=1,n=1;n<=LOOP;++n)
{
sum+=term;
if(term<=ACC)
goto out;
term*=x;
}
printf("\n\t\tFinal Value Of N Is Not Sufficient\n");
printf("\t\tTo Achieve Desired Accuracy\n");
getch();
goto end;
out:
printf("\n\t\tExit From Loop\n");
printf("\t\t");
printf("Sum = %f; No. Of Terms = %d\n",sum,n);
getch();
end:
;
}