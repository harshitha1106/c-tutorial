#include<stdio.h>
int main(){
    int a[]={3,6,4,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}