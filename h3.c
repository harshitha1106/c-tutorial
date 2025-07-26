#include<stdio.h>//rev table
int main(){
    int n;
    printf("enter n value");
    scanf("%d",&n);
    for (int i = 10; i>=1; i--)
    {
        printf("%d\n",n*i);
    }
    
}