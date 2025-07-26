#include<stdio.h>
int main()
{
    int marks[5];
    printf("enter marks of each student:");
    scanf("%d%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
    printf("\nmarks of harshitha is %d",marks[0]);
    printf("\nmarks of sravya is %d",marks[1]);
    printf("\nmarks of harika is %d",marks[2]);
    printf("\nmarks of chintu is %d",marks[3]);
    printf("\nmarks of u is %d",marks[4]);
    int sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    printf("\nsum is %d",sum);
    int average=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    printf("\naverage is %d",average);
}