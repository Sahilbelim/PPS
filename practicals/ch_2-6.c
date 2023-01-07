//. To read three integer numbers from user and find the maximum number among them. Program 6
#include<stdio.h>
void main()
{
    int a, b, c;
    
    printf("Enter No1:");
    scanf("%d", &a);
    printf("Enter No2:");
    scanf("%d", &b);
    printf("Enter No3:");
    scanf("%d", &c);

    printf("\n********MAXIMUM********\n");
    if (a > b)
    {
        if (a > c)
        {
            printf("No1:%d is maximum", a);
        }
        else
        {
            printf("No3:%d is maximum", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("No2:%d is maximum", b);
        }
        else
        {
            printf("No3:%d is maximum", c);
        }
    }
}