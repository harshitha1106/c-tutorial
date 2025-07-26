#include<stdio.h>
int main()
{
    int a;
    printf("enter a value:");
    scanf("%d",&a);
    if(a%2==0){
        printf("the given number is %d even",a);
    }
    else{
        printf("the given number is %d odd",a);
    }
}