// Write a program to read the file ABC and print it in console.
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    
    fp = fopen("ABC.txt", "r+");
    if (fp == NULL)
    {
        printf("File not exist:");
    }
    else
    {
        while ((ch = getc(fp)) != EOF)
        {
            printf("%c", ch);
        }
    }
    fclose(fp);

}


