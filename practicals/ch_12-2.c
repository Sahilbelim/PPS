// Access student basic details using pointer of structure and print the same
#include<stdio.h>
    struct Student
    {
        int rollno;
        char name[20];
        int age;
    } *s1;
    void main()
    {
        // struct student *s1;
    

        printf("Enter Student Rollno:");
        scanf("%d", &s1->rollno);
        printf("Enter Student Name:");
        scanf("%s", s1->name);
        printf("Enter Student Age:");
        scanf("%d", &s1->age);

        printf("Rollno:%d\n", s1->rollno);
        printf("Name:%s\n", s1->name);
        printf("Age:%d\n", s1->age);
    }