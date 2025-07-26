#include<stdio.h>
int main()
{
    int rows,i,j,space;
    printf("enter no. of rows :");
    scanf("%d",&rows);
    for(int i=1;i<rows;i++){
        for(space=1;space<=i;space++){
            printf("\n ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
    }
}