//. To enter a distance in to kilometre and convert it in to meter, feet, inches and centimeter. Program 10
#include<stdio.h>
void main()
{
    float km, m, ft, in, cm;
    
    printf("Enter Distance in Kilometer= ");
    scanf("%f", &km);
    m = km * 1000;
    ft = km * 3280.84;
    in = km * 39370.1;
    cm = km * 100000;

    printf("\nDinstance in kilometres = %f", km);
    printf("%.2f kilometer = %.2f meter \n", km, m);
    printf("%.2f kilometer = %.2f feet \n", km, ft);
    printf("%.2f kilometer = %.2f inches \n", km, in);
    printf("%.2f kilometer = %.2f centimetre\n", km, cm);
}