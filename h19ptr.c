#include<stdio.h>
int main()
{
   int age=22;//normal variable
   int *ptr=&age;//*here refers to value at adress operator
   int _age=*ptr;//& refers to adress of operator
   printf("%d",_age) ;
   
}