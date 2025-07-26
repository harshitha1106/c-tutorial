#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("enter l and b values:");
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("\narea of rectangle is=%d and perimeter of rectangle is=%d",area,peri);
}