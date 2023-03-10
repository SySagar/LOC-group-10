#include<stdio.h>
void main()
{
    double lenIncm;
    printf("Enter length in cm : ");
    scanf("%lf", &lenIncm);

    printf("Length in Km is %lf\n", 1e-5*lenIncm);





}