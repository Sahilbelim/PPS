/* To find area of triangle(a=h*b*.5) where a = area, h = height, b = base */
#include<stdio.h>
void main()
{
    float a, h, b;

    printf("Enter Height: ");
    scanf("%f", &h);
    printf("Enter Base: ");
    scanf("%f", &b);

    a = h * b * 0.5;
    printf("Area of triangle: %f", a);
}