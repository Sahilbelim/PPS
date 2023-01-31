#include<stdio.h>

void main()

{
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("ABC.txt", "r+");
    fp2 = fopen("ABC.txt", "w");
    if(fp1==NULL)
    {
        printf("file is not exist");
    }
    else
    {
            while((ch=getc(fp1)) !=EOF)
            {
                printf("%c", ch);
                fprintf(fp2, "%c", ch);
            }
    }

    fclose(fp1);
    fclose(fp2);

    fp2 = fopen("ABC2.txt", "r");
    if (fp2 == NULL)
    {
            printf("file is not exist");
    }
    else
    {
            while ((ch = getc(fp2)) != EOF)
            {
                printf("%c", ch);
            }
    }
    fclose(fp2);
}
