#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
void main()
{
    struct student s;

    printf("Enter Roll No : ");
    scanf("%d",&s.rollno);

    printf("Enter Name : ");
    scanf("%s",s.name);

    printf("Enter Marks : ");
    scanf("%d",&s.marks);

    printf("\nRoll No : %d",s.rollno);
    printf("\nName : %s",s.name);
    printf("\nMarks : %d",s.marks);
}