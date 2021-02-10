#define DEF
//#undef DEF
void main()
{
int i=2;
clrscr();
#ifdef DEF
i=i*2;
printf("\n\t\tThe Result Is => %d",i);
#else
printf("\n\t\tThe Result Is => %d",i);
#endif
getch();
}
