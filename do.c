#include<stdio.h>  //prints number of its evenS
int main()
{
    int n;
    do{
        printf("enter num");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2!=0){
            break;
        }
    }while(1);
}