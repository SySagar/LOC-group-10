#include<stdio.h>

int main()
{
    int radius;
    print("enter radius");
    scanf("%d", &radius);

    printf("diameter is: %d", 2 * radius);
    printf("area is:%d", 3.14 * radius * radius);
    printf("circumference is:%d", 2 * 3.14 * radius); 
    
     
    return 0;
}