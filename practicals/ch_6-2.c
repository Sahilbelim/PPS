//. To find minimum and maximum element from 1-Dimensional array.
#include<stdio.h>
void main()
{
    int i, a[100], n, max;
    
    printf("Enter the size of Array:");
    scanf("%d", &n);

    // Intialization
    for (i = 0; i <= n - 1; i++)
    {
        printf("Enter A[%d]:", i);
        scanf("%d", &a[i]);
    }

    // Maximum
    max = a[0];
    for (i = 1; i <= n - 1; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("\n\nMaximum=%d", max);
}