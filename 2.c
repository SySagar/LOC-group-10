#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The Number %d is Positive.");
    }
    else if(a<0)
    {
        printf("The Number is %d is Negative.");
    }
    else{
        printf("The Number is Zero.");
    }
}