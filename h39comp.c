#include<stdio.h>
#include<string.h>//strcomp
int main()
{
    int value=0;
    char s1[20],s2[20];
    printf("enter string s1 : ");
    gets(s1);
    printf("enter string s2 : ");
    gets(s2);
    /*value=strcmp(s1,s2);
    if(value==0){
        printf("same");}
    else{
        printf("not same");
    }*/
    for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){//using for loop
        if(s1[i]!=s2[i]){
            value=1;
            break;
        }
    }
    if(value==1){
        printf("both the given strgs are not same!!");
    }
    else{
        printf("yes! they are same");
    }
}