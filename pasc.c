#include<stdio.h>
int main(){
    int n,coef;
    printf("enter n value:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int space=0;space<=n-i-1;space++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            if(j==0)
            coef=1;
            else
            coef= coef*(i-j+1)/j;
            printf("%4d",coef);
        }
        printf("\n");
    }
}