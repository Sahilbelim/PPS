#include<stdio.h>
#include<stdlib.h>
void main()

{
 int N=10;
 int sum=0;
 int i;
 int *p;

 printf("Enter the number ");
 scanf("%d", &N);
 p = (int *)malloc(N * sizeof(int));
 if(p==NULL)
 {
     printf("Unable to allocate memory space. Program terminated.\n");
 }
 printf("Enter %d integer number(s)\n", N);

 for (i = 0; i < N; i++)
 {
     printf("Enter %d", (i + 1));
     scanf("%d", p);
     sum += *(p + i);
 }
 printf("sum =%d", sum);
 free(p);
}