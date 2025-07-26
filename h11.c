#include<stdio.h>
void printTable(int n);
int main()
{
    int n;
    printf("enter n value");
    scanf("%d",&n);
    printTable(n);//argument/actual parameter
}
void printTable(int n){
    for(int i=10;i>=1;i--){
        printf("%d\n",n*i);//parameter formal
    }
}