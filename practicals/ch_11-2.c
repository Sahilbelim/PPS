//print address of variable using pointer  
#include<stdio.h>
void main()

{
    int a=20,b=30,*ptr_a,*ptr_b;
    ptr_a = &a;
    ptr_b = &b;
    printf(" addition of a and b is %d\n",a+b);
    printf(" addtion  of a avd b is  %d", *ptr_a + *ptr_b);
}

