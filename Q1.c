#include<stdio.h>

int main(){
    int i,n,m;
    printf("enter the size of the arr1");
    scanf("%d",&n);
    printf("enter the element of arr1");
    int arr1[n];
    for(i=0;i<n;i++)
      {scanf("%d",&arr1[i]);}
   
   
    printf("enter the size of the arr2");
    scanf("%d",&m);
    int arr2[m];
    printf("enter the elements of the arr2");
    for(i=0;i<m;i++)
       {scanf("%d",&arr2[i]);}


    for(i=0;i<m;i++)
       arr1[n+i]=arr2[i];
       printf("%d",&arr1[n+m]);
    


    return 0;       

}