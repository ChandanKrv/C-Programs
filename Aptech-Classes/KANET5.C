void main()
{
void f();
printf("\nI am In Main");
f();
}
void f()
{
printf("\nI am In Function");
main();
getch();
}