////To a program whether the number is even or odd.
#include<stdio.h>
void main()
{
    int num;
    
    printf("Enter number:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d number is even", num);
    }
    else
    {
        printf("%d number is odd", num);
    }
}