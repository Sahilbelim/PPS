/*To compute Centigrade from Fahrenheit(c=5.0*(f-32)/9.0)*/
#include<stdio.h>
void main()
{
    float f, c;
    clrscr();
    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &f);

    c = 5.0 * (f - 32) / 9.0;

    printf("Fahrenheit Temperature:%f \n", f);
    printf("Centigrade Temperature:%f ", c);
}