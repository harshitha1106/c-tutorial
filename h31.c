#include<stdio.h>
int main()
{
    int arr[10];
    int even=0,odd=0;
    printf("enter array elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[10]);
         if(arr[i]%2==0){
            even++;}
        else{
            odd++;}}
    printf("even elements are %d",even);
    printf("\nodd elements are %d",odd);
}