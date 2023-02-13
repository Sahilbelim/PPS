#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int *ptr_N, N,i,sum;
    printf("enter the value of N ");
    scanf("%d", &N);

    ptr_N = (int *) malloc (N * sizeof(int));
    if(ptr_N==NULL)
    {
    printf("ptr  null");
    }
    else
    {
    printf("entere the %d number value \n", N);

    for (i = 0; i < N;i++)
    {
        printf("enter %d ==> ", i + 1);
        scanf("%d",ptr_N+i);
        sum += *(ptr_N + i);
    }
    printf("sum ==> %d", sum);
    }
    free(ptr_N);
}