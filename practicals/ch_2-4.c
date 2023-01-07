// To read marks of a student from keyboard whether the student is pass or fail( using if else) Program 4
#include<stdio.h>
void main()
{
    int marks;
    
    printf("\n Enter marks:");
    scanf("%d", &marks);

    if (marks >= 23)
    {
        printf("You are Pass");
    }
    else
    {
        printf("Yor are Fail");
    }
}