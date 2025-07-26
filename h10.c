#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    int s= sum(a,b);
    printf("%d\n",s);
}
int sum(int a,int b){//here you can also put other values they can be restored as a and b
    return a+b;
}