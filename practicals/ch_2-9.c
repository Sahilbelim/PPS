// To calculate total marks and percentage of three subject and display grades according to following table(if else ladder)
#include<stdio.h>
void main()
{
    int marks;
    clrscr();
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 80)
    {
        printf("Distinction");
    }
    else if (marks <= 79 && marks >= 60)
    {
        printf("First Class");
    }
    else if (marks <= 59 && marks >= 40)
    {
        printf("Second Class");
    }
    else if (marks < 40 && marks >= 0)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Marks");
    }
}