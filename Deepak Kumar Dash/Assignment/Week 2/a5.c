#include<stdio.h>
void main()
{
    int arr[10] = {1, 3, 6, 7, 7, 3 , 2, 5, 7, 6};
    int newArr[10];
    int n = 10;
    for(int i = 0; i < n; i ++)
    {
        newArr[i] = arr[i];
    }
    for(int i = 0; i < n; i ++)
    {
        printf("%d ", newArr[i]);
    }
}