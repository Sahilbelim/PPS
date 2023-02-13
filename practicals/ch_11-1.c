//print address of variable using pointer  
#include<stdio.h>
void main()

{
    int a, *ptr_a;
    ptr_a = &a;
    printf(" Addess of a is %d\n", &a);
    printf(" Addess of a is %d", ptr_a);
}

