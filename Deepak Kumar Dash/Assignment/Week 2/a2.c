#include<stdio.h>
void main()
{
    int arr1[5] = {1, 3, 4, 5, 6};
    int arr2[4] = {5, 6, 9, 2};
    int arr[5 + 4];
    int k = 0;
    for(int i = 0; i < 5; i ++)
    {
        arr[k ++] = arr1[i];
    }
    for(int i = 0; i < 4; i ++)
    {
        arr[k ++] = arr2[i];
    }

    for(int i = 4 + 5 - 1; i >= 0; i --)
    {
        printf("%d ", arr[i]);
    }
}