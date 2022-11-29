#include <stdio.h>
void main()
{
    int i, a[100], n, max;
    printf(" Enter the size of array ");
    scanf("%d", &n);
    for (i = 0; i <= n - 1;i++)
    {
        printf("Enter A[%d] : ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i <= n - 1;i++)
    {
        if (a[i] > max)
            {
                max = a[i];
            }
    }
    printf("\n The maximum number is %d", max);
    printf("\n ( * .__. * )\n");
}
