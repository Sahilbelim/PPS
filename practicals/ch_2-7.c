//. To read three integer numbers from user and find the minimum number among them. Program 7
#include<stdio.h>
void main()
{

    int a, b, c;
    clrscr();
    printf("Enter No1:");
    scanf("%d", &a);
    printf("Enter No2:");
    scanf("%d", &b);
    printf("Enter No3:");
    scanf("%d", &c);

    printf("\n********minimum********\n");
    if (a < b)
    {
        if (a < c)
        {
            printf("No1:%d is minimum", a);
        }
        else
        {
            printf("No3:%d is minimum", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("No2:%d is minimum", b);
        }
        else
        {
            printf("No3:%d is minimum", c);
        }
    }