#include<stdio.h>
void main()
{
    // Taking sides lengths as parameters
    int l1, l2, l3;
    printf("Enter the sides : ");
    scanf("%d %d %d", &l1, &l2, &l3);

    // Checking if triangle is Equilateral
    if(l1 == l2 && l2 == l3)
    {
        printf("Equilateral\n");
    }

    else if(l1 == l2 || l2 == l3 || l1 == l3)
    {
        printf("Isosceles\n");
    }

    else
    {
        printf("Scalene\n");
    }
    


}