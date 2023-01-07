//To find area of circle (a=PI*r*r) where a = area, r = radius, PI=3.14
#include<stdio.h>
void main()
{
    float a, r, PI = 3.14;
    printf("Enter Radius of circle:");
    scanf("%f", &r);
    a = PI * r * r;
    printf("\n Area of circle: %f", a);
}