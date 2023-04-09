#include<stdio.h>
void main()
{
    int arr[10] = {1, 3, 5, 1, 9, 4, 12, 90, 21, 93};
    int max = arr[0]; // assuming the first element to be minimum
    int n = 10;
    for(int i = 1; i < n; i ++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("MAX is : %d\n", max);
}