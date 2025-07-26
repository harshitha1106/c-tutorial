#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    //how to print adress
   /* printf("%p\n",&age);//hexa decimal %p
    printf("%u\n",&age);//unsigned int %u
    printf("%u\n",ptr);*/
//above both ans same cause adress of age is stored under ptr
   // printf("%u",&ptr);//adress of ptr changes
   //how to print value
   printf("%d\n",age);
   printf("%d\n",*ptr);
   printf("%d\n",*(&age));
}