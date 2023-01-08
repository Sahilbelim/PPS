//. Insert five student basic details using array of structure and print the same.
#include<stdio.h>

    struct Student
    {
        int rollno;
        char name[20];
        int age;
    } s1[5];
    void main()
    {
        // struct student s1[5];
        int i, n;
        clrscr();
        printf("How many students information you wants to Add:");
        scanf("%d", &n);
        for (i = 0; i <= n - 1; i++)
        {
            printf("Enter Student Details:%d\n", i + 1);
            printf("Enter Student Rollno:");
            scanf("%d", &s1[i].rollno);
            printf("Enter Student Name:");
            scanf("%s", s1[i].name);
            printf("Enter Student Age:");
            scanf("%d", &s1[i].age);
        }
        for (i = 0; i <= n - 1; i++)
        {
            printf("Student Details:%d\n", i + 1);
            printf("Rollno:%d\n", s1[i].rollno);
            printf("Name:%s\n", s1[i].name);
            printf("Age:%d\n", s1[i].age);
        }
    