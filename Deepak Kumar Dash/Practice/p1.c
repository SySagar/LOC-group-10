#include<stdio.h>
void main()
{
int year;
printf("Enter year : ");
scanf("%d", &year);

if(year % 4 == 0)
{
    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            printf("Yes Leap Year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }
    else
    {
        printf("Yes Leap Year\n");
    }

}
else
{
    printf("Not a leap year\n");
}
}