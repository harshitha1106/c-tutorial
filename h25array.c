#include<stdio.h>
int main()
{
    int marks[3];
    printf("enter math :");
    scanf("%d",&marks[0]);
     printf("enter phy :");
    scanf("%d",&marks[1]);
     printf("enter chem :");
    scanf("%d",&marks[2]);
    printf("phy=%d, chem=%d, math=%d",marks[1],marks[2],marks[0]);
}