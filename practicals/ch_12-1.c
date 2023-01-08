// Insert student basic details using structure and print the same
#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    int age;

} s1;
void main()
{

    printf("Enter Student Rollno:");
    scanf("%d", &s1.rollno);
    printf("Enter Student Name:");
    scanf("%s", s1.name);
    printf("Enter Student Age:");
    scanf("%d", &s1.age);

    printf("Rollno:%d\n", s1.rollno);
    printf("Name:%s\n", s1.name);
    printf("Age:%d\n", s1.age);

    // printf("Size of Structure Student;%d", sizeof(struct Student));
}