#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr_n, n, i, sum;

    printf("Enter value of N ##;;=>");
    scanf("%d",&n);

    ptr_n = (int *)calloc(n, sizeof(int));

    if(ptr_n==NULL)
    {
        printf("ptr null");
    }
    else
    {
        printf("entered %d value\n", n);

        for (i = 0; i < n;i++)
        {
            printf("enter %d:::::::: ",i+1);
            scanf("%d", ptr_n + i);
            sum += *(ptr_n + i);
        }
        printf(" sum ====> %d", sum);
    }
}