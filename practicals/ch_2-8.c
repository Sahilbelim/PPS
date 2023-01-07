// To check whether the entered character is capital, small letter, digit or any special character. Program 8
#include<stdio.h>
void main()
{

    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("Capital Letter");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Small Letter");
    }
    else if (ch >= 48 && ch <= 67)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}