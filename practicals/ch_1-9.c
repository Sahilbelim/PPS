// To find out distance traveled by the equation d = ut + at^2
#include<stdio.h>
void main()
{
    int t;
    float d, u, a;
   

    printf("Enter the time in seconds: ");
    scanf("%d", &t);
    printf("Enter the velocity: ");
    scanf("%f", &u);
    printf("Enter the acceleration: ");
    scanf("%f", &a);

    d = u * t + a * t * t;
    printf("Total distance travelled = %.2f", d);
}