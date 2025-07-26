#include<stdio.h>
int main(){
    int n,temp,r,rev=0,sum=0;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    printf("the num is:%d",n);
    while(n > 0){
       r=n%10;
       rev= rev * 10 +r;
       sum=sum+r;
       n=n/10;
    }
    printf("\nsum is %d",sum);
    printf("\nthe rev is:%d",rev);
    if(temp==rev){
        printf("\n no. is palindrome");
    }
    else{
        printf("\n not a pal");
    }
}