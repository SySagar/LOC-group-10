#include<stdio.h>
void main()
{
    int n; // number of lines
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    int count = 1;

    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d\t", count ++);
        }
        printf("\n");
    }


}