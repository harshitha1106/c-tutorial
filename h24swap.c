#include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main()
{
    int a;
    printf("enter a value");
    int b;
    printf("\nenter b value");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("a is %d\n and b is %d\n", a, b);
    _swap(&a,&b);
    printf("a is %d\n and b is %d\n", a, b);//swaping is actually done by call by refrence value
    
}
void swap(int a,int b){//call by value
    int t=a;
    a=b;
    b=t;
}
void _swap(int *a,int *b){//call by reference
    int t=*a;
    *a=*b;
    *b=t;
}