#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements : ", n);
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched : ");
    int element;
    scanf("%d", &element);

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
            count ++;
    }

    printf("Element %d is present %d times in array", element, count);
}