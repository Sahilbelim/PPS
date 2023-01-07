// To find that the accepted number is Positive, Negative or Zero. Program 5
#include<stdio.h>
void main()
{
    int num;
    
    printf("Enter number:");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d number is positive", num);
    }
    else if (num < 0)
    {
        printf("%d number is negative", num);
    }
    else
    {
        printf("%d number equal to zero", num);
    }
}