#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr_n, N1, N2, i;

    printf("enter the size of array  ");
    scanf("%d",&N1);
    ptr_n = (int *)malloc(N1 * sizeof(int));
    printf("Addresses of  allocated memory: \n");
    for (i = 0; i < N1;i++)
    {
        printf(" %d :::: %u \n", i + 1,ptr_n+i);
      
    }
    printf("enter the new size of array ");
    scanf("%d",&N2);
    ptr_n = (int *)realloc(ptr_n, N2 * sizeof(int));
    printf("Addresses of newly allocated memory: \n");
    for (i = 0; i < N2;i++)
    {
        printf(" %d :::: %u\n ", i + 1, ptr_n + i);
    }
}