//. Find factorial of a number using recursion.
#include<stdio.h>
int factorial (int n)
{

    if (n == 0 || n == 1)
    {
        return (1);
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
void main()
{

    int n;
    long int ans;
    
    printf("Enter number:");
    scanf("%d", &n);
    ans = factorial(n);
    printf("Factorial of %d!=%ld", n, ans);
}