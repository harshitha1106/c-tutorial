#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,min,gcd;
    printf("enter a b values:");
    scanf("%d %d",&a,&b);
    if(a<b)
        min=a;
    else
        min=b;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    printf("gcd:%d\n",gcd);
}