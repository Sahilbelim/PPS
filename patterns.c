/* Write a program to print following patterns:
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>

void main()
{
    int i, j, k = 1, s;
    
    printf("________________-_patterns 1 ___________-\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    printf("________________-_patterns 2 ___________-\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    printf("________________-_patterns 3 ___________-\n");
    for (i = 1; i <= 5; i++)
    {
        for (s = 4; s >= i; s--)
        {
            printf(" "); 
        }
        for (j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    printf("________________-_patterns 4 ___________-\n");
for (i = 1; i <= 5; i++)
    {
        for (s = 1; s <= i;s++)
        {
            printf(" ");
        }
        for (j = 1; j <= 6 - i;j++)
        {
            printf("$");
        }
            printf("\n");
    }
    
}