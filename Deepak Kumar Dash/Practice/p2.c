#include<stdio.h>
void main()
{
    // Assuming the maximum marks to be 100 in each subject

    int m1, m2, m3, m4, m5;
    printf("Enter the marks in 5 subjects : ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    int total = m1 + m2 + m3 + m4 + m5;
    double average = total / 5.0;
    double percentage = total / 500.0 * 100;

    printf("Total is %d\n", total);
    printf("Average is %lf\n", average);
    printf("Percentage is %lf\n", percentage);
    
}