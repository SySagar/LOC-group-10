#include<stdio.h>
void main()
{
    int arr[20] = {1, -1, -2, -7, -3, 9, 0, 4, 5 ,7, 8, -9, -3, 23, 93, -12, -12, 17, -19, 9};
    int l = 0, r = 20 - 1;
    
    while(l <= r)
    {
        while(arr[l]< 0 && l <= r)
            l ++;
        while(arr[r] >= 0 && l <= r)
            r --;
        
        if(l <= r)
        {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        }
    }

    for(int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }
}