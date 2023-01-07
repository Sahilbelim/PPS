// To read two integer numbers from user and find the maximum number among them. Program 1
#include<stdio.h>
void main()
{
    int a, b;
    
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a=%d is maximum", a);
    }
    else
    {
        printf("b=%d is maximum", b);
    }
}