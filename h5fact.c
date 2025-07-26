#include<stdio.h>//factorial
int main()
{
    int n;
    printf("enter n value");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("final factorial is %d",fact);
}