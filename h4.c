#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++){
        if(i==5){
            break;//prints till 4
        }
        printf("%d\n",i);
    }
}