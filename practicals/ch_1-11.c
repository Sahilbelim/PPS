//. To prepare pay slip using following data.Program 11
/*
    Da = 10 % of basic,
    Hra = 7.50 % of basic, Ma = 300,

    Pf = 12.50 % of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf*/
#include<stdio.h>
void main()
{
    long int basic;
    float Da, Hra, Pf, Gross, Nt;
    int Ma;
    

    printf("Enter basic Salary: ");
    scanf("%ld", &basic);

    Da = basic * 0.10;
    Hra = basic * 0.075;
    Ma = 300;
    Pf = basic * 0.1250;

    Gross = basic + Da + Hra + Ma;
    Nt = Gross - Pf;

    printf("\n\n");
    printf("Basic = %ld \n", basic);
    printf("D.A. = %.2f \n", Da);
    printf("H.R.A. = %.2f \n", Hra);
    printf("M.A. = %d \n", Ma);
    printf("P.F. = %.2f \n", Pf);
    printf("\n\n");
    printf("Gross Salary = %.2f \n", Gross);
    printf("Net Salary = %.2f \n", Nt);
}