// To read two integer numbers from user and find the minimum number among them.
#include<stdio.h>
void main()
{

    int a, b;
    
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        printf("a=%d is minimum", a);
    }
    else
    {
        printf("b=%d is minimum", b);
    }
}