#include<stdio.h>
void main()
{
    int i, a[10];

    for (i = 0; i <= 9;i++)
    {
        printf("Enter the a %d ", i);
        scanf("%d", &a[i]);

    }
    printf("                   this is Array          ");
    for (i = 0; i <= 9;i++)
    {
        printf("\n A [%d] :  %d ", i, a[i]);
    }
}
