#include<stdio.h>
int fact(int n);
int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    printf("%d",fact(a));//actual parameter
}
int fact(int n){//formal parameter
    if(n>=1){
        return n * fact(n-1);
    }
    else return 1;
}