#include<stdio.h>
int main()
{
    int a[2][3],sum=0;
    printf("enter 2darray elements: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\n sum is %d",sum);    
}