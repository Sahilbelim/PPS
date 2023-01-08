// To search the element in 1-dimensional array using given index
#include<stdio.h>
void main()
{
    int i, j, a[10], n, key;

    printf("Enter the size of Array:");
    scanf("%d", &n);

    // Intialization
    for (i = 0; i <= n - 1; i++)
    {
        printf("Enter A[%d]:", i);
        scanf("%d", &a[i]);
    }
    // Search
    printf("Enter key you wants to search:");
    scanf("%d", &key);
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] == key)
        {
            printf("Key found at location : %d", i);
            
        }
    }
    printf("Entered key not found");

}