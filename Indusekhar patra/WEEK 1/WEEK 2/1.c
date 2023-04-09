#include<stdio.h>
#include<stdlib.h>

int occurence(int l, int array[], int num)
{
    int count = 0,i;
    for (i = 0; i < l; i++)
        if (array[i] == num)
            count ++ ;

    return count;
}

int main()
{
    int len, number, *array;
    printf("Enter Length of Array: ");
    scanf("%d", &len);

    array = (int*)malloc(len * sizeof(int));
    
    printf("Enter the Array: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &array[i]);
        
    printf("Enter a Number:");
    scanf("%d",&number);

    printf("Occurence of %d in Array: %d", number, occurence(len, array, number));
}