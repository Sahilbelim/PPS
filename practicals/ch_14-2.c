#include<stdio.h>

struct student
{
    int RollNo;
    char name[30];
    int age;

};

void main()

{
    FILE *fp;
    char ch;
    int i, n;
    struct student s1;
    int pos;
    fp = fopen("ABC.txt", "w");

    printf("add the how many student information");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter Student Rollno:");
        scanf("%d", &s1.RollNo);
        printf("Enter Student Name:");
        scanf("%s", s1.name);
        printf("Enter Student Age:");
        scanf("%d", &s1.age);
        fprintf(fp, "\n%d %s %d", s1.RollNo, s1.name, s1.age);
    }
    fclose(fp);

    fp = fopen("ABC.txt", "r");

    if(fp==NULL)
    {
        printf("file is not exist");
    }
    else
    {
            while((ch==getc(fp)) !=EOF)
            {
                printf("%c", ch);
            }
    }

    fclose(fp);
}
