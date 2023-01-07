// To make simple calculator operation like addition, subtraction, multiplication, division etc.
#include<stdio.h>
void main()
{
    int a, b, c;
    clrscr();
    printf("Enter No1:");
    scanf("%d", &a);
    printf("Enter No2:");
    scanf("%d", &b);

    printf("=============Calculator============\n");
    c = a + b;
    printf("Addition:%d\n", c);

    c = a - b;
    printf("Subtraction:%d\n", c);

    c = a * b;
    printf("Multiplication:%d\n", c);

    c = a / b;
    printf("Division:%d\n", c);
}