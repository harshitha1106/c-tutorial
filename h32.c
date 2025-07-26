#include<stdio.h>
int main()
{
    int arr1[5];
    int arr2[5];
    int arr3[5];
    printf("enter arr1 elements:");
    for(int i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    printf("enter arr2 elements:");
    for(int i=0;i<5;i++)
        scanf("%d",&arr2[i]);
    for(int i=0;i<5;i++){
        arr3[i]=arr1[i]+arr2[i];
        printf("array element at index %d is %d\n",i,arr3[i]);
    }
    
    
}