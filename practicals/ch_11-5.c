//print address of variable using pointer  
#include<stdio.h>
void main()

{
    int n,i,a[10],*ptr_a[10];
    printf("entern the N ");
    scanf("%d", &n);
    for (i = 0; i <n;i++)
    {
        ptr_a[i] = &a[i];
        printf("enter the a-%d ", i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n;i++)
    {
        printf(" the vlue of a-[%d] ==> %d\n",i+1, *ptr_a[i]);
    }
}

