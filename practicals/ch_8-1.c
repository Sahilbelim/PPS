///* Write a program to find a character from given string.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    char ch;
    int i;
    
    printf("Enter String:");
    gets(str);
    printf("Enter Character:");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            printf("Character '%c' is found at position:%d", ch, i + 1);
            
        }
    }
    printf("Character not found");

}