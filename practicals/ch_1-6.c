/* To calculate simple interest (i = (p*r*n)/100) where
    i = Simple interest
    p = Principal amount
    r = Rate of interest
    n = Number of years */
#include<stdio.h>
void main()
{
    int p, n;
    float r, i;

    printf("Enter Principal amount:");
    scanf("%d", &p);
    printf("Enter Rate of interest:");
    scanf("%f", &r);
    printf("Enter Number of years:");
    scanf("%d", &n);

    i = (p * r * n) / 100;

    printf("Simple Interest:%f", i);
}