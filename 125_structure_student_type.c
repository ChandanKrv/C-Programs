#include <stdio.h>
struct student
{
        int rollno;
        char name[20];
        int age;
};
struct student inputStudentData();
void showStudentData(struct student s);
int main()
{
        struct student s1;
        s1 = inputStudentData();
        showStudentData(s1);

        return 0;
}
struct student inputStudentData()
{
        struct student s;
        printf("Enter rollno, name and age of student ");
        scanf("%d", &s.rollno);
        fflush(stdin);
        gets(s.name);
        scanf("%d", &s.age);
        return (s);
}
void showStudentData(struct student s)
{
        printf("\n Student data \n");
        printf(" Roll NO : %d \n", s.rollno);
        printf(" NAME : %s \n", s.name);
        printf(" AGE : %d \n", s.age);
}
