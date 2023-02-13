// Write a program to demonstrate array of pointers.
#include <stdio.h>

void main()
{
    int i, l;
    char a, *p[10], b[3][25];

    printf("Enter the string of pointer:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter String-%d:", i);
        scanf("%s", p[i]);
    }
    printf("Display String of Pointer:");
    for (i = 0; i < 3; i++)
    {
        printf("\nString-%d:", i);
        printf("%s", p[i]);
    }

    printf("\n\n\nEnter the string of Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter String-%d:", i);
        scanf("%s", b[i]);
    }
    printf("Display String of Array:");
    for (i = 0; i < 3; i++)
    {
        printf("\nString-%d:", i);
        printf("%s", b[i]);
    }
    printf("\n\n\n Size of Pointer-String:%d", sizeof(p));
    printf("\n Size of Pointer-Array:%d", sizeof(b));
    printf("\n Difference between Pointer-Array and Pointer-String:%d", sizeof(b) - sizeof(p));

}  