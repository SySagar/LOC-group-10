#include<stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int sum = 0;
    do
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;


    }while(n != 0);

    printf("Sum of digits is  %d\n", sum);
}