#include<stdio.h>//scanf gets
int main()
{
    char name[10];
    printf("enter name:");
    //scanf("%s",&name);//scanf function will only read till the void space.
    gets(name);//gets funcn will read even after the void space
    printf("%s",name);
}/*in scanf we can write scanf("%4s",name) then it prints 4 char
but in gets we cannot and its main drawback is buffer flowS*/

//no format specifier is used in gets and puts