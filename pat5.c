#include<stdio.h>
int main(){
    int n,u=1;
    printf("enetr n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",u++);
        }
        printf("\n");
    }
}