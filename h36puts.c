//printf puts
#include<stdio.h>
int main()
{
    char name[12];
    printf("enter name:");
    scanf("%s",name);
    //printf("%12.5s",name);
    puts(name);
    puts(name);//it can automatically print in next line
    printf("%s",&name[2]);//ikkada & isthene akkadinunchi print avtadi
    //otherwise ull not get o/p
}