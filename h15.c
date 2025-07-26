#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter n value");
    scanf("%d",&n);
    printf("sum of n nos is:%d",sum(n));
}
//recursive funcn
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumn1=sum(n-1);//sum of 1 to n
    int sumn=sum(n-1)+n;
    return sumn;
}
