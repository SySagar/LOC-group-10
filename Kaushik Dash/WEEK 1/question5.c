#include<stdio.h>
int main()
{
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    const float pi = 3.14159;

    printf("The diameter is %f.\n", 2 * r);
    printf("The circumference is %f.\n", 2.0 * r * pi);
    printf("The area is %f.\n", pi * r * r);
}