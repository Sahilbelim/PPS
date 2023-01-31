#include<stdio.h>

void main()

{
    FILE *fp;
    char ch;
    fp = fopen("ABC.txt", "r+");
    if(fp==NULL)
    {
        printf("file is not exist");
    }
    else
    {
            while((ch=getc(fp)) !=EOF)
            {
                printf("%c", ch);
            }
    }

    fclose(fp);
}
