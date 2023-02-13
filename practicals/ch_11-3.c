//print address of variable using pointer  
#include<stdio.h>
void swap(int*a,int*b)
{
    printf("\n value befor swap a=%d and b=%d\n", *a, *b);
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("\nvalue after swap a=%d and b=%d\n", *a, *b);
}
void main()

{
    int a,b;
   
    printf(" enter the number a and b \n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
}

