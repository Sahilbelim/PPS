// To read four integer numbers from user and find sum, product and average of these four numbers
#include<stdio.h>
    void
    main()
{

    int num1, num2, num3, num4;
    int sum;
    long int product;
    float average;

   

    printf("Enter four numbers:");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    sum = num1 + num2 + num3 + num4;
    product = num1 * num2 * num3 * num4;
    average = (float)sum / 4;

    printf("Sum=%d \n", sum);
    printf("Product=%ld \n", product);
    printf("Average=%f", average);
}