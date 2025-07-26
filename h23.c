#include<stdio.h>
void square(int n);
void _square(int *n);
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    square(number);
    printf("number=%d\n",number);
    _square(&number); //gave adress
    printf("number=%d\n",number);
}
//call by value(we pass value as argument)
void square(int n){
    n=n*n;
    printf("square=%d\n",n);
}
//call by reference(we pass adress)
void _square(int *n){
    *n=(*n)*(*n);
    printf("square=%d\n",*n);
}