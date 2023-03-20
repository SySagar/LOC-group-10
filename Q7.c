#include<stdio.h>
int main()
{
	int i,arr[100],maximum,size,index;
	printf("\n Enter size of array:- ");
	scanf("%d",&size);
	printf("\n Enter array elements:- ");
 
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	maximum=arr[0];
	for(i=0;i<size;i++)
	{
		if(maximum<arr[i])
		{
		maximum=arr[i];
		index=i;
		}
	}
	printf("\n The maximum number %d is present at %d th location in the given array. \n \n",maximum,index+1);
	return 0;
 
}