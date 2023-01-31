#include<stdio.h>

void main()

{
    FILE *fp1;
    char ch;
    int pos;
    fp1 = fopen("ABC.txt", "r+");
    pos = ftell(fp1);
    printf("Position of File Pointer Index:%d\n", pos);

    if (fp1 == NULL)
    {
            printf("File does not exist");
    }
    else
    {
            fseek(fp1, 5, 0);
            pos = ftell(fp1);
            printf("Position of File Pointer Index:%d\n", pos);

            fseek(fp1, 10, 1);
            pos = ftell(fp1);
            printf("Position of File Pointer Index:%d\n", pos);

            fseek(fp1, -5, 2);
            pos = ftell(fp1);
            printf("Position of File Pointer Index:%d\n", pos);

            while ((ch = getc(fp1)) != EOF)
            {
                printf("%c", ch);
            }

            rewind(fp1);
            pos = ftell(fp1);
            printf("\n\nPosition of File Pointer after Rewind:%d\n", pos);

            while ((ch = getc(fp1)) != EOF)
            {
                printf("%c", ch);
            }
    }
    pos = ftell(fp1);
    printf("\nPosition of File Pointer Index:%d", pos);
    fclose(fp1);
}
