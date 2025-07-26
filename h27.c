#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    printf("ptr=%u",ptr);
    ptr++;//it adds no.of bytes that particular datatype hasS
    printf("ptr=%u",ptr);
}//case1 for int,float it adds 4,char 1