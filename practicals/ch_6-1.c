// To insert 10 element in 1-dimensional array and print the same. Program 1
#include<stdio.h>
void main()
{
    int i, a[10];
    

    // Intialization
    for (i = 0; i <= 9; i++)
    {
        printf("Enter A[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("===============Display Array===================");
    for (i = 0; i <= 9; i++)
    {
        printf("\n A[%d]: %d", i, a[i]);
    }
}