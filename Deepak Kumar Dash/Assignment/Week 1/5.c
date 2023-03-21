#include<stdio.h>
#include<math.h>
void main()
{
    double pi = 3.14159265358979;
    int r;
    printf("Enter the radius : ");
    scanf("%d", &r);

    printf("Diameter is %d\n", 2*r);
    printf("Circumference is %lf\n", 2 * pi * r);
    printf("Area is %lf\n", pi * r * r);

}