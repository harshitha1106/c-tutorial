#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
    char name[20]={'h','a','r','s','h','u','\0'};
    printf("%s",name);
    // to print length of string we use strlen() funcn
    c=strlen(name);
    printf("length of str is=%d",c);
}