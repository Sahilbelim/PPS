/*
  To find area of following Rectangle (a=l*b, where a = area, l = length, b=breadth)
*/
#include <stdio.h>
void main()
{

    int l, b, a;
    
    printf("Enter the Length of Rectangle:");
    scanf("%d", &l);
    printf("Enter the Breadth of Rectangle:");
    scanf("%d", &b);
    a = l * b;
    printf("Area of Rectangle: %d \n", a);
}