/* To compute Fahrenheit from centigrade (f=1.8*c +32)*/
#include<stdio.h>
void main()
{
    float f, c;
    clrscr();
    printf("Enter temperature in Centigrade:");
    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("Centigrade Temprature:%f \n", c);
    printf("Fahrenheit Temprature:%f ", f);
}