#include<stdio.h>
int main()
{
    int a[5];
    printf("enter the array");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    
    for(int i=4;i>=0;i--)
        printf("array element at index %d is : %d\n",i,a[i]);
    
}