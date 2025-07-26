#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],sum=0;
    printf("enter elements of matrix 1:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of matrix 2:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("elements of matrix 1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("elements of matrix 2:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("matrix mul is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=0;
            for(int k=0;k<3;k++){
                sum+=a[i][k]*b[k][j];
            }
                c[i][j]=sum;
                printf("%d\t",c[i][j]);                
        }
        printf("\n");
    }
}